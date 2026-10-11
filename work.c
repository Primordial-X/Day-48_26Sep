#include <stdio.h>
#include <string.h>

//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

int main(){
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // Check if lengths are equal
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation\n");
        return 0;
    }

    // Concatenate str1 with itself
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of the concatenated string
    if (strstr(temp, str2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}


//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char *word = strtok(sentence, " \n");
    while (word != NULL) {
        // Reverse the word
        int len = strlen(word);
        for (int i = len - 1; i >= 0; i--) {
            putchar(word[i]);
        }
        putchar(' '); // Print space after each word
        word = strtok(NULL, " \n");
    }
    printf("\n");
    return 0;
}