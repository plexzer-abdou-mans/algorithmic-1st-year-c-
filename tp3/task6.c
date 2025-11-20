#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int N;
int i;
int x;
double bin;

int main(){
scanf("%d",&N);
bin=0;
i=1;
while (N>0)
{
x=N%2;
N=N/2;
bin=(bin + x*pow(10,i));
i++;
}

printf("%.lf",bin/10);



}