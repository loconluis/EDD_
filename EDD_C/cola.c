/*EDD 
  LUIS ALFREDO LOCON PEÑA
  */

#include <stdio.h>
#include <stdlib.h>

typedef struct Elemento{
  int dato;
  struct Elemento *sig;
}Elemento;

Elemento *primero;
Elemento *ultimo;

/*Metodo de agregar elemento a la cola*/
void push(Elemento* _elemento){
    _elemento->sig = NULL;
    //Comprobar si la cola esta vacia
    if(primer == NULL){
        primero = _elemento;
        ultimo = _elemento;
    }else{
        ultimo->sig = _elemento;
        ultimo = _elemento;
    }
}

/*Metodo de eliminar elemento a la cola*/
Elemento* pop(){
    if(primero == NULL){
        return NULL;
    }
    
    Elemento* aux = primero;
    primero = primero->sig;
    return aux;
}

int main(){

    return 0;
}