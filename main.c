#include <stdio.h>
#include <stdlib.h>

typedef int Data;

typedef struct Node Node;
struct Node {
    Data data;
    struct Node * next;
};

void push (Node ** plist, Data d) {
    

}


void print(Node * head) {
    for (Node * p = head; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n");
}
 
int main() {
    Node * head = NULL;
    Node a = {3}, b = {17}, c = {21}, t = {10};
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    print(head);
    
    Node * p = malloc(sizeof(Node));
    p->data = 10; 
    p->next = head;
    head = p;

    print(head);


    return 0;
}