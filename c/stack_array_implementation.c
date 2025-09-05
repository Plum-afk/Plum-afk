#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

typedef struct {
    int arr[MAX];
    int top;
} Stack;

void initStack(Stack* s);
void push(Stack* s, int data);
void pop(Stack* s);
int isFull(Stack* s);
int isEmpty(Stack* s);
int peek(Stack* s);
void displayStack(Stack s);

int main(){
    Stack s;
    int i;
    
    initStack(&s);
    
    for(i = 0; i < MAX; i++){
        push(&s, i * i);
    }
    
    displayStack(s);
    
}

void initStack(Stack* s){
    s->top = -1;
}

void push(Stack* s, int data){
    if(isFull(s) == 1){
        s->top++;
        s->arr[s->top] = data;
        
        printf("Successfully pushed %d onto the stack.\n", data);
    }
}

void pop(Stack* s){
    if(isEmpty(s) == 1){
        int popped = s->arr[s->top];
        
        s->top--;
        
        printf("Successfully popped %d from the stack.\n", popped);
    }
}

int isFull(Stack* s){
    return s->top <= MAX - 1;
}

int isEmpty(Stack* s){
    return s->top == -1;
}

int peek(Stack* s){
    if(!isEmpty(s)){
        return s->top;
    }
}

void displayStack(Stack s){
    printf("\nStack:\n");
    
    for(int i = s.top; i >= 0; i--){
        printf("%d\n", s.arr[i]);
    }
}
