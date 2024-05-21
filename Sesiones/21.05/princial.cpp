#include <iostream>                      /*Fecha 21/05/2024*/
#include "variables.h"

using namespace std;

int main(int argc, char const *argv[])
{
    STUDENT teacher;
    cout <<"CIF: ";
    cin >> teacher.cif;
    cout<<"Nombre: ";
    scanf(" %[^\n]", teacher.name);
    cout <<"Apellidos: ";
    scanf(" %[^\n]", teacher.lastName);

    printf("Nombre del estudiante: %s\n", teacher.name);
    printf("CIF del estudiante: %s\n",teacher.cif);
    printf("Apellido del estudiante: %s\n", teacher.lastName);
    return 0;
}
