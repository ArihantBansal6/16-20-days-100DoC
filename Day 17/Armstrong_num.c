// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,n=0;
    double f = 0.0;
    printf("Enter a number: ");
    scanf("%d", &a);
    b=a;
    int e=a;
    while (e!=0) {
        e/=10;
        n++;
    }
    e=a;
    while (e!=0) {
        c=e%10;
        f+=pow(c,n);
        e/=10;
    }
    if ((int)f==b)
        printf("%d is an Armstrong number.\n", b);
    else
        printf("%d is not an Armstrong number.\n", b);
    return 0;
}