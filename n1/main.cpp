// main.cpp

#include "dynamic_structure.h"
#include <iostream>

using namespace std;

int main() {
    Node* P1 = create(); // Создаем очередь
    Node* P2 = nullptr; // Указатель на конец очереди

    // Добавление элементов в очередь
    addElement(P1, 5);
    addElement(P1, 10);
    // P2 указывает на последний добавленный элемент
    P2 = P1->next;

    int D = 15; // Новый элемент
    // Добавляем новый элемент в конец очереди
    addElement(P2, D);

    // Извлечение первого элемента из очереди
    Node* extractedElement = P1;
    P1 = P1->next;
    int extractedData = extractedElement->data;
    delete extractedElement; // Освобождаем память извлеченного элемента

    // Вывод значения извлеченного элемента
    cout << "Извлеченный элемент: " << extractedData << endl;

    // Вывод содержимого очереди
    cout << "Содержимое очереди после операций: ";
    display(P1);

    // Вывод адресов начала и конца очереди
    cout << "Адрес начала очереди: " << P1 << endl;
    cout << "Адрес конца очереди: " << P2 << endl;

    return 0;
}
