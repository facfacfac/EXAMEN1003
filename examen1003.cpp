#include <iostream>
#include <vector>

using namespace std;

class Persona {
private:
string nombre;
string DNI;
int edad;
bool VIP;


public:
  // Constructor.
  Persona (string nombre, string DNI, int edad = 18) {
    setNombre(nombre);
    setDNI(DNI);
    setEdad(edad);
    calcularVIP();
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
    cout << "El nombre de la persona es " << this->nombre << ", su DNI es " << this->DNI << " y su edad es " << this->edad << " años." << " La persona es VIP: " << this->VIP << endl;
  }
  // Métodos varios.
  bool mayorEdad(){
    return this->edad>=18;
  }
  calcularVIP() {
    bool VIP = false;
    int numero1 = 0;
    int numero2 = 0;
    int numero3 = 0;
    int numero4 = 0;
    int numero5 = 0;
    cout << "Introduce tres numeros: " << endl;
    cout << "numero1:" << endl;
    cin >> numero1;
    cout << "numero2:" << endl;
    cin >> numero2;
    cout << "numero3:" << endl;
    cin >> numero3;

    if ((numero1+numero2+numero3)%11 == 0) {
      VIP = true;
    } else {
      if (numero1 == 13 || numero2 == 13 || numero3 == 13) {
        cout << "Introduce dos numeros más:" << endl;
        cout << "Numero4:" << endl;
        cin >> numero4;
        cout << "Numero5" << endl;
        cin >> numero5;
        if ((numero1+numero2+numero3+numero4+numero5)%11 == 0) VIP = true;
      }
    }
  }
};


int main(){
  Persona fulanito("Fulano","44844848A", 30);
  fulanito.imprimir();
  int numero;
  vector<int> numerosVIP;

  cout << "La persona " << fulanito.getNombre() << "es mayor de edad: " << fulanito.mayorEdad() << endl;




  return 0;
}
