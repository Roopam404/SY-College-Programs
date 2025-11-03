#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; };

int main() {
    struct Node *head = NULL, *temp;
    int x;
    for(int i=0;i<5;i++){
        scanf("%d",&x);
        temp = malloc(sizeof(struct Node));
        temp->data = x;
        temp->next = head;
        head = temp;
    }
    temp=head;
    while(temp){ printf("%d ",temp->data); temp=temp->next; }
}
