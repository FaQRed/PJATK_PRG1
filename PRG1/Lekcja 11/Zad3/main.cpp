#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

struct Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enque(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void unque() {
        if (isEmpty()) {
            std::cerr << "Queue is empty" << std::endl;
        } else {
            Node* temp = front;
            front = front->next;
            if (front == nullptr) {
                rear = nullptr;
            }
            delete temp;
        }
    }

    int frontValue() const {
        if (isEmpty()) {
            std::cerr << "Queue is empty" << std::endl;
            return -1;
        }
        return front->data;
    }

    bool isEmpty() const {
        return front == nullptr;
    }
};

int main() {
    Queue myQueue;

    myQueue.enque(2428);
    myQueue.enque(6532);
    myQueue.enque(6725);

    std::cout << "front: " << myQueue.frontValue() << std::endl;

    myQueue.unque();
    myQueue.unque();

    std::cout << "front after: " << myQueue.frontValue() << std::endl;

    return 0;
}
