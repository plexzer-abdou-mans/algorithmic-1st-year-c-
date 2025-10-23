#include<stdlib.h>
#include<stdio.h>
float A;
float B;
float C;
int main(){
    printf("enter 3 numbers:");
    scanf("%f",A);
    scanf("%f",&B);
    scanf("%f",&C);

    if (A>B && A>C){
        printf("largest number is %f",A);
    } else if (B>A && B>C){
        printf("largest number is %f",B);
    }else{
        printf("largest number is %f",C);
    }

    







}