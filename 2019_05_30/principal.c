#include <stdio.h>
#include "entero.h"

int main(int argc, char** argv) {
  entero a,b;

  a = 7;
  b = 3;
  printf("la division de %d / %d es %f\n",a,b,division(a,b));
}

