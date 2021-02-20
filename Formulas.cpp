#include <iostream>
#include <locale.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	
		
		float i,n,I,vf,vp;
		int op;
		
	
	cout<<"¿QUE OPERACIÓN DESEA HACER?"<<endl;
	cout<<"1. Formula para hallar el interés"<<endl;
	cout<<"2. Formula para hallar la tasa de interés"<<endl;
	cout<<"3. Formula para hallar el valor final"<<endl;
	cout<<"4. Formula para hallar el valor presente"<<endl;
	cout<<"5. Formula para hallar el tiempo"<<endl;
	cin>>op;
	
	switch(op){
		
		case 1:
		 cout<<"Ingrese el valor futuro"<<endl;
		 cin>>vf;
		 cout<<"Ingrese el valor presente"<<endl;
		 cin>>vp;
		 I=vf-vp;
		 cout<<"El interes es de"<<I;
		 break;
	 
	 	 case 2:
	 	 	
	 	 	cout<<"Ingrese el interes"<<endl;
	 	 	cin>>I;
	 	 	cout<<"Ingrese el valor presente"<<endl;
	 	 	cin>>vp;
	 	 	i=I/vp;
	 	 
	 	 	cout<<"La tasa de interes es"<<i;
	 	 	
	 	 	
	 	 	break;
	 	 	
	 	 	
	 	 case 3:
	 	 	
	 	 	cout<<"Ingrese el valor presente"<<endl;
	 	 	cin>>vp;
	 	 	cout<<"Ingrese el tiempo(años)"<<endl;
	 	 	cin>>n;
	 	 	cout<<"Ingresa la tasa de interés"<<endl;
	 	 	cin>>i;
	 	 	vf=vp*(1+i*n);
	 	 	cout<<"Valor final:"<<vf;
	 	 	break;
		  
		  
		
	 	 	
	 	case 4: 
	 	
	 	cout<<"Ingrese el valor final"<<endl;
	 	cin>>vf;
	 	cout<<"Ingrese la tasa de interés"<<endl;
	 	cin>>i;
	 	cout<<"Ingrese el tiempo"<<endl;
	 	cin>>n;
	 	vp=vf/(1+i*n);
	 	cout<<"Valor presente:"<<vp;
	 	break;
	 	
	
	 	case 5: 
	 	
		 cout<<"Ingrese el valor final"<<endl;
		 cin>>vf;
		 cout<<"Ingrese el valor presente"<<endl;
		 cin>>vp;
		 cout<<"Ingrese la tasa de interes"<<endl;
		 cin>>i;
		 n=( (vf/vp)-1)/i;
		 cout<<"Tiempo:"<<n;
		 break;
	 	
	 	
	 	}
		
		

}
