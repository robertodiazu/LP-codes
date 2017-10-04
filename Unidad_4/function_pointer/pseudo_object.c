#include <stdio.h>

typedef struct Objeto{
  int iMember;

  void (*setiMember)(struct Objeto*, int);
  void (*print)(struct Objeto*);

} Objeto;

void _setiMember(Objeto* self, int a){
  self->iMember = a;
}

void _printObjeto(Objeto* self){
  printf("iMember = %d\n",self->iMember);
}

void _initObjeto(Objeto* no){
  no->print = _printObjeto;
  no->setiMember = _setiMember;
}

int main(){
  Objeto o; _initObjeto(&o);
  o.setiMember(&o,3);
  o.print(&o);

  return 0;
}
