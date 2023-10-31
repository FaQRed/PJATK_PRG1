#include <iostream>
#include <bits/stdc++.h>
#include <ctime>
#include "random"
using namespace std;
int main() {
    random_device rd;
    uniform_int_distribution <int> num(0, 5);


    std::cout << "Hello, World! " << num(rd) << std::endl;
    return 0;
}
