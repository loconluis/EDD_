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

int aux;
Elemento *cola();
void push(int dato);
int pop(void);
void printStack(Elemento *);
void verPrimero();


/*Aparta la memoria de un nuevo elemento*/
Elemento *cola(){
  Elemento *e = (Elemento *)malloc(sizeof(Elemento));
  if (e==NULL){
    printf("Falta Memoria");
    exit(0);
  }
  return e;
}