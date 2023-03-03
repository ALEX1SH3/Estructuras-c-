
//10. El dueño de una tienda compra un artículo a un precio determinado. Obtener el precio en que lo debe vender para obtener una ganancia del 30%.

#include <iostream>

using namespace std;


struct articulo {
	double precio_compra, precio_venta;
};

int main() {
	
    articulo ganancia;
    
    cout << "Ingrese el precio de compra: ";
    cin >> ganancia.precio_compra;
    
    ganancia.precio_venta = ganancia.precio_compra + (ganancia.precio_compra * 30 / 100);
    
    cout << "El precio de venta para generar una ganancia del 30% es: " << ganancia.precio_venta << endl;

    return 0;
}

