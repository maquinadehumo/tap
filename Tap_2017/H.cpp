#include <bits/stdc++.h>

using namespace std;

int main (){
	int n,x, y, c = 0;
	int i = 0;
	cin >> n;
	cin >> y;
	bool r = y > 0;
	for(int i = 0; i < (n -1); i++){
		cin >> x;
		if(x < y && r){
			c++;
			r = false; 
		}else{
			if(x>y){
				r = true;
			}
		}
		y = x;
	}	
	c += (r) ? 1 : 0;
	cout << c << endl;
	return 0;
}
