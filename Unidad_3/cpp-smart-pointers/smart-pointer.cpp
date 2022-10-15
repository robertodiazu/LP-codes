#include <iostream>
#include <memory>

using namespace std; 

int main(){
    unique_ptr<int> puntero = make_unique<int>(25);
    cout << puntero << endl;
    return 0;
}