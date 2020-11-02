#include <iostream>
#include "arreglo.h"
#include "computadora.h"

using namespace std;

int main()
{
    Arreglo <Computadora> compus;
    Computadora compu1=Computadora("X571G","Windows7","AsusTec",8);
    Computadora compu2;
    compu2.setNombre("X100G");
    compu2.setOs("Linux");
    compu2.setFabricante("AsusTec");
    compu2.setRam(8);
    Computadora compu3=Computadora("X581G","Windows8","AsusTec",16);
    Computadora compu4=Computadora("X591G","Linux","AsusTec",24);
    Computadora compu5=Computadora("X571G","Windows","AsusTec",4);

    compus << compu1 <<compu2 << compu3 << compu4 << compu5 << compu5 << compu5;

    Computadora compu6=Computadora("X571G","Windows","AsusTec",4);
    Computadora *ptr = compus.busquedaLineal(compu6);

    if (ptr != nullptr){
        cout << *ptr << endl;
    }
    else{
        cout<< "No existe sry" << endl;
    }


    return 0;
}
