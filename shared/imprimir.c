#include "imprimir.h"

void imprimir(void* args) {
  char* algo = (char*) args;
  for (int i = 0; i < 10; i++) {
    printf("%s\n", algo);
    sleep(1);
  }
}