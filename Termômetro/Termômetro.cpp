#include <iostream>

using namespace std;

	int main(){
		setlocale(LC_ALL,"portuguese");
		double temp;
		
		cout<<"        TERMOMETRO" <<endl <<endl;
		cout<<"Informe a sua temperatura: ";
		cin>>temp;
		
		if (temp <= 37.2){
			cout<<"Temperatura normal " <<"(" <<temp <<")";
		}else if (temp >= 37.3 && temp <= 37.8){
			cout<<"Você está Febrícula(o) " <<"(" <<temp <<")";
		}else if (temp >= 37.9 && temp <= 38.9){
			cout<<"Você está com Febre "<<"(" <<temp <<")";
		}else if (temp >= 39){
			cout<<"Você está com Febre alta " <<"(" <<temp <<")" ;
		}
	}
