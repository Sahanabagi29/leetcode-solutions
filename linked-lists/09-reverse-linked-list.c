#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* current = head;
    struct ListNode* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

void display(struct ListNode* head) {
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct ListNode* head = malloc(sizeof(struct ListNode));

    head->val = 1;
    head->next = malloc(sizeof(struct ListNode));
    head->next->val = 2;

    head->next->next = malloc(sizeof(struct ListNode));
    head->next->next->val = 3;

    head->next->next->next = malloc(sizeof(struct ListNode));
    head->next->next->next->val = 4;

    head->next->next->next->next = malloc(sizeof(struct ListNode));
    head->next->next->next->next->val = 5;

    head->next->next->next->next->next = NULL;

    printf("Original List: ");
    display(head);

    head = reverseList(head);

    printf("Reversed List: ");
    display(head);

    return 0;
}