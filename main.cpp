#include <iostream>
#include <span>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) ;
int mul(int a, int b);
int division(int a, int b);

int main() {
    cout << "Hello world!" << endl;
    sub(3, 5);
}

int sub(int a, int b) {
    return a - b;
}


