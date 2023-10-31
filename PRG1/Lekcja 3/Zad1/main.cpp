#include <iostream>
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    int a,b, suma, answer_user;


    std::cin >> a >> b;
    if (a > b){
        std::cout << "Incorrect input, you want to swap it? 1/0 \n";
        std::cin >> answer_user;
        if ( answer_user == 1){
            swap(a,b);
            for (a; a < b; ++a) {
                suma = a + b;
            }
            std:: cout <<"suma " << suma;
        } else return 0;
    } else {
        for (a; a < b; ++a) {
            suma = a + b;
        }
        std:: cout <<"suma =" << suma;
    }


}
