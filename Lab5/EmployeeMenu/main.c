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
#define size 2
///////////////////////



struct Employee{
      int id,age;
      float salary,overTime,deduct;
      char name[40],address[200],gender;

};




struct Employee insertInfo(struct Employee employee){

    gotoxy(3,1);
   printf("Id:\n");
   gotoxy(6,1);
   scanf("%i",&employee.id);
   gotoxy(3,2);
   printf("Name:\n");
   _flushall();
    gotoxy(8,2);
   gets(employee.name);
    gotoxy(3,3);
   printf("Age:\n");
    gotoxy(8,3);
   scanf("%i",&employee.age);
   gotoxy(3,4);
   printf("Gender:\n");
   _flushall();
   gotoxy(11,4);
   scanf("%c",&employee.gender);
   gotoxy(50,1);
   printf("Address:\n");
    _flushall();
    gotoxy(59,1);
   gets(&employee.address);
   gotoxy(50,2);
   printf("Salary:\n");
   gotoxy(58,2);
   scanf("%f",&employee.salary);
   gotoxy(50,3);
   printf("Overtime:\n");
   gotoxy(60,3);
   scanf("%f",&employee.overTime);
   gotoxy(50,4);
   printf("Deduct:\n");
   gotoxy(58,4);
   scanf("%f",&employee.deduct);

   return employee;
}
void printInfo(struct Employee employee){
   gotoxy(3,1);
   printf("Id:\n");
   gotoxy(6,1);
   printf("%i",employee.id);
   gotoxy(3,2);
   printf("Name:\n");
    gotoxy(8,2);
   puts(employee.name);
    gotoxy(3,3);
   printf("Age:\n");
    gotoxy(8,3);
   printf("%i",employee.age);
   gotoxy(3,4);
   printf("Gender:\n");
   gotoxy(11,4);
   printf("%c",employee.gender);
   gotoxy(50,1);
   printf("Address:\n");
    gotoxy(59,1);
   puts(employee.address);
   gotoxy(50,2);
   printf("Salary:\n");
   gotoxy(58,2);
   printf("%f",employee.salary);
   gotoxy(50,3);
   printf("Overtime:\n");
   gotoxy(60,3);
   printf("%f",employee.overTime);
   gotoxy(50,4);
   printf("Deduct:\n");
   gotoxy(58,4);
   printf("%f",employee.deduct);
}

void printAllInfo(struct Employee  employee){
  printf("Id:");

   printf("%i\n",employee.id);

   printf("Name:");

   puts(employee.name);
   printf("\n");

   printf("Age:");

   printf("%i\n",employee.age);

   printf("Gender:");

   printf("%c\n",employee.gender);

   printf("Address:");

   puts(employee.address);
   printf("\n");

   printf("Salary:");

   printf("%f\n",employee.salary);

   printf("Overtime:");

   printf("%f\n",employee.overTime);

   printf("Deduct:");

   printf("%f\n",employee.deduct);
}

int main()
{
    struct Employee emp[size];
    int j;
    int i,current=0,exitFlag=0;
    char ch;
    char menu[3][8]= {"New","Display","Exit"};
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
        //printf("Please Enter Key\n");
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
                //printf("New Screen will be developed\n");
                for(j=0;j<size;j++){
                        system("cls");
                    emp[j]=insertInfo(emp[j]);
                }
                getch();
                break;
            case 1:
                for(j=0;j<size;j++){
                    printAllInfo(emp[j]);
                    printf("------------------------------------------------\n");
                }
                getch();
                break;
            case 2:
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
