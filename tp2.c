#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
float R;
float abso;
char string1[100];
char string2[100];
int a;
int b;
int c;
float phrase1;
float phrase2;
float phrase3;
float phrase4;

int main(){
    printf("-------------PART I---------------\n");
    printf("enter your real number: ");
    scanf("%f",&R);

if (R<0)
{
    abso=-R;
    printf("the numbers':\nabsolute value: %f\nsquare: %f\nsquareroot: NEG-NUM\nexponenial value: %.2e\ninteger part: %d\n",abso,R*R,R,(int)R);
}else{
    abso =R;
    printf("the numbers':\nabsolute value: %f\nsquare: %f\nsquareroot: %f\nexponenial value: %.2e\ninteger part: %d\n",abso,R*R,sqrtf(R),R,(int)R);
    
}
printf("---------------PART II-------------\n");
printf("enter your first strings: ");

scanf("%s",string1);

printf("enter your second strings: ");

scanf("%s",string2);

int length1 = strlen(string1);
int length2 = strlen(string2);

printf("lenght of string 1 is: %d\n",length1);
printf("lenght of string 2 is: %d\n",length2);
strcat(string1,string2);
printf("concatation of the strings is:%s\n",string1);

printf("----------------PART III-----------------");
printf("enter integer a ");
scanf("%d",&a);
printf("enter integer b ");
scanf("%d",&b);

c = b;
b = a;
a = c;

printf("a=%d\nb=%d",a,b);

printf("--------------------PART IV---------------------\n");
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
printf("enter c");
scanf("%d",&c);

phrase1 =(-b+sqrt(b*b-4*a*c))/2*a;

phrase2 =2*a*pow(2.718,b+c);

phrase3 = pow(2,4);

phrase4 = pow(5,a*b)/(b*c);

printf("phrase 1= %f\n phrase 2= %f\n phrase 3= %f\n phrase 4= %f");


return 0;
}
