/*EDD 
  LUIS ALFREDO LOCON PEÑA
  */

#include <stdio.h>
#include <stdlib.h>

typedef struct Elemento{
  int dato;
  struct Elemento *sig;
}Elemento;

Elemento *ultimo;

int aux;
Elemento *pila();
void push(int dato);
int pop(void);
void printStack(Elemento *);
void verPrimero();

/****************************************************/
int main(){
  char m;
  int k;
  puts("Elige que tipo de accion quieres realizar: (Utiliza letra mayuscula)");
  while (1) {
    printf("[A] Agregar Elemento \n");
    printf("[B] Eliminar Elemento \n");
    printf("[C] Ver Primer Elemento \n");
    printf("[D] Imprimir Pila \n");
    printf("[E] Salir \n");
    m=getchar();
    getchar();
    switch (m) {
      case 'A': printf("Ingresa un numero: "); scanf("%d", &k); getchar(); push(k); break;
      case 'B': pop(); printf("se elimino el ultimo en ingresar\n"); break;
      case 'C': verPrimero(); break;
      case 'D': printStack(ultimo); break;
      case 'E': exit(0);
      default: puts("\n Saliendo...");
      return 0;
    }
  }
}


/*Aparta la memoria de un nuevo elemento*/
Elemento *pila(){
  Elemento *e = (Elemento *)malloc(sizeof(Elemento));
  if (e==NULL){
    printf("Falta Memoria");
    exit(0);
  }
  return e;
}

/*Metodo agregar o push*/
void push(int dato){
  Elemento *e = pila();
  e-> sig = ultimo;
  e-> dato = dato;
  ultimo = e;

  printf("\n");
}

/*Metodo eliminar o desecho (pop)*/
int pop(void){
  Elemento *e;
  int x;
  if(ultimo==NULL){
    puts("La pila esta vacia");
    return EOF;
  }else{
    x = ultimo->dato;
    e = ultimo;
    ultimo= ultimo->sig;
    free(e);

    return x;
  }
  printf("\n");
}

/*Imprime la pila completa*/
void printStack(Elemento *ultimo){
  printf("Los datos en la pila son:\n");
  while (ultimo!=NULL) {
    printf("%d \n", ultimo->dato);
    ultimo = ultimo->sig;
  }
  printf("\n");
}

/*Metodo para ver el primero nodo de la lista (en este caso el primero de la pila)*/
void verPrimero(){
  Elemento *f;
  f = ultimo;
  while (f!=NULL) {
    //printf("%d \n ", ultimo->dato);
    aux= f->dato;
    f = f->sig;
  }
  printf("el primero elemento de la pila es: \n %d", aux);
  printf("\n");

}
