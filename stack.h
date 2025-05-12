typedef struct {
    int *array;
    int top; 
    int size; 
} stack;

void init(stack *stack, int size);
void push(stack *stack, int value);
int pop(stack *stack);
int peek(stack *stack);
int is_empty(stack *stack); 
void freeStack(stack *stack);

void pop_test();
void push_test();
void is_empty_test();
