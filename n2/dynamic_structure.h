#ifndef DYNAMIC_STRUCTURE_H
#define DYNAMIC_STRUCTURE_H

struct Node {
    int data;
    Node* next;
};

Node* create(); 
void addElement(Node*& head, int newData); 
void deleteElement(Node*& head, int targetData); 
void display(Node* head); 
void displayInReverse(Node* head); 
float calculateAverage(Node* head);
Node* findNearestToAverage(Node* head, float average);

#endif

