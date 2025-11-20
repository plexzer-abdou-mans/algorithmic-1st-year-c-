#include<stdio.h>
#include<stdlib.h>

double A,B;
int i=0;

int main(){
    printf("Enter two numbers (A B): ");
    scanf("%lf %lf", &A, &B);
    if (B!=0)
    {
        while (B*i<A)
    {
        i++;
    }
    printf("A/B=%d + %lf \n",    i-1, (double)(A - B*(i-1)));
    }
    else
    {
        printf("Error: Division by zero is not allowed.\n");
    }
    
    return 0;
}