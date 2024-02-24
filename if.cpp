#include <iostream>
using namespace std;
main(){
	int codigo=0;
	cout<<"Ingrese codigo de area:";
	cin>>codigo;
	switch(codigo){
		case 501 :cout<<"Belice"<<endl;;
			break;
		case 502 :cout<<"Guatemala"<<endl;
			break;
		case 503 :cout<<"El Salvador"<<endl;
			break;
		case 504 :cout<<"Honduras"<<endl;
			break;
		case 505 :cout<<"Nicaragua"<<endl;
			break;
		case 506 :cout<<"Costa Rica"<<endl;
			break;
		case 507 :cout<<"Panama"<<endl;
			break;						
		default : cout<<"Este codigo no es Centro America"<<endl;
	}
	
	/*
	//and (y) &&
	// or (o) ||
	
	char lapiz,lapicero,cuaderno;
	
	cout<<"Trae Lapiz (s/n):";
	cin>>lapiz;
	cout<<"Trae Lapicero (s/n):";
	cin>>lapicero;
	cout<<"Trae Cuaderno (s/n):";
	cin>>cuaderno;
	// puede entrar a mi clase si usted trae un lapiz y un lapicero
	// and (y) = el valor es verdadero si ambas son verdaderas
	// puede entrar a mi clase si usted trae un lapiz o un lapicero
	// or (o) = el valor es verdaderos si por lo menos una es verdadera
	
	// puede entrar a mi clase si usted trae un lapiz o un lapicero y un cuaderno

	if((lapiz=='s' || lapicero=='s')&& cuaderno == 's'){
		cout<<"Ingresa"<<endl;
	}else{
		cout<<"Lo siento no puede Ingresar"<<endl;
	}*/
	
	
	/*
	//determinar si un numero es par o impar
	int num=0;
	cout<<"Ingrese Numero:";
	cin>>num;
	// dividir un numero entre dos su residuo es cero entonces es par caso contrario es impar
	if ((num%2)==0){
		cout<<"Par"<<endl;
	}else{
		cout<<"Impar"<<endl;
	}*/
	
	
	//numero es positivo o negativo<0
	/*string pais="";
	cout<<"Ingrese el pais:";
	cin>>pais;
	if(pais=="guatemala"){
		cout<<"yo soy de "<<pais<<" mi pais"<<endl;
	}else{
		cout<<pais<<endl;
	}*/
	
	
	/*int num=0;
	cout<<"Ingrese el Numero:";
	cin>>num;
	if(num>0){ // >0
		//entra aca cuando la condición es verdadera
		cout<<"Positivo"<<endl;
	}else{ // <=0
		if(num==0){// 0
			cout<<"Neutro"<<endl;
			}else{//<0
				cout<<"Negativo"<<endl;
		}
	}*/
		
	system("pause");
}
