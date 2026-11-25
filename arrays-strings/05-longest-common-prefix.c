#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    static char result[201];

    int i = 0;

    while (strs[0][i] != '\0') {
        char ch = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != ch) {
                result[i] = '\0';
                return result;
            }
        }

        result[i] = ch;
        i++;
    }

    result[i] = '\0';
    return result;
}

int main() {
    char *strs1[] = {"flower", "flow", "flight"};
    char *strs2[] = {"dog", "racecar", "car"};

    printf("Test Case 1: %s\n",
           longestCommonPrefix(strs1, 3));

    printf("Test Case 2: %s\n",
           longestCommonPrefix(strs2, 3));

    return 0;
}