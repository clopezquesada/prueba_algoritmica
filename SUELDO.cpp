#include <iostream>

using namespace std;

int LEER_HORAS_TRABAJADAS(){
	int HORASTRABAJADAS;
	cout << "Introduzca horas trabajadas (>=0): ";
	cin >> HORASTRABAJADAS;
	while(HORASTRABAJADAS < 0){
		cout << "Introduzca horas trabajadas (>=0): ";
		cin >> HORASTRABAJADAS;
	}
	
	return HORASTRABAJADAS;
}

int LEER_TARIFA(){
	float TARIFA;
	cout << "Introduzca la tarifa (>=0): ";
	cin >> TARIFA;
	if(TARIFA < 0){
		cout << "Introduzca la tarifa (>0): ";
		cin >> TARIFA;
	}
	
	return TARIFA;
}

float IMPRIMIR_SUELDO(int HORASTRABAJADAS, float TARIFA){
	float SUELDO;
	int HORAS_EXTRAS;
	float TARIFA_MODIFICADA; 
	if(HORASTRABAJADAS > 40){
		SUELDO = 40*TARIFA;
		HORAS_EXTRAS = HORASTRABAJADAS - 40;
		TARIFA_MODIFICADA = TARIFA + 0.5*TARIFA;
		SUELDO = SUELDO + HORAS_EXTRAS*TARIFA_MODIFICADA;
	}else{
		SUELDO = HORASTRABAJADAS*TARIFA;
	}
	
	return SUELDO;
}

int main(){
	int HORASTRABAJADAS = LEER_HORAS_TRABAJADAS();
	float TARIFA = LEER_TARIFA();
	float SUELDO;
	
	SUELDO = IMPRIMIR_SUELDO(HORASTRABAJADAS,TARIFA);
	
	cout << "Su sueldo es de " << SUELDO << "€" << endl;
}


