//11. Tres personas deciden invertir su dinero para fundar una empresa. Cada una de ellas invierte una cantidad distinta. 
//Obtener el porcentaje que cada quien invierte con respecto a la cantidad total invertida

#include <iostream>

using namespace std;

struct inversiones{
	
	double inversion1=0, inversion2=0, inversion3=0, porcentaje1, porcentaje2, porcentaje3;
};

int main() {
    
    inversiones porcentaje;
    
    int inversion_total;
    
     cout << "Ingrese el capital invertido por parte de la primera persona: $ ";
     cin >>porcentaje.inversion1;
     
     cout << "Ingrese el capital invertido por parte de la segunda persona: $ ";
     cin >>porcentaje.inversion2;
     
     cout << "Ingrese el capital invertido por parte de la tercera persona: $ ";
     cin >>porcentaje.inversion3;
     
     inversion_total= porcentaje.inversion1+porcentaje.inversion2+porcentaje.inversion3;
     
     porcentaje.porcentaje1=porcentaje.inversion1*100/inversion_total;
     porcentaje.porcentaje2=porcentaje.inversion2*100/inversion_total;
     porcentaje.porcentaje3=porcentaje.inversion3*100/inversion_total;
     
     cout << "El capital total de las tres invesiones es: $ "<<inversion_total<<endl;
     cout << "El pocentaje de inversion de la primera persona es: "<<porcentaje.porcentaje1<<"%"<<endl;
     cout << "El pocentaje de inversion de la segunda persona es: "<<porcentaje.porcentaje2<<"%"<<endl;
     cout << "El pocentaje de inversion de la tercera persona es: "<<porcentaje.porcentaje3<<"%"<<endl;
  
    return 0;
}


