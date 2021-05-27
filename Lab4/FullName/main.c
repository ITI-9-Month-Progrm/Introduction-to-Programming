#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char FName[10],LName[10],FullName[20];
    printf("Please Enter your First Name\n");
    gets(FName);
    printf("Please Enter your Last Name\n");
    gets(LName);
    strcat(FName," ");
    strcpy(FullName,FName);
    strcat(FullName,LName);
    printf("\nYour FullName is : %s ",FullName);
    printf("\n\n");
    return 0;
}
