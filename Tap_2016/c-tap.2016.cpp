#include <bits/stdc++.h>

long contador = 0;
using namespace std;

bool check (int x, bool *mat, bool *reg, int n){
	bool r = true;
	for(int i = 0; i < n; i++){
		//cout << "Linkeado:" << *((mat+i*n) + (x - 1)) << "," << i << "," << x -1 << endl;
		if(*((mat+i*n) + (x - 1))){
			r = r && *(reg+i);
			//cout << "Registrado:" <<*(reg+i) << endl;
		}
		if (!r) break;
	}
	/*delete mat;
	delete reg;*/
	return r;
}

void registrar (int x, bool *mat, bool *reg, int n, bool *pen){
	*(reg + (x-1)) = 1;
	pen[x-1] = 0; // no se si va
	//cout << "Se registro:" << x << endl;
	contador++;
	for(int i = 0; i < n; i++){
		//cout << *((mat+(x-1)*n) + i) <<endl;
		if(*((mat+(x-1)*n) + i) && !*(reg+(i)) && *(pen+i)){
			if(check(i +1 , mat, reg, n)){
				*(pen+i) = 0;
				registrar(i + 1, mat, reg, n, pen);
			}

		}
	}
	/*delete mat;
	delete reg;
	delete pen;*/
}

int main (){
		int n,m, a, b, x;
		while(cin >> n >> m)
		{
			a = b = x = contador = 0;
			bool mat[n][n];
			bool reg[n], pen[n];

			//Inicializa en 0
			for(int i = 0; i < n; i++){
				for(int j = 0; j < n; j++){
					mat[i][j] = 0;

				}
				reg[i] = 0;
				pen[i] = 0;
			}

			//Lee datos de correlativas
			for(int i = 0; i < m; i++){
				cin >> a >> b;
				mat[a - 1][b - 1] = 1;
			}

			for(int i = 0; i < n; i++){
				cin >> x;
				//cout << check(x, (int *)mat, (int *)reg, n)  << endl;
				if(check(x, (bool *)mat, (bool *)reg, n)){
					registrar(x, (bool *)mat, (bool *)reg, n, (bool *)pen);
					/*reg[x-1] = 1;
					pen[x-1] = 0;
					contador++;*/
				}else{
					pen[x-1] = 1;
				}
				cout << contador  << endl;
			}
		}

	return 0;
}
