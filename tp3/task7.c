#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
int N;
int j = 2;
int i;
bool is_prime=true;
int main(){
printf("enter a number: ");
scanf("%d", &N);
i=2;
while(i<=N/2){
    if (N%i==0)
    {
      while (j<i/2)
      {

        if (i%j==0)
        {
            is_prime=false;
            j = i/2;
        }
        j++;
      }
      if (is_prime==true)
      {
      printf("%d \n",i);
      }
    }




i++;
}
return 0;
}