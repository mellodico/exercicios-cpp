#include <iostream>
using namespace std;

int subtracao(int a, int b) {
    return a - b;
}

int main() {
    int resultado = subtracao(30, 10);

    cout << "A diferença entre 30 e 10 é: " << resultado << endl;

    return 0;
}
