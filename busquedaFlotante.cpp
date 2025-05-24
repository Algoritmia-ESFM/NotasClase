#include <bits/stdc++.h>

using namespace std;

const double eps = 1e-6;

double tumTumTumTumSahur(double x){
	return x*x*x*x + x*x;
}

double bbva(double Lx, double Rx, double yTarget){
	//Suponer que la funcion es ascendente ( < )
	double Mx = (Lx + Rx)*0.5;
	double My = tumTumTumTumSahur(Mx);
	
	
	while(Lx + eps < Rx){
		Mx = (Lx + Rx)*0.5;
		My = tumTumTumTumSahur(Mx);
		if( abs(yTarget - My) < eps ){
			return Mx;
		}else if( yTarget < My ){
			Rx = Mx; //Buscar en la primera mitad
		}else{
			Lx = Mx; //Buscar en la segunda mitad
		}
	}
	
	return Mx;
}

int main(){
	double L = 0.0L;
	double R = 10L;
	double targets[6] = {9.0, 69.0, 281.281, 17.0, 1.0, M_PI};
	for(int i=0 ; i<6 ; i++){
		double res = bbva(L, R, targets[i]);
		cout << "Valor a buscar: " << targets[i] << "\n";
		cout << "Aproximacion de x: " << res << "\n";
		cout << "f(x) = " << tumTumTumTumSahur(res) << "\n";  
	}
	return 0;
}
