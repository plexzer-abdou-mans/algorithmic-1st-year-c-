#include<stdio.h>
#include<stdlib.h>

int number;
int i=1;
int digit;
int digit_number=0;
int total = 0;


int main (){

    do{
    printf("enter your integer: ");
    scanf("%d",&number);

    } while (number<=0);
    
    
    while (i<=number)
    {
    
    i=i*10;
    digit =number%i/(i/10);
    digit_number++;
    printf("%d",total);
    total=total+digit;
    }
    printf("digit number is: %d \ntotal of digits is: %d\n",digit_number,total);

    return 0;
}