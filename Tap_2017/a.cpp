#include <bits/stdc++.h>
#include <string>

using namespace std;

int main (){
	int s;
	string nota;
	int notaReal;
	string escala[] = {"DO", "DO#", "RE", "RE#", "MI", "FA", "FA#", "SOL", "SOL#","LA", "LA#", "SI"};
	cin >> s;
	cin >> nota;
	for(int i = 0; i < 12; i++){
		if (escala[i] == nota){
			notaReal = i - s;
			if(notaReal < 0)
				notaReal += 12;
		}
	}
	cout << escala[notaReal] << endl;
	return 0;
}
