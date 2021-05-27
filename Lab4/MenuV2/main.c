#include <stdio.h>
#include <stdlib.h>
#include"conio.c"
#include<windows.h>
#include<string.h>

////////////////////////
#define NPen 0x07
#define HPen 0x70
#define Enter 13
#define Up 72
#define Down 80
#define Esc 27
#define Home 71
#define End 79
///////////////////////


int main()
{

    int i,current=0,exitFlag=0;
    char ch;
    char menu[3][5]= {"New","Save","Exit"};
    do
    {
        textattr(NPen);

        system("cls");
        //for display menu
        for(i=0; i<3; i++)
        {
            gotoxy(10,7+i*3);
            if(current==i)
            {
                textattr(HPen);
            }
            else
            {
                textattr(NPen);
            }
            _cprintf("%s",menu[i]);
        }
        //for movement
        printf("Please Enter Key\n");
        ch=getch();
        switch(ch)
        {
        case -32:
            ch=getch();
            switch(ch)
            {
            case Up:
                current--;
                if(current<0)
                {
                    current=2;
                }
                break;
            case Down:
                current++;
                if(current>2)
                {
                    current=0;
                }
                break;
            case Home:
                current=0;
                break;
            case End:
                current=2;
                break;
            }
            break;
        case Enter:
            switch(current)
            {
            case 0:
                printf("New Screen will be developed\n");
                getch();
                break;
            case 1:
                printf("Save Screen will be developed\n");
                getch();
                break;
            case 2:
                exitFlag=1;
                break;

            }
            break;

        case Esc:
            exitFlag=1;
            break;

        }



    }
    while(exitFlag==0);














    return 0;
}
