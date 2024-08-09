#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

typedef struct Stack {
    int top;
    char arr[MAX][MAX];
} Stack;

void push(Stack *stack, char *str) {
    if (stack->top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    strcpy(stack->arr[++stack->top], str);
}

char *pop(Stack *stack) {
    if (stack->top == -1) {
        printf("Stack Underflow\n");
        return NULL;
    }
    return stack->arr[stack->top--];
}

int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

void prefixToPostfix(char *prefix) {
    Stack stack;
    stack.top = -1;
    int length = strlen(prefix);

    for (int i = length - 1; i >= 0; i--) {
        if (isspace(prefix[i])) {
            continue;
        }

        if (isOperator(prefix[i])) {
            char *op1 = pop(&stack);
            char *op2 = pop(&stack);

            char temp[MAX];
            snprintf(temp, sizeof(temp), "%s %s %c", op1, op2, prefix[i]);

            push(&stack, temp);
        } else {
            char temp[2] = {prefix[i], '\0'};
            push(&stack, temp);
        }
    }

    printf("Postfix expression: %s\n", pop(&stack));
}

int main() {
    char prefix[MAX];
    printf("Enter a prefix expression: ");
    fgets(prefix, MAX, stdin);
    prefix[strcspn(prefix, "\n")] = '\0';

    prefixToPostfix(prefix);

    return 0;
}
