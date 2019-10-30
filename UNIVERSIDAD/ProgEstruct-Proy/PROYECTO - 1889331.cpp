#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[4][4], filas, columnas, MayVendA = 0 , MenVendA = 0, suma=0, T01, T02, T03, T04; int p, v, c, m;
	char Plato[] = "Plato", Vaso[] = "Vaso", Cubierto[] = "Cubierto",Material[] = "MaterialCocinaTermica";
	
	system("COLOR 0B");
	
	cout<<"\n";
	cout<<"\tPROGRAMA QUE REGISTRA EL FUNCIONAMIENTO DE UNA EMPRESA CON RESPECTO AL COMPORTAMIENTO DE SUS VENTAS\n"<<endl;
	cout<<"\tSOLO DIGITE 4 en filas Y 4 en columnas(matriz) "<<endl;
	cout<<"\tDigite el numero de filas: "; cin>>filas;
	cout<<"\tDigite el numero de columnas: "; cin>>columnas;
	cout<<"\t\n";
	system("pause");
	system("cls");
			
	cout<<"\t                            TECNI COCINA\n";
	cout<<"\t=======================================================================\n";
	cout<<"\t                         REGISTRO DE VENTAS\n";
	cout<<"\t========================================================================\n";
	cout<<"\t.............:LOS DATOS SE GUARDARAN DE ESTA MANERA:....................\n";
	cout<<"\t.             TRIM-1   ||    TRIM-2    ||    TRIM-3     ||   TRIM-4    .\n";
	cout<<"\t. PLATO    MONTO[0][0] --- MONTO[0][1] --- MONTO[0][2] --- MONTO[0][3] .\n";
	cout<<"\t. VASO     MONTO[1][0] --- MONTO[1][1] --- MONTO[1][2] --- MONTO[1][3] .\n";
	cout<<"\t. CUBIERTO MONTO[2][0] --- MONTO[2][1] --- MONTO[2][2] --- MONTO[2][3] .\n";
	cout<<"\t. MATERIAL MONTO[3][0] --- MONTO[3][1] --- MONTO[3][2] --- MONTO[3][3] .\n";
	cout<<"\t........................................................................\n";
	cout<<"\t\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"\tIngrese el MONTO de la venta en ["<<i<<"]["<<j<<"]: "; cin>>numeros[i][j];
		}
	}cout<<"\t\n";
	
	cout<<"\t                   REGISTRO\n\n";
	cout<<"   TRIM-1   ||   TRIM-2   ||   TRIM-3   ||   TRIM-4\n";
	
	bool primeraVez = true;
	for(int i=0;i<filas;i++){	
		for(int j=0;j<columnas;j++){
			cout<<"     "<<numeros[i][j]<<"      ";
			suma = suma + numeros[i][j];
				if(primeraVez){
				MenVendA = numeros[i][j];
				MayVendA = numeros[i][j];
				primeraVez = false;
			} else{
				if(numeros[i][j] > MayVendA){
					MayVendA = numeros[i][j];
				}
				if (numeros[i][j] < MenVendA){
					MenVendA = numeros[i][j];
				}
			}
		}cout<<"\t\n";
	}cout<<"\n";
	
	  p = numeros[0][0] + numeros[0][1] + numeros[0][2] + numeros[0][3];
	  v = numeros[1][0] + numeros[1][1] + numeros[1][2] + numeros[1][3];
	  c = numeros[2][0] + numeros[2][1] + numeros[2][2] + numeros[2][3];
	  m = numeros[3][0] + numeros[3][1] + numeros[3][2] + numeros[3][3];
	T01 = numeros[0][0] + numeros[1][0] + numeros[2][0] + numeros[3][0];
	T02 = numeros[0][1] + numeros[1][1] + numeros[2][1] + numeros[3][1];
	T03 = numeros[0][2] + numeros[1][2] + numeros[2][2] + numeros[3][2];
	T04 = numeros[0][3] + numeros[1][3] + numeros[2][3] + numeros[3][3];
	  
	cout<<"\tVenta total en el trimestre 1: "<<T01<< endl;
	cout<<"\tVenta total en el trimestre 2: "<<T02<< endl;
	cout<<"\tVenta total en el trimestre 3: "<<T03<< endl;
	cout<<"\tVenta total en el trimestre 4: "<<T04<< endl;
	cout<<"\n";
	cout<<"\tVenta total en el a¤o: "<<suma<<endl;
	cout<<"\tEl monto mas alto en el a¤o fue: "<<MayVendA<<endl;
	cout<<"\tEl monto mas bajo en el a¤o fue: "<<MenVendA<< endl;
		
	     if(p>v && p>c && p>m){ cout<<"\tEl producto mas vendido al a¤o fue: "<<Plato<<endl;}
	else if(v>p && v>c && v>m){ cout<<"\tEl producto mas vendido al a¤o fue: "<<Vaso<<endl;}
	else if(c>p && c>v && c>m){ cout<<"\tEl producto mas vendido al a¤o fue: "<<Cubierto<<endl;}
	else if(m>p && m>v && m>c){ cout<<"\tEl producto mas vendido al a¤o fue: "<<Material<<endl;}
	     if(p<v && p<c && p<m){ cout<<"\tEl producto menos vendido al a¤o fue: "<<Plato<<endl;cout<<"\n";}
	else if(v<p && v<c && v<m){ cout<<"\tEl producto menos vendido al a¤o fue: "<<Vaso<<endl;cout<<"\n";}
	else if(c<p && c<v && c<m){ cout<<"\tEl producto menos vendido al a¤o fue: "<<Cubierto<<endl;cout<<"\n";}
	else if(m<p && m<v && m<c){ cout<<"\tEl producto menos vendido al a¤o fue: "<<Material<<endl;cout<<"\n";}
	
    	 if(numeros[0][0]>numeros[1][0] && numeros[0][0]>numeros[2][0] && numeros[0][0]>numeros[3][0]){ cout<<"\tEl producto mas vendido en el trimestre 1 fue: "<<Plato<<endl;}
	else if(numeros[1][0]>numeros[0][0] && numeros[1][0]>numeros[2][0] && numeros[1][0]>numeros[3][0]){ cout<<"\tEl producto mas vendido en el trimestre 1 fue: "<<Vaso<<endl;}
	else if(numeros[2][0]>numeros[0][0] && numeros[2][0]>numeros[1][0] && numeros[2][0]>numeros[3][0]){ cout<<"\tEl producto mas vendido en el trimestre 1 fue: "<<Cubierto<<endl;}
	else if(numeros[3][0]>numeros[0][0] && numeros[3][0]>numeros[1][0] && numeros[3][0]>numeros[2][0]){ cout<<"\tEl producto mas vendido en el trimestre 1 fue: "<<Material<<endl;}
	
	     if(numeros[0][0]<numeros[1][0] && numeros[0][0]<numeros[2][0] && numeros[0][0]<numeros[3][0]){ cout<<"\tEl producto menos vendido en el trimestre 1 fue: "<<Plato<<endl;}
	else if(numeros[1][0]<numeros[0][0] && numeros[1][0]<numeros[2][0] && numeros[1][0]<numeros[3][0]){ cout<<"\tEl producto menos vendido en el trimestre 1 fue: "<<Vaso<<endl;}
	else if(numeros[2][0]<numeros[0][0] && numeros[2][0]<numeros[1][0] && numeros[2][0]<numeros[3][0]){ cout<<"\tEl producto menos vendido en el trimestre 1 fue: "<<Cubierto<<endl;}
	else if(numeros[3][0]<numeros[0][0] && numeros[3][0]<numeros[1][0] && numeros[3][0]<numeros[2][0]){ cout<<"\tEl producto menos vendido en el trimestre 1 fue: "<<Material<<endl;}
	
	     if(numeros[0][1]>numeros[1][1] && numeros[0][1]>numeros[2][1] && numeros[0][1]>numeros[3][1]){ cout<<"\tEl producto mas vendido en el trimestre 2 fue: "<<Plato<<endl;}
	else if(numeros[1][1]>numeros[0][1] && numeros[1][1]>numeros[2][1] && numeros[1][1]>numeros[3][1]){ cout<<"\tEl producto mas vendido en el trimestre 2 fue: "<<Vaso<<endl;}
	else if(numeros[2][1]>numeros[0][1] && numeros[2][0]>numeros[1][1] && numeros[2][0]>numeros[3][1]){ cout<<"\tEl producto mas vendido en el trimestre 2 fue: "<<Cubierto<<endl;}
	else if(numeros[3][1]>numeros[0][1] && numeros[3][1]>numeros[1][1] && numeros[3][1]>numeros[2][1]){ cout<<"\tEl producto mas vendido en el trimestre 2 fue: "<<Material<<endl;}
	
	     if(numeros[0][1]<numeros[1][1] && numeros[0][1]<numeros[2][1] && numeros[0][1]<numeros[3][1]){ cout<<"\tEl producto menos vendido en el trimestre 2 fue: "<<Plato<<endl;}
	else if(numeros[1][1]<numeros[0][1] && numeros[1][1]<numeros[2][1] && numeros[1][1]<numeros[3][1]){ cout<<"\tEl producto menos vendido en el trimestre 2 fue: "<<Vaso<<endl;}
	else if(numeros[2][1]<numeros[0][1] && numeros[2][0]<numeros[1][1] && numeros[2][0]<numeros[3][1]){ cout<<"\tEl producto menos vendido en el trimestre 2 fue: "<<Cubierto<<endl;}
	else if(numeros[3][1]<numeros[0][1] && numeros[3][1]<numeros[1][1] && numeros[3][1]<numeros[2][1]){ cout<<"\tEl producto menos vendido en el trimestre 2 fue: "<<Material<<endl;}
	
       	 if(numeros[0][2]>numeros[1][2] && numeros[0][2]>numeros[2][2] && numeros[0][2]>numeros[3][2]){ cout<<"\tEl producto mas vendido en el trimestre 3 fue: "<<Plato<<endl;}
	else if(numeros[1][2]>numeros[0][2] && numeros[1][2]>numeros[2][2] && numeros[1][2]>numeros[3][2]){ cout<<"\tEl producto mas vendido en el trimestre 3 fue: "<<Vaso<<endl;}
	else if(numeros[2][2]>numeros[0][2] && numeros[2][2]>numeros[1][2] && numeros[2][2]>numeros[3][2]){ cout<<"\tEl producto mas vendido en el trimestre 3 fue: "<<Cubierto<<endl;}
	else if(numeros[3][2]>numeros[0][2] && numeros[3][2]>numeros[1][2] && numeros[3][2]>numeros[2][2]){ cout<<"\tEl producto mas vendido en el trimestre 3 fue: "<<Material<<endl;}
	
	     if(numeros[0][2]<numeros[1][2] && numeros[0][2]<numeros[2][2] && numeros[0][2]<numeros[3][2]){ cout<<"\tEl producto menos vendido en el trimestre 3 fue: "<<Plato<<endl;}
	else if(numeros[1][2]<numeros[0][2] && numeros[1][2]<numeros[2][2] && numeros[1][2]<numeros[3][2]){ cout<<"\tEl producto menos vendido en el trimestre 3 fue: "<<Vaso<<endl;}
	else if(numeros[2][2]<numeros[0][2] && numeros[2][2]<numeros[1][2] && numeros[2][2]<numeros[3][2]){ cout<<"\tEl producto menos vendido en el trimestre 3 fue: "<<Cubierto<<endl;}
	else if(numeros[3][2]<numeros[0][2] && numeros[3][2]<numeros[1][2] && numeros[3][2]<numeros[2][2]){ cout<<"\tEl producto menos vendido en el trimestre 3 fue: "<<Material<<endl;}
	
	     if(numeros[0][3]>numeros[1][3] && numeros[0][3]>numeros[2][3] && numeros[0][3]>numeros[3][3]){ cout<<"\tEl producto mas vendido en el trimestre 4 fue: "<<Plato<<endl;}
	else if(numeros[1][3]>numeros[0][3] && numeros[1][3]>numeros[2][3] && numeros[1][3]>numeros[3][3]){ cout<<"\tEl producto mas vendido en el trimestre 4 fue: "<<Vaso<<endl;}
	else if(numeros[2][3]>numeros[0][3] && numeros[2][3]>numeros[1][3] && numeros[2][3]>numeros[3][3]){ cout<<"\tEl producto mas vendido en el trimestre 4 fue: "<<Cubierto<<endl;}
	else if(numeros[3][3]>numeros[0][3] && numeros[3][3]>numeros[1][3] && numeros[3][3]>numeros[2][3]){ cout<<"\tEl producto mas vendido en el trimestre 4 fue: "<<Material<<endl;}
		
	     if(numeros[0][3]<numeros[1][3] && numeros[0][3]<numeros[2][3] && numeros[0][3]<numeros[3][3]){ cout<<"\tEl producto menos vendido en el trimestre 4 fue: "<<Plato<<endl;}
	else if(numeros[1][3]<numeros[0][3] && numeros[1][3]<numeros[2][3] && numeros[1][3]<numeros[3][3]){ cout<<"\tEl producto menos vendido en el trimestre 4 fue: "<<Vaso<<endl;}
	else if(numeros[2][3]<numeros[0][3] && numeros[2][3]<numeros[1][3] && numeros[2][3]<numeros[3][3]){ cout<<"\tEl producto menos vendido en el trimestre 4 fue: "<<Cubierto<<endl;}
	else if(numeros[3][3]<numeros[0][3] && numeros[3][3]<numeros[1][3] && numeros[3][3]<numeros[2][3]){ cout<<"\tEl producto menos vendido en el trimestre 4 fue: "<<Material<<endl;}
	getch();
	return 0;
}
