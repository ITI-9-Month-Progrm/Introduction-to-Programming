#include <stdio.h>
#include <stdlib.h>
#include "Employee.h"





int main()
{
    struct Employee emp[size];
    int j;
    int i,current=0,exitFlag=0;
    char ch;
    char str[40];
    int index,res;
    char menu[6][20]= {"New","Display by ID","DisplayAll","Delete by ID","Delete by Name","Exit"};
    for(i=0;i<size;i++){
       emp[i].id=0;
    }


    do
    {
        textattr(NPen);

        system("cls");
        //for display menu
        for(i=0; i<6; i++)
        {
            gotoxy(10,7+i*4);
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
        printf("\n");
        //for movement


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
                    current=6;
                }
                break;
            case Down:
                current++;
                if(current>6)
                {
                    current=0;
                }
                break;
            case Home:
                current=0;
                break;
            case End:
                current=6;
                break;
            }
            break;
        case Enter:
            switch(current)
            {
            case 0:
                system("cls");
                printf("Please Enter number of index\n");
                scanf("%i",&index);
                system("cls");
                if(index<size)
                {
                    emp[index]=insertInfo(emp[index]);
                }
                else
                {
                    printf("This index in not valid\n");
                }
                getch();
                break;
            case 1:

                system("cls");
                printf("Please Enter ID\n");
                scanf("%i",&index);
                system("cls");
                if(emp[index].id==index)
                {
                    system("cls");
                    printInfo(emp[index]);
                }
                else
                {
                    printf("ID Not Found\n");
                }
                getch();
                break;
            case 2:
                system("cls");
                for(j=0; j<size; j++)
                {
                    if(emp[j].id!=0){
                         printf("employee info of index  [ %i",j);
                         printf("] is :\n\n");
                         printAllInfo(emp[j]);
                    printf("-------------------------------------\n");
                    }
                   else {
                    printf("OOPs!!employee info of index  [ %i",j);
                    printf("] is Empty!\n");
                   }
                }
                getch();
                break;
                case 3:
                    system("cls");
                printf("Please Enter ID\n");
                scanf("%i",&index);
                system("cls");
                if(emp[index].id==index)
                {
                    system("cls");
                    emp[index]=deleteInfo(emp[index]);
                    printf("Done\n");

                }
                else
                {
                    printf("ID Not Found\n");
                }
                getch();

                    break;
                case 4:
                    system("cls");
                printf("Please Enter Name\n");
                _flushall();
                gets(str);
                //system("cls");
                for(j=0;j<size;j++){
                    res=strcmp(emp[j].name,str);
                         if(res==0)
                {
                    system("cls");
                    emp[j]=deleteInfo(emp[index]);

                    printf("Done\n");
                }
                else
                {
                    printf("Name Not Found\n");
                }

                }


                getch();

                    break;
            case 5:
                exitFlag=1;
                printf("\n");
                break;

            }
            break;

        case Esc:
            exitFlag=1;
            printf("\n");
            break;

        }



    }
    while(exitFlag==0);




    return 0;
}
