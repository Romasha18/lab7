#include "dynamic_structure.h"
#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));

    Node* P1 = create(); 
    Node* P2 = nullptr;

    for (int i = 0; i < 5; ++i) {
        addElement(P1, rand() % 100); 
    }

    P2 = P1;
    while (P2->next != nullptr) {
        P2 = P2->next;
    }

    cout << "Исходные данные: ";
    display(P1);

    float average = calculateAverage(P1);
    cout << "Среднее значение: " << average << endl;

    Node* nearestToAverage = findNearestToAverage(P1, average);

    Node* newP1 = create();
    addElement(newP1, nearestToAverage->data);

    Node* current = P1;
    while (current != nullptr) {
        if (current != nearestToAverage) {
            addElement(newP1, current->data);
        }
        current = current->next;
    }

    cout << "Ближайший элемент к среднему значению: " << nearestToAverage->data << endl;

    cout << "Результат: ";
    displayInReverse(newP1);

    return 0;
}
