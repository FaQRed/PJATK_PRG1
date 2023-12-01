#include "iostream"
using namespace std;

struct Node{ // struc reprezentuje pojedynczy element w stosie
    int number;
    Node* next;

    Node(int value) : number(value), next(nullptr){} //Konstruktor dla struct Node
};


//struct stosu
struct Stack{
private:
    Node* top; // wskaźnik na ostatni element stosu
public:
    Stack() : top(nullptr){} //Konstruktor stack-u

    //funkcja do dodawania elementow do stosu
    void push(int value){
        Node* newNode = new Node(value); //tworzenie nowego stosu z wartosca
        newNode -> next = top; //wskazuje na poprzedni element stosu
        top = newNode; //przsyswoenie elementu do stosu
    }

    //funkcja do usuwania elementa ze stosu
    void pop(){
        if(top == nullptr){ //sprawdzenie czy stos jest pusty
            cout << "Stack is empty" << endl;
        } else{
            Node* tmp = top; //przechowanie adresu obiecnego
            top = top -> next; //przesunijencie
            delete tmp; //zwolnenie pamieci
        }
    }
    //funkcja do zwracania wartosci (top)
    int peek() const{
        if(top == nullptr){ //bool czy stos jest pusty
            cerr << "Stack is empty!" << endl;
            return -1;
        }
        return top -> number; //zwrocenie wartosci ze stosu (top)
    }

    //funkcja do sprawdzenia czy stos jest pusty
    bool isEmpty() const{
        return top == nullptr;
    }
};



int main(){
    Stack myStack; //tworzenie stack-u

    myStack.push(2428);
    myStack.push(6532);
    myStack.push(6725);

    cout << "Top: " << myStack.peek() << endl;

    myStack.pop();
    myStack.pop();

    cout << "Top after pop: " <<myStack.peek() << endl;

    return 0;
}