//5. Un maestro desea saber qué porcentaje de hombres y que porcentaje de mujeres hay en un grupo de estudiantes.

#include <iostream>

using namespace std;

struct grupo{
	double cant_mujeres, cant_hombres, porcentaje_h, porcentaje_m;
};

int main() {
	
    grupo a;
    int cant_total;
    
    cout<<"Escriba la cantidad de hombres del grupo: ";
    cin>> a.cant_hombres;
    
    cout<<"Escriba la cantidad de mujeres del grupo: ";
    cin>> a.cant_mujeres;
    
    cant_total= a.cant_mujeres + a.cant_hombres;
    
    a.porcentaje_m= a.cant_mujeres*100/cant_total;
    a.porcentaje_h= a.cant_hombres*100/cant_total;
    
    cout<<"la cantidad total de personas en el grupo es: "<<cant_total<<endl;
    cout<<"El porcentaje de hombres en el grupo es: "<<a.porcentaje_h<<"%."<<endl;
    cout<<"El porcentaje de mujeres en el grupo es: "<<a.porcentaje_m<<"%."<<endl;

    return 0;
}


