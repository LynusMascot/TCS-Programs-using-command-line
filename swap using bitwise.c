//Author : Rohit Goswami
// Code to swap two numbers using bitwise operator
#include<stdio.h>
#include<conio.h>

int main(int argc, char *argv[]){
    
    if(argc>=2){
        
        int a,b;
        a=atoi(argv[1]);
        b=atoi(argv[2]);
 
        printf("a : %d and b : %d before swap\n",a,b);
         
         a = a ^ b;
         b = a ^ b;
         a= a ^ b;
        
        printf("a : %d and b : %d after swap\n",a,b);
        
    }
    
    else{
        printf("too few arguments\n");
    }
}
