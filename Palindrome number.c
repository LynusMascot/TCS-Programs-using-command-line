//Author : Rohit Goswami
// Code to check palindrome number
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(int argc, char *argv[]){
    
    if(argc>=2){
        
        int n,i;
        
        int c=0;
        n=atoi(argv[1]);
        int orig=n;
        int temp=n;
        
       while(temp!=0){
           temp=temp/10;
           c++;
       }

       int num=0;
       for(i=c;i>0;i--){
           
           num=(num+n%10)*10;
           n=n/10;
         
       }
       num=num/10;
 
       if(num==orig){ printf("Number is Palindrome");}
       else{ printf("Number is not Palindrome");}
        
    }
    
    else{
        printf("too few arguments\n");
    }
}
