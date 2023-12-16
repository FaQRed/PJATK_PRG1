#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

// Forward declaration of ListNode template class
template <typename T>
class ListNode;

// Declaration of LinkedList template class
template <typename T>
class LinkedList {
private:
    ListNode<T>* head;

public:
    LinkedList();
    ~LinkedList();

    void append(T value);
    void prepend(T value);
    void remove(T value);
    void clear();
    void display();
    ListNode<T>* getHead() const {
        return head;
    }
};

// Definition of ListNode template class
template <typename T>
class ListNode {
public:
    T data;
    ListNode* next;

    ListNode(T value) : data(value), next(nullptr) {}
};

#endif  // LINKEDLIST_H
