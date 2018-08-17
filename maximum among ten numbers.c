//Author : Rohit Goswami
// Code to find maximum among ten numbers
#include<stdio.h>
#include<conio.h>

int main(int argc, char *argv[]){
    
    if(argc>=2){
        int max;
        int a,b,i;
        max=atoi(argv[1]);
        
        for(i=1;i<argc;i++){
            b=atoi(argv[i]);
            if(b>max){
                max=b;
            }
        }
        
        printf("max is : %d\n",max);
 
       
        
    }
    
    else{
        printf("too few arguments\n");
    }
}
