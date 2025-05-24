#include <bits/stdc++.h>

using namespace std;

/**
 * Vamos un tener un arreglo de tamaño de N
 * y queremos responder cual es la suma 
 * en el rango L, R, es decir, [L, R[
 * 
 * Cantidad de preguntas va a ser grande (10^6)
 * 
 * Nuestro arreglo va a ser de a lo más (2*10^6)
 * 
 * Problemas del tipo RMQ -> (Range Minimun Query)
 * 
 * * No va a cambiar los elementos del arreglo
 * * El arreglo es estatico
 * 
 * */

const int maxN = 2e6;

int arre[maxN];
vector<int> A;

int N;

int main(){
	
	cin >> N;
	//Si queremos ocupar vector
	A.assign(N, 0); //haz un arreglo de tamaño N, con todos los elementos iguales a 0
	
	int sumA[N+1]; 
	sumA[0]=0;
	
	for(int i=0 ; i<N ; i++){
		cin >> arre[i]; //Leer del std Input, escribir en la posicion i del arreglo
		A[i] = arre[i];
		sumA[i+1]=sumA[i] + arre[i];
		
	}
	
	//El problema de RMQ
	int Q;
	int L,R;
	cin >> Q;
	
	while(Q--){
		cin >> L >> R;
		long long sum = sumA[R]-sumA[L];

		cout << sum << "\n";
	}
	
	
	return 0;
}
