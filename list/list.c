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

void list_free(list_t *l) {
	node_t* current = l->head;
	node_t* next = NULL;
	while (current != NULL) {
		next = current->next;
    free(current);
    current = next;
	}
  free(l);
}

void list_print(list_t *l) {
	node_t* temp = l->head;
	while (temp != NULL) {
		printf(" %d ", temp->value);
		temp = temp->next;
	}
  printf("\n");
}

int list_length(list_t *l) { 
	node_t* temp = l->head;
  int count = 0;
	while (temp != NULL) {
		temp = temp->next;
    count++;
	}
  return count;
}

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
void list_add_at_index(list_t *l, elem value, int index) {
  node_t* current = l->head;
  int length = list_length(l);
  if ((current == NULL) || (index <= 0)) {
    list_add_to_front(l, value);
  } else if (index > length) {
    list_add_to_back(l, value);
  } else {
    int current_index = 1;
    while (current_index < index) {
      current = current->next;
      current_index++;
    }
    node_t* new_node = (node_t *) malloc(sizeof(node_t));
    new_node->value = value;
    new_node->next = current->next;
    current->next = new_node;
  }
}

elem list_remove_from_back(list_t *l) {
  int length = list_length(l);
  node_t* current = l->head;

  if (length == 0) {
    return 0;
  } else if (length == 1) {
    elem value = current->value;
    free(current);
    l->head = NULL;
    return value;
  } else {
    while (current->next->next != NULL) {
      current = current->next;
    }
    elem value = current->next->value;
    free(current->next);
    current->next = NULL;
    return value;   
  }
  return -1;
}
elem list_remove_from_front(list_t *l) { 
  int length = list_length(l);
  node_t* head = l->head;

  if (length == 0) {
    return 0;
  } else if (length == 1) {
    elem value = head->value;
    free(head);
    l->head = NULL;
    return value;
  } else {
    node_t* next = head->next;
    elem value = head->value;
    free(head);
    l->head = next;
    return value;
  }
  return -1;
}
elem list_remove_at_index(list_t *l, int index) {
  int length = list_length(l);
  node_t* current = l->head;
  if (index <= 0) {
    elem value = list_remove_from_front(l);
    return value;
  } else if (index >= (length - 1)) {
    elem value = list_remove_from_back(l);
    return value;
  } else {
    int current_index = 1;
    while (current_index < index) {
      current = current->next;
      current_index++;
    }
    node_t* next = current->next->next;
    elem value = current->next->value;
    free(current->next);
    current->next = next;
    return value;  
  }
  return -1;
}

bool list_is_in(list_t *l, elem value) {
	node_t* current = l->head;
	while (current != NULL) {
    if (current->value == value) {
      return true;
    }
		current = current->next;
	}
  return false;
}
elem list_get_elem_at(list_t *l, int index) {
  if (list_length(l) == 0) {
    return -1;
  }
  node_t* current = l->head;
  int current_index = 0;
  while (current_index < index) {
    current = current->next;
    current_index++;
  }
  elem value = current->value;
  return value;
}
int list_get_index_of(list_t *l, elem value) { 
	node_t* current = l->head;
  int count = 0;
	while (current != NULL) {
    if (current->value == value) {
      return count;
    } else {
      current = current->next;
      count++;
    }
	}
  return -1;
}
