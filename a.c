#include <stdio.h>
#include "dsa/node.h"
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    Node* head = (Node*)malloc(1*sizeof(Node));
    head->val = 0;
    head->next = NULL;
    free(head);
    return 0;
}
