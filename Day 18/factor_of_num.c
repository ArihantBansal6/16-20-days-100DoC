// Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        if(a%b==0){
            printf("%d,",b);
        }
    }
    return 0;
}