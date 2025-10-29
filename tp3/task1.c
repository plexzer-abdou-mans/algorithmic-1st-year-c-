#include<stdlib.h>
#include<stdio.h>

int N;
float grade;
int passers;
int i;

int main(){

    do
    {
        printf("enter student number: ");
        scanf("%d",&N);
        if (0>N)
        {
        printf("invalid student number,try again.\n");
        }
        
    } while (0>N);
    i=0;
    passers=0;
    while (i<N)
    {
        do
        {
        printf("enter student grade: ");
        scanf("%f",&grade);
        if (grade<0 || grade>20)
        {
        printf("invalid grade,try again.\n");
        }
        
        } while (grade<0 || grade>20);
        if (grade>=10)
        {
        passers++;
        }
        i++;
    }
    printf("number of passers is: %d.\n",passers);
    




}
