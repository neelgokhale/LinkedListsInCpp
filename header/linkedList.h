//
// Created by Owner on 2020-10-18.
//

#pragma once
#define NULL nullptr

struct node {
    int data;
    node *next;
};

class linkedList {
private:
    node *head, *tail;
public:
    linkedList();
    void printList();
    void insertAtStart(int val);
    void insertAtIndex(int val, int index);
    void insertAtEnd(int val);
    void deleteAtStart();
    void deleteAtIndex(int index);
    void deleteAtEnd();
    bool isEmpty();
    int lenOfList();

};


