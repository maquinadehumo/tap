#include <iostream>
#include <string>

using namespace std;

int main (){
	string s;
	bool r;
	while(cin >> s){
	r = true;
	bool r = s.find('i') != string::npos || s.find('I') != string::npos;
	if (!r)
		cout << 'S' << endl;
	else
		cout << 'N' << endl;
	}

	return 0;
}
