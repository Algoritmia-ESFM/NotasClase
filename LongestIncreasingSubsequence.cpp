#include <bits/stdc++.h>

using namespace std;

const int maxN = 20002;

int A[maxN];
int N;

void readCase(){
	cin >> N;
	for(int i=0 ; i<N ; i++){
		cin >> A[i];
	}
}

vector<int> getLIS(int arre, int sizeN){
	vector<int> liss[sizeN+1];
	vector<int> aux;
	liss[1] = arre[0];
	for(int n=2 ; n<=sizeN ; n++){
		//Ahora tenemos que ver dónde podemos hacer un append
		liss[n] = {};
		for(int i = 0 ; i < n ; i++){
			/**Primero tenemos que ver si podemos hacer un append a la 
			 * LIS[i] append arre[n]
			*/
			if (liss[i].size() == 0 || liss[ (int)liss.size() - 1] < arre[n]){
				//Podemos hacer un append
				aux = liss[i];
				aux.append(arre[n]);
			}
			if (liss[n].size() < aux.size()) liss[n] = aux;
			else if( liss[n].size() == aux.size() && liss[n][
		}
	}
	return liss[N];
}

void printVector(vector<int> outA){
	for(unsigned int i=0 ; i< outA.size() ; i++){
		cout << outA[i] << ' ';
	}
	cout << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	readCase();
	
	return 0;
}
