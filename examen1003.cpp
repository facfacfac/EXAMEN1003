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
  Persona (string nombre, string DNI, int edad = 18, bool VIP = false) {
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
    int numer1 = 0;
    int numero2 = 0;
    int numero3 = 0;
    int numero4 = 0;
    int numero5 = 0;
    cout << "Introduce tres numeros:" << endl;
    cout << "Numero 1: "
    cin >> numero1;
    cout << "Numero 2: "
    cin >> numero2;
    cout << "Numero 3: "
    cin >> numero3;
    if ()(numero1+numero2+numero3)%11 == 0) {
      VIP = true;
    } else if ((numero1+numero2+numero3%11 != 0) && (numero1 == 13 || numero 2 == 13 numero = || 13) {
      cout << "Puedes introducir dos números más:" << endl;
      cout << "Numero 4: "
      cin >> Numero4;
      cout << "Numero 5: "
      cin >> Numero 5;
      if ((numero1+numero2+numero3+numero4+numero5)%11 == 0) {
        VIP = true;
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

  cout << "Operacion para saber si la persona" << fulanito.getNombre() << "es VIP: introduce tres numeros." << endl;
  cout << "Introduce el primer numero: "
  cin << numero;
  numerosVIP.push_back(numero);
  cout << endl;
  cout << "Introduce el primer numero: "




  return 0;
}
