#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char string[250];
int position = 0;
int word_count = 0;
int longerst_word_length = 0;
int longerst_word_idex = 0;
int word_start = 0;
int word_len = 0;
int j;
char longest_word[250];
int longest_wordend = 0;

int main() {
printf("Enter a string: ");
fgets(string, sizeof(string), stdin);
printf("\n");

while (position<strlen(string))
{
if (string[position]==' ' && string[position+1]!=' ')
{
    word_start = position;
}
if (string[position]!=' ' && string[position+1]==' '|| string[position+1]=='\0')
{
    word_count++;
    word_len= (position - word_start);
    if (word_len>longerst_word_length)
    {
        longerst_word_length=word_len;
        longerst_word_idex=word_start;
        longest_wordend=position+1;
    }   

}
    
position++;
}
longest_word[0] = '\0';
j=longerst_word_idex;
while(j < longest_wordend)
{
char temp[2];
temp[0] = string[j];
temp[1] = '\0';

strcat(longest_word, temp);
j++;
}
longest_word[longerst_word_length] = '\0';



printf("The longerst word is: %s\n", longest_word);
printf("Length of the longerst word is: %d\n", longerst_word_length);
printf("Total number of words: %d\n", word_count);



return 0;
}