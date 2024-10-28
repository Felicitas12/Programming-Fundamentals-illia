#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

struct Point {
    float data;
    Point* next;
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    inline void addFront(float value) {
        Point* newNode = new Point{value, head};
        head = newNode;
    }

    void addEnd(float value) {
        Point* newNode = new Point{value, nullptr};
        if (!head) {
            head = newNode;
        } else {
            Point* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display() const {
        Point* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

private:
    Point* head;
};

#endif
