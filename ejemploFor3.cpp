#include <iostream>

using namespace std;

#define MAX 100

int vector[MAX];
int pos=0;

void agregar(int num);
void mostrar ();

int main(int argc, char const *argv[])
{
    int cant ;
    int num ;
    cout << " dime la cantidad que deseas almacenar: ";
    cin >> cant ;
    for (int i=0; i<cant; i++){
        cout << "agregar numero que deseas almaenar: ";
        cin >> num;
        agregar (num);
    }
    cout << "numeros almacenados : ";
    mostrar();
    return 0;
}

void agregar(int num){
    vector[pos]= num;
    pos++;
}

void mostrar(){
    for(int i =0; i<pos; i++){
        cout << vector[i] << endl;
    }
}
