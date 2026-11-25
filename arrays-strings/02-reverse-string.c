
#include <stdio.h>

void reverseString(char* s, int sSize) {
    int start = 0;
    int end = sSize - 1;
    char temp;

    while (start < end) {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char s1[] = "hello";
    char s2[] = "Hannah";

    reverseString(s1, 5);
    reverseString(s2, 6);

    printf("Test Case 1: %s\n", s1);
    printf("Test Case 2: %s\n", s2);

    return 0;
}
