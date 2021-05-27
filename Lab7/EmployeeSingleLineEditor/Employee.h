#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED



#endif // EMPLOYEE_H_INCLUDED

#include<windows.h>
#include<string.h>


////////////////////////


///////////////////////



struct Employee
{
    int id,age;
    float salary,overTime,deduct;
    char name[40],address[200],gender;

};




void printInfo(struct Employee employee,int addressLength,int nameLength)
{
    int i=0;

    gotoxy(3,1);
    printf("Id:\n");
    gotoxy(6,1);
    printf("%i",employee.id);
    gotoxy(3,2);
    printf("Name:\n");
    gotoxy(8,2);
    i=0;
   for(i=0;i<nameLength;i++){
     printf("%c",employee.name[i]);
   }
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
     i=0;
   for(i=0;i<addressLength;i++){
     printf("%c",employee.address[i]);
   }

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

