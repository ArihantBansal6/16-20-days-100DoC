// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main() {
    int num,i,place=1;
    int binary=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0){
        i=num%2;            
        binary=binary+i*place; 
        place=place*10;    
        num=num/2;         
    }
    printf("Binary number = %d\n", binary);
    return 0;
}