#include <stdio.h>
#include <stdbool.h>

bool isValid(char* s) {
    char stack[10001];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            top++;
            stack[top] = s[i];
        }
        else {
            if (top == -1) {
                return false;
            }

            if ((s[i] == ')' && stack[top] == '(') ||
                (s[i] == '}' && stack[top] == '{') ||
                (s[i] == ']' && stack[top] == '[')) {
                top--;
            }
            else {
                return false;
            }
        }
    }

    return top == -1;
}

int main() {
    printf("Test Case 1: %s\n", isValid("()") ? "true" : "false");
    printf("Test Case 2: %s\n", isValid("()[]{}") ? "true" : "false");
    printf("Test Case 3: %s\n", isValid("(]") ? "true" : "false");
    printf("Test Case 4: %s\n", isValid("([])") ? "true" : "false");
    printf("Test Case 5: %s\n", isValid("([)]") ? "true" : "false");

    return 0;
}