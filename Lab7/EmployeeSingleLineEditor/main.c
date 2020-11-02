#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<windows.h>
#include"conio.c"
#include"SingleLineEditor.h"
#include"Employee.h"
////////////////////////////
#define NPen 0x07
#define HPen 0x70
#define Enter 13
#define Up 72
#define Down 80
#define Esc 27
#define Home 71
#define End 79
#define Right 77
#define Left  75


//////////////////////

int main()
{

     int i=0,nameLength=0,addressLength=0;
     char start,end;
     char *ptr;
     struct Employee employee;

    gotoxy(3,1);
    printf("Id:\n");
    ptr=lineEditor(sizeof(int),6,1,'0','9');
    employee.id=atoi(ptr);
    gotoxy(3,2);
    printf("Name:\n");
    _flushall();
    ptr=NULL;
    ptr=lineEditor(40,8,2,'a','z');
    while(ptr[i]!='/'){
        employee.name[i]=ptr[i];i++;nameLength++;
    }
    gotoxy(3,3);
    printf("Age:\n");
    ptr=NULL;
    ptr=lineEditor(sizeof(int),8,3,'0','9');
    employee.age=atoi(ptr);
    gotoxy(3,4);
    printf("Gender:\n");
    _flushall();
    ptr=NULL;
    ptr=lineEditor(1,11,4,'f','m');
    employee.gender=*ptr;
    gotoxy(50,1);
    printf("Address:\n");
    _flushall();
    i=0;
    ptr=NULL;
    ptr=lineEditor(200,59,1,'a','z');
    while(ptr[i]!='/'){
        employee.address[i]=ptr[i];i++;addressLength++;
    }
    gotoxy(50,2);
    printf("Salary:\n");
    ptr=NULL;
    ptr=lineEditor(sizeof(double),58,2,'0','9');
    employee.salary=atof(ptr);
    gotoxy(50,3);
    printf("Overtime:\n");
    ptr=NULL;
    ptr=lineEditor(sizeof(double),60,3,'0','9');
    employee.overTime=atof(ptr);
    gotoxy(50,4);
    printf("Deduct:\n");
    ptr=NULL;
    ptr=lineEditor(sizeof(double),58,4,'0','9');
    employee.deduct=atof(ptr);

 ////////////////////////////////////////////





 printInfo( employee,addressLength,nameLength);






    return 0;
}
