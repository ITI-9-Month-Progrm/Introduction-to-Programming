#include <stdio.h>
#include <stdlib.h>


int main()
{
    char c;
    printf("Please Enter any character\n");
    c=getch();
    switch(c){
    case -32:
        c=getch();
        printf("This is Extended Key : ",c);
        printf("%d",c);
        break;
    default:
    printf("This is Normal Key : %c",c);
    printf("\t%d ",c);
break;
    }

    return 0;
}
