#include <bits/stdc++.h>
#include <math>

using namespace std;

int main (){
	int n;
	
	cin >> n;
	bool r = true;
	int polT [n][2];
	int polO [n][2];
	int vectT[n][2];
	int vectO[n][2];
	int modO[n];
	int modT[n];
	for (int i = 0; i < n; i++){
		cin >> polO[i][0] << polO[i][1];
	}
	for (int i = 0; i < n; i++){
		cin >> polT[i][0] << polO[i][1];
	}
	for (int i = 0; i < n-1; i++){
		vectO[i][0] = polO[i+1][0] - polO[i][0];
		vectO[i][1] = polO[i+1][1] - polO[i][1];
		
		
		vectT[i][0] = polT[i+1][0] - polT[i][0];
		vectT[i][1] = polT[i+1][1] - polT[i][1];
	}
	
	vectO[n-1][0] = polO[0][0] - polO[n-1][0];
	vectO[n-1][1] = polO[0][1] - polO[n-1][1];
			
	vectT[n-1][0] = polT[0][0] - polT[n-1][0];
	vectT[n-1][1] = polT[0][1] - polT[n-1][1];
	
	for(int i = 0; i < n; i++){
		modO[i] = vectO[i][0]*vectO[i][0] +	vectO[i][1]*vectO[i][1];
		modT[i] = vectT[i][0]*vectT[i][0] +	vectT[i][1]*vectT[i][1];
	}
	sort(modO, modO + n);
	sort(modT, modT + n);
	double cociente = modO[0] / modT[0];
	for(int i = 1; i < n; i++){
		r = r && (cociente == (modO[i]/modT[i]));
	}
	if
	return 0;
}
