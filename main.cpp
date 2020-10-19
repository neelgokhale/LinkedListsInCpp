#include "headers/linkedList.h"
#include <iostream>

/**
 * User: Neel Gokhale
 * Date: 2020-10-18
 * Project: C__PrimerExamples
 * Coded on CLion
 */

int main() {
    linkedList newList;

    for (int i = 0; i < 10; i++) {
        newList.insertAtEnd(i);
    }
    std::cout << "Base list: " << std::endl;
    newList.printList();

    newList.deleteAtStart();
    newList.deleteAtEnd();
    newList.deleteAtIndex(5);

    std::cout << "Linked List: " << std::endl;
    newList.printList();
    std::cout << "List length: " << newList.lenOfList() << std::endl;
    return 0;
}