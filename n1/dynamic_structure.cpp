#include "dynamic_structure.h"
#include <iostream>

using namespace std;

Node* create() {
    return nullptr;
}

void addElement(Node*& head, int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

void deleteElement(Node*& head, int targetData) {
    Node* current = head;
    Node* previous = nullptr;

    while (current != nullptr) {
        if (current->data == targetData) {
            if (previous == nullptr) {
                head = current->next;
            } else {
                previous->next = current->next;
            }
            delete current;
            return;
        }
        previous = current;
        current = current->next;
    }
}

void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
