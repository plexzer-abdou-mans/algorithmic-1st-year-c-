#include<stdlib.h>
#include<stdio.h>

int A;
int B;
char op;

int main(){
    printf("1. To perform an addition, choose the operator +\n2. To perform a subtraction, choose the operator –\n3. To perform a division, choose the operator *\n4. To perform a multiplication, choose the operator /");

    printf("enter 2 integers:");
    scanf("%d",A);
    scanf("%d",B);

    printf("enter operator:");
    scanf("%s",op);

    switch (op)
    {
    case '+':
        printf("result is: %d",A+B);
        break;
    case '-':
        printf("result is: %d",A-B);
        break;
    case 'x':
        printf("result is: %d",A*B);
        break;
    case '/':
        printf("result is: %f",A/B);
        break;

    default:
        break;
    }
    /*honestly too tired to do the if and else version*/
return 0;
}