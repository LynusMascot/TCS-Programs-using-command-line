//uncomment the lines to use recursive approach
#include <stdio.h>
#include <conio.h>

//int factorial(int n);

int main(int argc, char *argv[])
{
    int i;
    if( argc >= 2 )
    {
       
       int a=atoi(argv[1]);
      //comment the lines from 15 to  23 to use recurive approach
      // replace with this :
      /* int r;
         r=factorial(a);
         printf("%d\n",r);
         
         */
       int fact=1;
       if(a==0) printf("1\n");
        else{
        while(a!=1){
            fact=fact*a;
            a--;
        }
        printf("Facorial is: %d",fact);
        }
        
    }
    else
    {
        printf("argument list is empty.\n");
    }
    return 0;
}

/*   Recurive approach for factorial: 

    int factorial(int n ){
    
    
    if(n==0){
        return 1;
    }
    
    else{
        return n*factorial(n-1);
    }
    
} */


