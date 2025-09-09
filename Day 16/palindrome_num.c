// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c=0,d;
    
    printf("Enter number:");
    scanf("%d",&a);
    printf("%d",a);
    d=a;
    while(a!=0){
        b=a%10;
        c=(c*10)+b;
        a=a/10;
    }
    if(d==c){
        printf("\nNumber is polindrome");
    }
    else{
        printf("\nNumber is not polindrome");
    }
    return 0;
}