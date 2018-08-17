//Author : Rohit Goswami
// Code check armstrong number of any length
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(int argc, char *argv[]){
    
    if(argc>=2){
        
        int n,i,r;
        int sum=0;
        int c=0;
        n=atoi(argv[1]);
        int orig=n;
        int temp=n;
        
       while(temp!=0){
           temp=temp/10;
           c++;
       }
       
       int power=c;
      
       
       for(i=0;i<c;i++){
           
           r=n%10;
           sum=sum+pow(r,power);
           n=n/10;
         
       }
       
       
       if(sum==orig){ printf("Number is Armstrong");}
       else{ printf("Number is not Armstrong");}
        
    }
    
    else{
        printf("too few arguments\n");
    }
}
