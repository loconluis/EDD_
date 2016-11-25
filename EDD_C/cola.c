/*EDD 
  LUIS ALFREDO LOCON PEÑA
  */

#include <stdio.h>
#include <stdlib.h>

/*Estructura del nodo*/
typedef struct Elemento{
  int dato;
  struct Elemento *sig;
}Elemento;

/*Declaraciones de Apuntadores*/
Elemento *primero;
Elemento *ultimo;

int main(){

    return 0;
}


/*Aparta la memoria de un nuevo elemento*/
Elemento *Cola(){
  Elemento *e = (Elemento *)malloc(sizeof(Elemento));
  if (e==NULL){
    printf("Falta Memoria");
    exit(0);
  }
  return e;
}

/*Metodo de agregar elemento a la cola*/
void push(int dato){
    Elemento *e = Cola();
    e->sig = NULL;
    //Comprobar si la cola esta vacia
    if(primero == NULL){
        primero = e;
        ultimo = e;
    }else{
        ultimo->sig = e;
        ultimo = e;
    }
}

/*Metodo de eliminar elemento a la cola*/
int pop(void){
    Elemento *aux;
    int x;
    if(primero == NULL){
        puts("La cola esta vacia");
        return EOF;
    }else{
        x = primero->dato;
        aux = primero;
        primero = primero->sig;
        free(aux);
        return x;
    }
    printf("\n");
}

/*Imprimir la Cola*/
void printQueu(Elemento *primero){
    printf("Los datos de la Cola son:\n");
    while(primero!=NULL){
        printf("%d \n", primero->dato);
        primero=primero->sig;
    }
    printf("\n");
}

/*Ver la cabeza de la Cola*/
void verCabeza(){
    int i;
    Elemento *cabeza;
    cabeza = primero;
    while(f!=NULL){
        i = cabeza->dato;
    }
    printf("La cabeza de la cola es: \n %d", i);
    printf("\n");
}