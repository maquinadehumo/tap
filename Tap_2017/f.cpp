#include <bits/stdc++.h>
#include <map>

using namespace std;

int main (){
	int n,a,b,c,d,x;
	int count;
	cin >> n;
	vector <int> banda;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		if(x == 1){
			cin >> a >> b >> c;
			banda.push_back(a);
			banda.push_back(b);
			banda.push_back(c);
		}
		if(x == 2){
			cin >> a;
			banda[3*a - 1] = 0;
		}
		if(x == 3){
			count = 0;
			cin >> c >> d;
			for(int i = 0; i < (banda.size() / 3); i++){
				if (!(d <= banda[i*3] || c >= banda[i*3 + 1])){
					count += banda[i*3 + 2];
				}	
			}
			cout << count << endl;
		}
	}	
	return 0;
}
