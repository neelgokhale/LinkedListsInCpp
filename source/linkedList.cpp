#include <iostream>
#include "../header/linkedList.h"

/**
 * User: Neel Gokhale
 * Date: 2020-10-18
 * Project: C__PrimerExamples
 * Coded on CLion
 */

linkedList::linkedList() {
    head = NULL;
    tail = NULL;
}

void linkedList::printList() {
    node *temp = new node;
    temp = head;
    std::cout << "[ ";
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << "]\n";
}

void linkedList::insertAtEnd(int val) {
    node *temp = new node;
    temp->data = val;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        tail = temp;
        temp = NULL;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

void linkedList::insertAtStart(int val) {
    node *temp = new node;
    temp->data = val;
    temp->next = head;
    head = temp;
}

void linkedList::insertAtIndex(int val, int index) {
    node *prev = new node;
    node *curr = new node;
    node *temp = new node;
    curr = head;
    for (int i = 0; i < index; i++) {
        prev = curr;
        curr = curr->next;
    }
    temp->data = val;
    prev->next = temp;
    temp->next = curr;
}

void linkedList::deleteAtEnd() {
    node *curr = new node;
    node *prev = new node;
    curr = head;
    while(curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    tail = prev;
    delete curr;
}

void linkedList::deleteAtStart() {
    node *temp = new node;
    temp = head;
    head = head->next;
    delete temp;
}

void linkedList::deleteAtIndex(int index) {
    node *prev = new node;
    node *curr = new node;
    curr = head;
    for (int i = 0; i < index; i++) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
}

bool linkedList::isEmpty() {
   if ((head == NULL) && (tail == NULL)) {
       return true;
   } else {
       return false;
   }
}

int linkedList::lenOfList() {
    node *curr = new node;
    curr = head;
    int counter = 0;
    if (isEmpty()) {
        return counter;
    } else {
        while (curr->next != NULL) {
            curr = curr->next;
            counter++;
        }
        return counter + 1;
    }

}

