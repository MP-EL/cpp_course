#include <iostream>
#include "ex02-library.h"
using namespace std;

// Task 2(a).  Implement this function
Elem* reverse(Elem *list) {

    Elem* current = list;
    Elem *prev = NULL, *next = NULL;

    while (current != NULL) {
        // Store next
        next = current->next;

        // Reverse current node's pointer
        current->next = prev;

        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    list = prev;
    return list;
}

// Task 2(b).  Implement this function
Elem* concatenate(Elem *list1, Elem *list2) {
    Elem *temp=NULL;
    if (list1==NULL){
        return (list2);
    }
        
    if (list2==NULL)
    {
        return (list1);
    }

    temp=list1;

    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=list2;

    return (list1);
}

// Task 2(c).  Implement this function
int sum(Elem *list) {
    int sum = 0;
    Elem* current = list;
    Elem *prev = NULL, *next = NULL;

    while (current != NULL) {
        // Store next
        next = current->next;
        sum = sum + (current->value * current->times);
        current = next;
    }
    return sum;
}

// Do not modify
void displayRLEList(Elem *list) {
    if (list == nullptr) {
        return;
    }
    cout << " " << list->value << " (x" << list->times << ")";
    displayRLEList(list->next);
}
