//Author : Rohit Goswami


#include <stdio.h>
int main(int argc, char *argv[])
{
    int i;
    if( argc >= 2 )
    {
       int a=atoi(argv[1]);
        if(a%2==0){ printf("Even");}
        else printf("Odd");
    }
    else
    {
        printf("argument list is empty.\n");
    }
    return 0;
}
