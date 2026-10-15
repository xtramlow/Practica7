#include<stdio.h>
int main()
{
  if(0)
{
printf("Esta instruccion nunca se ejecuta\n");
prinf("porque la condicion siempre es falsa (0).\n");
}
if(-38) // El bloque de codigo de esta estructura if
// solo consta de una linea porque los comentarios
// no son tomado en cuenta por el compilador.
// La condicion siempre es verdadera (diferente de 0)
printf("Esta instruccion siempre se ejecuta.\n"); 
return 0; 
}
