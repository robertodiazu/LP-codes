#include <iostream>
using namespace std;

class Figura {
protected:
  double x,y;

public:
  virtual void rotar(int) = 0;
  virtual void dibujar(void) = 0;
};

class Circulo {
protected:
  double radio;

public:
  Circulo(int x, int y, double radio){
    this->x = x;
    this->y = y;
    this->radio = radio;
  }

  void rotar(int g) {
    //Rotar un circulo no hace nada
  }

  void dibujar(){
    cout << "Dibujando circulo: O" << endl;
  }

};

class Cuadrado {
protected:
  double lado;
  int rotacion;

public:
  Circulo(int x, int y, double lado){
    this->rotacion = 0;
    this->x = x;
    this->y = y;
    this->lado = lado;
  }

  void rotar(int g) {
    cout << "Rotando cuadrado " << g << " grados" << endl;
    rotacion = g;
  }

  void dibujar(){
    cout << "Dibujando cuadrado: []" << endl;
  }

};

int main(){
  Figura *f;
  //f = new Figura(); //error

  f = new Circulo(0,0,1.0);
  f.rotar(30);
  f.dibujar();
  delete f;

  f = new Cuadrado(0,0,1.0);
  f.rotar(45);
  f.dibujar();
  delete f;

  return 0;
}
