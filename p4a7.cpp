#include <iostream>
#include <string>
#include "p4a7.h"

using namespace std;

int main()
{
    Alumno* alumno1 = new Alumno("Juan","Martinez",15,72685428,2022802411,"Ing de sistemas");

    cout << alumno1->dni << endl;
    cout << alumno1->getNombre() << endl;
    cout << alumno1->getApellidoPaterno() << endl;
    cout << alumno1->getEdad() << endl;

    cout << alumno1->carrera << endl;
    cout << alumno1->getCodigo() << endl;
    alumno1->obtenerCorreo();

    alumno1->setEdad(19);
    alumno1->setCodigo(202280441);
    alumno1->setNombre("Juan Pablo");
    alumno1->setApellido("Rodriguez");
    alumno1->dni = 72685438;
    alumno1->carrera = "Ing Mecanica";
    delete alumno1;
    return 0;

}