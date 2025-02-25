/*
Program Question:
Please write a C program that implements a queue using two stacks, where the stacks are represented by linked lists.
*/

#include <stdio.h>
#include <stdlib.h>

// Node struct
struct Node
{
    int data;
    struct Node *next;
};

// Stack struct
struct Stack
{
    struct Node *top;
};

void push();
struct Node *pop();

// Queue struct using two stacks
struct Queue
{
    struct Stack stack1, stack2;
};

void enqueue();
struct Node *dequeue();

int main()
{

    return 0;
}
