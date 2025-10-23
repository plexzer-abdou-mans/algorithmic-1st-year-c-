#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char word1[25];
char word2[25];
char word3[25];

int first_char_ascii_1;
int first_char_ascii_2;
int first_char_ascii_3;

int intger;
int absl;

int main(){

    printf("enter your integer:");
    scanf("%d",&intger);
    if (intger>0)
    {
    absl = intger;
    }else{
    absl = -intger;   
    }
    printf("the absolte value of the integer is: %d \n",absl);


    printf("enter your first word:");
    scanf("%s",&word1);
    printf("enter your second word:");
    scanf("%s",&word2);
    printf("enter your third word:");
    scanf("%s",&word3);

    first_char_ascii_1 =word1[0];
    first_char_ascii_2 =word2[0];
    first_char_ascii_3 =word3[0];

    if (first_char_ascii_1<first_char_ascii_2 && first_char_ascii_2<first_char_ascii_3)
    {
        printf("words order: %s , %s ,%s",word1,word2,word3);
    }
    if (first_char_ascii_1<first_char_ascii_3 && first_char_ascii_3<first_char_ascii_2)
    {
        printf("words order: %s , %s ,%s",word1,word3,word2);
    }
    if (first_char_ascii_2<first_char_ascii_1 && first_char_ascii_1<first_char_ascii_3)
    {
        printf("words order: %s , %s ,%s",word2,word1,word3);
    }
    if (first_char_ascii_2<first_char_ascii_3 && first_char_ascii_3<first_char_ascii_1)
    {
        printf("words order: %s , %s ,%s",word2,word3,word1);
    }
    if (first_char_ascii_3<first_char_ascii_2 && first_char_ascii_2<first_char_ascii_1)
    {
        printf("words order: %s , %s ,%s",word3,word2,word1);
    }
    if (first_char_ascii_3<first_char_ascii_1 && first_char_ascii_1<first_char_ascii_2)
    {
        printf("words order: %s , %s ,%s",word3,word1,word2);
    }




return 0;
}