#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int number;
int i=1;
int digit;
int digit_number=0;
int total = 0;
int neo_number;


int main (){

    do{
    printf("enter your integer: ");
    scanf("%d",&number);

    } while (number<=0);
    
    while (i<=number)
    {
    i=i*10;
    digit_number++;
    }
    digit_number=digit_number-1;
    i=1;
     while (i<=number)
    {
    i=i*10;
    digit =number%i/(i/10);
    int power_of10=pow(10,digit_number);
    neo_number=neo_number+digit*power_of10;
    digit_number--;
}
printf("%d\n",neo_number);
    return 0;
}