#include "iostream"
using namespace std;

int main(){ 

float IVA = 0.13;
double precioProducto, cantidadIVA, precioFinal;

cout << "DIGITE EL PRECIO DEL PRODUCTO: ";
cin >> precioProducto;

    cantidadIVA = precioProducto * IVA;

    precioFinal = precioProducto + cantidadIVA;

cout << " El precio del producto con IVA es: " << precioFinal << endl;

    return 0;
}