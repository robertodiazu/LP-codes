#include <iostream>
using namespace std;

class Figura {
   protected:
    double x, y;

   public:
    virtual ~Figura(){};
    virtual void rotar(int g){
        cout << "Rotando figura a " << g << " grados" << endl;
        cout << x << y << endl;
    };
    virtual void dibujar(void){};
};

class Circulo : public Figura {
   protected:
    double radio;

   public:
    Circulo(int x, int y, double radio) {
        this->x = x;
        this->y = y;
        this->radio = radio;
    }

    ~Circulo() {}

    void dibujar() { 
        cout << "Dibujando circulo: O" << endl; 
    }
};

class Cuadrado : public Figura {
   protected:
    double lado;
    int rotacion;

   public:
    Cuadrado(int x, int y, double lado) {
        this->rotacion = 0;
        this->x = x;
        this->y = y;
        this->lado = lado;
    }

    ~Cuadrado() {}

    void rotar(int g) {
        cout << "Rotando cuadrado " << g << " grados" << endl;
        rotacion = g; 
    }

    void dibujar() {
        if (rotacion % 90 == 0)
            cout << "Dibujando cuadrado: []" << endl;
        else
            cout << "Dibujando cuadrado: <>" << endl;
    }
};

int main() {
    int i;
    Circulo c(0, 0, 2.0);
    Figura f1;

    Figura *f;
    // f = new Figura(); //error

    f = new Circulo(0, 0, 1.0);
    f->rotar(45);
    f->dibujar();
    delete f;

    f = new Cuadrado(0, 0, 1.0);
    f->rotar(45);
    f->dibujar();
    delete f;

    return 0;
}
