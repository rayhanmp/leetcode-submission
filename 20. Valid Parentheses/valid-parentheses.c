typedef struct {
    int maxSize;
    int top;
    char *elements; 
} Stack;

Stack* makeStack(int size) {
    Stack *newStack = (Stack*)malloc(sizeof(Stack));
    newStack->maxSize = size;
    newStack->top = -1;
    newStack->elements = (char*)malloc(sizeof(char) * size);
    return newStack;
}

bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

bool isFull(Stack *stack) {
    return stack->top == stack->maxSize - 1;
}

void push(Stack *stack, char value) {
    if (isFull(stack)) {
        printf("STACK IS FULL");
        return;
    }
    stack->elements[++stack->top] = value;
}

char pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("STACK IS EMPTY");
        return -1;
    }
    return stack->elements[stack->top--];

}

void freeStack(Stack *stack){
    free(stack->elements);
    free(stack);
}

bool isValid(char* s) {
    int length = strlen(s);
    Stack *stack = makeStack(length); 

    for (int i = 0; i<length; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            push(stack, s[i]);
        }
        else {
            char onTop = pop(stack);
            if (((s[i] == ')') && (onTop != '(')) || 
               ((s[i] == '}') && (onTop != '{')) || 
               ((s[i] == ']') && (onTop != '['))) {
                return false;
            }
        }
    }
    return stack->top == -1;
}