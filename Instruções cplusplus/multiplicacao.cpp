#include <iostream>
using namespace std;

int multiplicacao(int a, int b) {
    return a * b;
}

int main() {
    int resultado = multiplicacao(8, 2);

    cout << "O produto de 8 e 2 é: " << resultado << endl;

    return 0;
}
