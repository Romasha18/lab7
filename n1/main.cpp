#include "dynamic_structure.h"
#include <iostream>

using namespace std;

int main() {
    Node* P1 = create();
    Node* P2 = nullptr; 

    addElement(P1, 5);
    addElement(P1, 10);
    P2 = P1->next;

    int D = 15;
    addElement(P2, D);

    Node* extractedElement = P1;
    P1 = P1->next;
    int extractedData = extractedElement->data;
    delete extractedElement; 

   
    cout << "Извлеченный элемент: " << extractedData << endl;

    cout << "Содержимое очереди после операций: ";
    display(P1);

    cout << "Адрес начала очереди: " << P1 << endl;
    cout << "Адрес конца очереди: " << P2 << endl;

    return 0;
}
