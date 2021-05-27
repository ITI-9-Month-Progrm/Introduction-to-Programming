#include <stdio.h>
#include <stdlib.h>


struct Employee{
      int id,age;
      float salary,overTime,deduct;
      char name[40],address[200],gender;

};





float calcNetSalary(float salary,float overTime,float deduct){
      float netSalary;
      netSalary=(salary+overTime)-deduct;
      return netSalary;
}
int main()
{
   struct Employee employee;
   float netsalary;

   printf("Please Enter Id:\n");
   scanf("%i",&employee.id);
   printf("Please Enter Name:\n");
   scanf(" ");
   gets(employee.name);
   printf("Please Enter Age:\n");
   scanf("%i",&employee.age);
   printf("Please Enter Gender:\n");
   scanf(" ");
   scanf("%c",&employee.gender);
   printf("Please Enter Address:\n");
    scanf(" ");
   gets(&employee.address);
   printf("Please Enter Salary:\n");
   scanf("%f",&employee.salary);
   printf("Please Enter Overtime:\n");
   scanf("%f",&employee.overTime);
   printf("Please Enter Deduct:\n");
   scanf("%f",&employee.deduct);

   netsalary=calcNetSalary(employee.salary,employee.overTime,employee.deduct);
   system("cls");
   printf("\nThe NetSalary of Employee is :\n %f",netsalary);

    return 0;
}
