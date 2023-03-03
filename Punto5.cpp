/*8. En un hospital existen tres áreas: Ginecología, Pediatría, Traumatología. El presupuesto anual del hospital se reparte conforme a la sig. tabla:

Área Porcentaje del presupuesto
Ginecología 40%
Traumatología 30%
Pediatría 30%

9. Obtener la cantidad de dinero que recibirá cada área, para cualquier monto presupuestal.*/

#include <iostream>

using namespace std;

struct areas{
	int monto_presupuestal=0, monto_ginecologia, monto_traumatologia, monto_pediatria;
};

int main() {
	
	areas dinero;
	
    cout << "Ingrese el monto presupuestal del hospital anual: ";
    cin >> dinero.monto_presupuestal;
    
    dinero.monto_ginecologia=dinero.monto_presupuestal*40/100;
    dinero.monto_traumatologia=dinero.monto_presupuestal*30/100;
    dinero.monto_pediatria=dinero.monto_presupuestal*30/100;
    
    cout << "La cantidad de dinero que recibira la area de ginecologia es: $"<<dinero.monto_ginecologia<<endl;
    cout << "La cantidad de dinero que recibira la area de traumatologia es: $"<<dinero.monto_traumatologia<<endl;
    cout << "La cantidad de dinero que recibira la area de pediatria es: $"<<dinero.monto_pediatria<<endl;
    
    return 0;
}



