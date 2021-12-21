#include <iostream>
#include "ex02-library.h"
using namespace std;

// Task 2(a).  Implement this function
Passenger* find(Passenger *q, unsigned int ticket) {
    Passenger* current = q; // Initialize current
    while (current != NULL)
    {
        if (current->ticket == ticket)
            return current;
        current = current->next;
    }
    return current;
}

// Task 2(b).  Implement this function
Passenger* remove(Passenger *q, unsigned int ticket) {
    Passenger* temp = q;
    Passenger* prev = NULL;

    if (temp != NULL && temp->ticket == ticket)
    {
        q = temp->next;             
        return q;
    }
    else{
        while (temp != NULL && temp->ticket != ticket)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL){
            return q;
        }
            
        prev->next = temp->next;
    }
    return q;
}

// Task 2(c).  Implement this function
Passenger* priority(Passenger *q) {
    
    Passenger *tmp = q;

    if(q == nullptr){
        return q;
    }
     
    while (q->priority== false)
    {
        q = q->next;
    }
    while (tmp->next != NULL)
    {
        if (tmp->next->priority == false)
        {
            tmp->next = tmp->next->next;
        }
        else
        {
            tmp = tmp->next;
        }
    }
    return q;
}

// Do not modify
void displayQueue(Passenger *q) {
    if (q == nullptr) {
        return;
    }
    cout << q->name << " - ticket: " << q->ticket;
    if (q->priority) {
        cout << " (priority)";
    }
    cout << endl;
    displayQueue(q->next);
}
