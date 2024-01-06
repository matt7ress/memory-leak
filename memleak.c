#include <stdlib.h>
#define DEFAULT(x, v) x?x:v
#define DARRCR(s, t) DEFAULT((t*)calloc(s,sizeof(t)),NULL)
#define DARRCH(p, s, t) DEFAULT((t*)realloc(p,s*sizeof(t)),p)
void memory_leak() {
  int* a;
  while(1) {
    a = DARRCR(32767, int);
    if(a == NULL) break;
  };
};