#include <stdio.h>
#include <string.h>
#include <ctype.h>  

int main() {
    char word1[50], word2[50];
    int i, j, len1, len2, found, notAnagram = 0;

    printf("Enter first word: ");
    scanf("%s", word1);
    printf("Enter second word: ");
    scanf("%s", word2);

    len1 = strlen(word1);
    len2 = strlen(word2);

    if (len1 != len2) {
        printf("Not Anagrams.\n");
        return 0;
    }


    for (i = 0; i < len1; i++) {
        word1[i] = tolower(word1[i]);
        word2[i] = tolower(word2[i]);
    }

    for (i = 0; i < len1; i++) {
        found = 0;
        for (j = 0; j < len2; j++) {
            if (word1[i] == word2[j]) {
                word2[j] = '0'; 
                found = 1;
                break;
            }
        }
        if (found == 0) {
            notAnagram = 1;
            break;
        }
    }

    if (notAnagram == 1)
        printf("Not Anagrams.\n");
    else
        printf("Words are Anagrams!\n");

    return 0;
}
