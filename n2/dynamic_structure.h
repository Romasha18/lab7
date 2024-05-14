// dynamic_structure.h

#ifndef DYNAMIC_STRUCTURE_H
#define DYNAMIC_STRUCTURE_H

// Описание структуры данных
struct Node {
    int data;
    Node* next;
};

// Прототипы функций
Node* create(); // Создание динамической структуры
void addElement(Node*& head, int newData); // Добавление нового элемента
void deleteElement(Node*& head, int targetData); // Удаление элемента
void display(Node* head); 
float calculateAverage(Node* head);
Node* findNearestToAverage(Node* head, float average);

#endif

