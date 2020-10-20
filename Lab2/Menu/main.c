#include <stdio.h>
#include <stdlib.h>
#include "gotoxy.h"

int main()
{
    char c;
    gotoxy(10,10);
    printf("\n\t\tNEW");
    gotoxy(20,20);
    printf("\n\t\tDISPLAY");
    gotoxy(30,30);
    printf("\n\t\tExit\n");
    printf("\nPlease Enter N or n for NEW");
    printf("\nPlease Enter D or d for Display");
    printf("\nPlease Enter E or e for Exit\n");
    scanf("%c",&c);
    switch (c)
    {
    case 'N':
        system("cls");
        printf("\nNEW\n");
        break;
    case 'n':
        system("cls");
        printf("\nNEW\n");
        break;
    case 'D':
        system("cls");
        printf("\nDISPLAY\n");
        break;
    case 'd':
        system("cls");
        printf("\DISPLAY\n");
        break;
    case 'E':
        exit(0);
        break;
    case 'e':
        exit(0);
        break;
    default:
        printf("\nPlease Enter Correct character\n");

    }



    return 0;
}
