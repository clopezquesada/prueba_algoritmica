#include <iostream>
#include <vector>

using namespace std;

struct Persona{ 
	char SEXO;
	int EDAD;
};

void LEER_PERSONAS( vector<Persona>& personas){

	for(int i=0; i<personas.size(); i++){
		cout << "Introduzca sexo (F o M): "; 
		cin >> personas[i].SEXO;
		cout << "Introduzca la edad: " ;
		cin >> personas[i].EDAD;
	}
}

int main() {
	
	int total_personas = 3;
	vector<Persona> personas(total_personas);
	LEER_PERSONAS(personas);
	
	int cantidad_personas_mayor_edad = 0;
	int cantidad_personas_mayor_edad_m = 0;
	int cantidad_personas_menor_edad = 0;
	int cantidad_personas_menor_edad_f = 0;
	int cantidad_mujeres = 0;
	float porcentaje_mayor_edad = 0;
	float porcentaje_mujeres= 0;
	
	for(int i=0; i<personas.size(); i++){
		if(personas[i].EDAD>=18){
			cantidad_personas_mayor_edad++;
			if(personas[i].SEXO == 'M')
				cantidad_personas_mayor_edad_m++;	
		}else{
			cantidad_personas_menor_edad++;
			if(personas[i].SEXO == 'F')
				cantidad_personas_menor_edad_f++;	
		}
		
		if(personas[i].SEXO == 'F')
			cantidad_mujeres++;

	}
	
	porcentaje_mayor_edad = (cantidad_personas_mayor_edad/(float)total_personas)*100.0;
	porcentaje_mujeres = (cantidad_mujeres/(float)total_personas)*100.0;
	
	cout << "Cantidad personas mayores de edad: " << cantidad_personas_mayor_edad << endl;
	cout << "Cantidad personas menores de edad: " << cantidad_personas_menor_edad << endl;
	cout << "Cantidad personas masculinas y mayores de edad: " << cantidad_personas_mayor_edad_m << endl;
	cout << "Cantidad personas femeninas y menores de edad: " << cantidad_personas_menor_edad_f << endl;
	cout << "Porcentaje que representan las personas mayores de edad respecto al total de personas: " << porcentaje_mayor_edad << endl;
	cout << "Porcentaje que representan las mujeres respecto al total de personas: " << porcentaje_mujeres << endl;

}

