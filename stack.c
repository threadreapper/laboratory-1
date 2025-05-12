#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void init(stack *stack, int size) {
    stack->top = 0;
    stack->size = size;
    stack->array = (int *)malloc(sizeof(int) * size);
}

int is_empty(stack *stack) {
    return stack->top == 0;
}

int is_full(stack *stack) {
    return stack->top == stack->size;
}

void push(stack *stack, int value) {
    if (is_full(stack)) {
        return;
    }
    stack->array[stack->top] = value;
    stack->top++;
}

int pop(stack *stack) {
    if (is_empty(stack)) {
        return -1;
    }
    stack->top--;
    return stack->array[stack->top];
}

int peek(stack *stack) {
    if (is_empty(stack)) {
        return -1;
    }
    return stack->array[stack->top - 1];
}

void freeStack(stack *stack) {
    free(stack->array);
}
