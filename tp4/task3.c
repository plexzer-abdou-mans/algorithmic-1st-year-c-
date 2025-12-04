#include <stdio.h>
#include <string.h>


void mirror(char word[]) {
    int len = strlen(word);
    for (int i = len - 1; i >= 0; i--) {
        putchar(word[i]);
    }
}

int main() {
    char str[250];
    char word[250];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') { 
            word[j] = '\0';       
            mirror(word);        
            putchar(' ');        
            j = 0;                

            if (str[i] == '\0') 
                break;
        }
        else {
            word[j++] = str[i];
        }
        
    }
    printf("\n");
    return 0;
}
