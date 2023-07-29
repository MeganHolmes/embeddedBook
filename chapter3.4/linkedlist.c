

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};


int getDataWithIndex(struct Node* linkedList, int index);
void createNewNode(struct Node* linkedList, int newData);

int main(void)
{
    struct Node linkedList;
    linkedList.data = 0; // Define initial node data.
    linkedList.next = NULL;

    createNewNode(&linkedList, 1);
    createNewNode(&linkedList, 2);
    createNewNode(&linkedList, 3);
    createNewNode(&linkedList, 4);

    int testData = getDataWithIndex(&linkedList, 3);

    printf("testData = %d\n", testData);

    getDataWithIndex(&linkedList, 7); // Make sure it fails correctly.

    return 0;
}

int getDataWithIndex(struct Node* linkedList, int index)
{
    int itr = 0;
    while (linkedList->next != NULL && index > itr)
    {
        linkedList = linkedList->next;
        itr++;
    }

    if (index != itr)
    {
        printf("Ran out of list. Itr = %d, index = %d\n", itr, index);
    }

    return linkedList->data;
}

void createNewNode(struct Node* linkedList, int newData)
{
    int idx = 0;
    while (linkedList->next != NULL)
    {
        linkedList = linkedList->next;
        idx++;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = newData;
    newNode->next = NULL;

    linkedList->next = newNode;

    printf("Added new node at index %d at memory address = %p\n", idx, linkedList->next);
}
