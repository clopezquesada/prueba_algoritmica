#include <iostream>

using namespace std;

int LEERNUMERO(){
	int NUMERO;
	
	cout << "Introduzca un número entero: ";
	cin >> NUMERO;
	
	return NUMERO;
}

bool ES_PAR(int NUMERO){
	bool es_par = false;
    if(NUMERO % 2 == 0)
        es_par = true;
        
    return es_par;

}

int main(){
	int NUMERO = LEERNUMERO();
	

	if(ES_PAR(NUMERO) == true){
		for(int i=NUMERO; i>=0; i--){
			if(ES_PAR(i) == true){
				cout << i << endl;	
			}
		}
        
	}else{
		for(int i=NUMERO; i>=1; i--){
			if(ES_PAR(i) == false)
            	cout << i << endl;
		}
	}

}
