#include <stdio.h>

#include "list.h"

int main() {
  printf("Tests for linked list implementation\n");
	
	list_t *mylist = list_alloc();
  list_print(mylist);

  return 0;
}