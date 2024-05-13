#include <iostream>
using namespace std;

int divisao(int a, int b) {
    return a / b;
}

int main() {
    int resultado = divisao(30, 5);

    cout << "O quociente de 30 por 5 é: " << resultado << endl;

    return 0;
}
