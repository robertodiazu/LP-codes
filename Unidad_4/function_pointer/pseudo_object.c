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

Objeto newObjeto(){
  Objeto no;
  no.iMember = 0;
  no.print = _printObjeto;
  no.setiMember = _setiMember;
  return no;
}

int main(){
  Objeto o = newObjeto(&o);
  o.setiMember(&o,3);
  o.print(&o);

  return 0;
}
