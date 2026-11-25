#include <stdio.h>

int isAnagram(char s[], char t[]) {
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    printf("Test Case 1: %s\n",
           isAnagram("anagram", "nagaram") ? "true" : "false");

    printf("Test Case 2: %s\n",
           isAnagram("rat", "car") ? "true" : "false");

    return 0;
}