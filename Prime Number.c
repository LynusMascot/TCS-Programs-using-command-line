//Author : Rohit Goswami
// Code to check prime
#include<stdio.h>
#include<conio.h>

int main(int argc, char *argv[]){
    
    if(argc>=2){
        
        int n,i;
        int flag=0;
        n=atoi(argv[1]);
        
       for(i=1;i<=n;i++){
           if(n%i==0){
               flag++;
               
           }
       }
       
       if(flag==2){ printf("Prime Number\n");}
       else{ printf("Not a Prime number\n");}
       
        
    }
    
    else{
        printf("too few arguments\n");
    }
}
