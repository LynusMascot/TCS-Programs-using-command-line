//Author : Rohit Goswami
// Code to swap two numbers using third varibale
#include<stdio.h>
#include<conio.h>

int main(int argc, char *argv[]){
    
    if(argc>=2){
        
        int a,b;
        a=atoi(argv[1]);
        b=atoi(argv[2]);
        
        int temp;
        printf("a : %d and b : %d before swap\n",a,b);
        temp=b;
        b=a;
        a=temp;
    
        printf("a : %d and b : %d after swap\n",a,b);
        
    }
    
    else{
        printf("too few arguments\n");
    }
}
