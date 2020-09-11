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
  node_t *node = (node_t *) malloc(sizeof(node_t));
  list->head = node;

  return list;
}

void list_free(list_t *l) {}

void list_print(list_t *l) {
	node_t* temp = l->head;
	while (temp != NULL) {
		printf(" %d ", temp->value);
		temp = temp->next;
	}
}

int list_length(list_t *l) { return -1; }

void list_add_to_back(list_t *l, elem value) {
	node_t* current = l->head;
	while (current != NULL) {
		current = current->next;
	}
	current->next->value = value;
}
void list_add_to_front(list_t *l, elem value) {}
void list_add_at_index(list_t *l, elem value, int index) {}

elem list_remove_from_back(list_t *l) { return -1; }
elem list_remove_from_front(list_t *l) { return -1; }
elem list_remove_at_index(list_t *l, int index) { return -1; }

bool list_is_in(list_t *l, elem value) { return false; }
elem list_get_elem_at(list_t *l, int index) { return -1; }
int list_get_index_of(list_t *l, elem value) { return -1; }