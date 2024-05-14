#include "dynamic_structure.h"
#include <iostream>
#include <cmath>

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

void displayInReverse(Node* head) {
    if (head == nullptr) {
        cout << "Список пуст" << endl;
        return;
    }
    Node* current = head;
    Node* prev = nullptr;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    while (prev != nullptr) {
        cout << prev->data << " ";
        prev = prev->next;
    }
    cout << endl;
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

float calculateAverage(Node* head) {
    float sum = 0;
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        sum += current->data;
        count++;
        current = current->next;
    }
    return sum / count;
}

Node* findNearestToAverage(Node* head, float average) {
    Node* nearest = head;
    float minDiff = abs(head->data - average);
    Node* current = head->next;
    while (current != nullptr) {
        float diff = abs(current->data - average);
        if (diff < minDiff) {
            minDiff = diff;
            nearest = current;
        }
        current = current->next;
    }
    return nearest;
}
