#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num=1 , sum =0;
    while (num > 0){
     sum += num;
        cout << " Dime un numero: ";
        cin >> num;
    }
    cout << "La suma es " << sum << endl;

    return 0;
}
