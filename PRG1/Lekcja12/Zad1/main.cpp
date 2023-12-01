#include <iostream>
using namespace std;
class pet{
    int age;
    string name;

    virtual void Bark(){
        cout << "Bark";
    }

};
class dog : public pet{
     void Bark() override {
       cout << "Bark";
   }
};
int main() {
    int a;
    string name;
    cout << "Hello, World!" << endl;
    return 0;


}

