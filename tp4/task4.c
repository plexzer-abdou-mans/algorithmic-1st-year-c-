#include <stdio.h>
#include <string.h>

// Subprogram to check if a word is a palindrome
int isPalindrome(char w[]) {
    int left = 0;
    int right = strlen(w) - 1;

    while (left < right) {
        if (w[left] != w[right]) {
            return 0;  // not a palindrome
        }
        left++;
        right--;
    }
    return 1;  // it's a palindrome
}

int main() {
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    if (isPalindrome(word)) {
        printf("'%s' is a palindrome.\n", word);
    } else {
        printf("'%s' is not a palindrome.\n", word);
    }

    return 0;
}
