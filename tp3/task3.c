#include<stdio.h>
#include<stdlib.h>

int number;
int i=1;
int digit;
int total = 0;
int k;
int digit_factorial;

int main (){

    do{
    printf("enter your integer: ");
    scanf("%d",&number);

    } while (number<=0);
    
    
    while (i<=number)
    {
    
    i=i*10;
    digit =number%i/(i/10);
    digit_factorial=1;
    k=0;

    while (k<digit)
    {
        k++;
        digit_factorial=digit_factorial*k;
        
        
    }
    total=total+digit_factorial;
    
    }
     

    if (total==number)
    {
        printf("%d is a strong number",number);
        return 0;
    }
    else{
    printf("%d is not a strong",number);
    }
    
}