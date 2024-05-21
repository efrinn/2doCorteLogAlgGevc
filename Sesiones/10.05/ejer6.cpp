 #include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int i=1;

    cout<<"Numero de Calificaciones a almacenar :";
    cin>>n;

    int g[n];

    while(i<n+1){
        cout<<"Ingresa la nota #"<<i<<": "<<endl;
        cin>>g[i];
        i++;
    }
    i=1;
    while(i<n+1){
        cout<<"Nota #"<<i<<" es: "<<g[i]<<endl;
        i++;
    }
    i=1;
    int sum =0;
    while(i < n + 1){
        sum = sum + g[i];
        i++;
    }
    int promedy = sum/n;
    cout << "Promedio es: " << promedy << endl;
    return 0;
}
