// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main(){
    int a,b,c,x,y,hcf,lcm;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    while (b!=0){
        c=b;
        b=a%b;
        a=c;
    }
    hcf=a;
    lcm=(x*y)/hcf;
    printf("LCM=%d\n",lcm);
    return 0;
}
