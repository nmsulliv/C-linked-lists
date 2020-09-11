// list/list.c
// 
// Implementation for linked list.
//
// Nicole Sullivan
// nicolesullivanmarie@gmail.com

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

list_t *list_alloc() { 
  list_t *list = (list_t *) malloc(sizeof(list_t));
  list->head = NULL;

  return list;
}

void list_free(list_t *l) {}

void list_print(list_t *l) {
	node_t* temp = l->head;
	while (temp != NULL) {
		printf(" %d ", temp->value);
		temp = temp->next;
	}
  printf("\n");
}

int list_length(list_t *l) { return -1; }

void list_add_to_back(list_t *l, elem value) {
	node_t* current = l->head;
  if (current == NULL) {
    current = (node_t *) malloc(sizeof(node_t));
    current->value = value;
    current->next = NULL;
    l->head = current;
  } else {
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = (node_t *) malloc(sizeof(node_t));
    current->next->value = value;
    current->next->next = NULL;    
  }
}
void list_add_to_front(list_t *l, elem value) {
  node_t* new_node = (node_t *) malloc(sizeof(node_t));
  new_node->value = value;
  new_node->next = l->head;
  l->head = new_node;  
}
void list_add_at_index(list_t *l, elem value, int index) {}

elem list_remove_from_back(list_t *l) { return -1; }
elem list_remove_from_front(list_t *l) { return -1; }
elem list_remove_at_index(list_t *l, int index) { return -1; }

bool list_is_in(list_t *l, elem value) { return false; }
elem list_get_elem_at(list_t *l, int index) { return -1; }
int list_get_index_of(list_t *l, elem value) { return -1; }