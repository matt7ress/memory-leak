#include "memleak.c"
#include <stdio.h>
int main() {
  while(1) { memory_leak(); }
}