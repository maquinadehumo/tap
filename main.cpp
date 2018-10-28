#include <iostream>
#include <string>

using namespace std;

class Persona
{
	public: int edad;
	char nombre;
	
	public:
	void setEdad(int edad){
		this->edad = edad;
	}
	
	int getEdad(){
		return this->edad;
	}
	
	void setNombre(char nombre){
		this->nombre = nombre;
	}
	
	char getNombre(){
		return this->nombre;
	}
};

int main(int argc, char** argv) {
	int i;
	Persona p;
	cout << "Por favor inserte un número: " << "\n";
	cin >> i;
	p.setEdad(i);
	cout << "El número ingresado es:"; 
	cout << p.getEdad();
	return 0;
}
