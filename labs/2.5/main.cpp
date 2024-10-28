/**
* Done by:
 * Student Name: Illia Zhurbenko
 * Student Group: 121
 */

#include "LinkedList.h"

void subroutine_1(LinkedList& list) {
    const float values[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};
    for (const float value : values) {
        list.addEnd(value);
    }
}

void subroutine_2(LinkedList& list) {
    const float values[] = {9.9, 8.8, 7.7, 6.6, 5.5};
    for (const float value : values) {
        list.addFront(value);
    }
}

int main() {
    LinkedList list1;
    subroutine_1(list1);
    std::cout << "Перший список: ";
    list1.display();

    LinkedList list2;
    subroutine_2(list2);
    std::cout << "Другий списокt: ";
    list2.display();

    return 0;
}