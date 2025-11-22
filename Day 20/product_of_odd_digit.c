
// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/#include<stdio.h>
int main(){
    int a,b,c=1,d;
    printf("Enter a number:");
    scanf("%d",&a);
    while(a!=0){
        b=a%10;
        d=b%2;
        a=a/10;
        if(d==0){
            continue;
        }    
        c=c*b;
    } 
    printf("Product of odd digits of the number: %d",c);
    return 0;
}