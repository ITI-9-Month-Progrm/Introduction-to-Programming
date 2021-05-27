#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED



#endif // EMPLOYEE_H_INCLUDED
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
#define size 5
///////////////////////



struct Employee
{
    int id,age;
    float salary,overTime,deduct;
    char name[40],address[200],gender;

};


struct Employee deleteInfo(struct Employee emp){
emp.id=0;
emp.age=0;
emp.salary=0.0;
emp.deduct=0.0;
emp.overTime=0.0;
emp.gender=' ';
emp.address[200]='\0';
emp.name[40]='\0';
return emp;
}

struct Employee insertInfo(struct Employee employee)
{

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
void printInfo(struct Employee employee)
{
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

void printAllInfo(struct Employee  employee)
{
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
