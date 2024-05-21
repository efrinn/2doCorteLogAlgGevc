#include <iostream>
using namespace std;

int main() {
    int num[10];
    int c = 0;
    int p = 0;
    int i = 0;

    cout << "Ingrese 10 numeros enteros:\n";
    while (c < 10) {
        cout << "Numero " << c + 1 << ": ";
        cin >> num[c];

        if (num[c] % 2 == 0) {
            p++;
        } else {
            i++;
        }

        c++;
    }

    cout << "Cantidad de numeros pares: " << p << endl;
    cout << "Cantidad de numeros impares: " << i << endl;

    return 0;
}
