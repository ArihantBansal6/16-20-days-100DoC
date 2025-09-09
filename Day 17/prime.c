// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include<stdio.h>
int main(){
    int a,b,c=1;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a<1){
        c=0;
    }else{
        for(b=2;b<=a/2;b++){
            if(a%b==0){
                c=0;
                break;
            }
        }
    }
    if(c)
    printf("Number is prime");
    else
    printf("number is not prime");
    return 0;
}