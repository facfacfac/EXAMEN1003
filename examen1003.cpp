#include <iostream>
#include <vector>

using namespace std;

class Persona {
private:
string nombre;
string DNI;
int edad;
public:
  // Constructor.
  Persona (string nombre, string DNI, int edad = 18) {
    setNombre(nombre);
    setDNI(DNI);
    setEdad(edad);
  }
  // Setters and getters
  void setNombre(string nombre) {
    this->nombre = nombre;
  }
  string getNombre() {
    return this->nombre;
  }
  void setDNI(string DNI) {
    this->DNI = DNI;
  }
  string getDNI() {
    return this->DNI;
  }
  void setEdad(int edad) {
    this->edad = edad;
  }
  int getEdad() {
    return this->edad;
  }
  // Imprimir
  void imprimir() {
    cout << "El nombre de la persona es " << this->nombre << ", su DNI es " << this->DNI << " y su edad es " << this->edad << " años." << endl;
  }

};


int main(){
  Persona fulanito("Fulano","44844848A", 30);
  fulanito.imprimir();



  return 0;
}
