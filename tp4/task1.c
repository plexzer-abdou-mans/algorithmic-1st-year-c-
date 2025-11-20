#include<stdio.h>
#include<stdlib.h>
int i = 0;
float f;
int main(){
printf("enter number: ");
scanf("%f", &f);
    
while (i<f-1)
{
i++;
}
printf("the integer part is: %d\n", i);
printf("the fractional part is: %f\n", f - i);
return 0;   
}