#include <bits/stdc++.h>

using namespace std;

int main (){
	int a,b,c, d =0;
	int cartas[] = {0,0,0,0,0,0,0};
	int contrarias[3] = {0, 0, 0};
	bool r = false;
	cin >> a >> b >> c;
	cartas[a- 1] = 1;
	cartas[b-1] = 1;
	cartas[c-1] = 1;
	r = (cartas[0] && cartas[1]) ||
	(cartas[0] && cartas[2]) || 
	(cartas[1] && cartas[2] && cartas[3]) ||
	(cartas[0] && cartas[3] && cartas[4]);
	if(r)
		cout << 'S' << endl;
	else
		cout << 'N' << endl;
	return 0;
}
