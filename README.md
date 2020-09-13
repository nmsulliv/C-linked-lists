# Linked Lists in C
Created my first C program for Lab 1 of Operating Systems.

## Here is the output of my test cases!
Tests for linked list implementation
---list_add_to_back test---
Adding 1, 2, 3 to the back
 1  2  3 

---list_add_to_front test---
Adding 4 to the front
 4  1  2  3 

---list_add_at_index test---
Adding 10 to index 0
 10  4  1  2  3 
Adding 20 to index 4
 10  4  1  2  20  3 
Adding 30 to index 10
 10  4  1  2  20  3  30 
Adding 40 to index 1
 10  40  4  1  2  20  3  30 

---list_get_elem_at test---
 10  40  4  1  2  20  3  30 
The element at index 0 is 10 
The element at index 7 is 30 
The element at index 2 is 4 

---list_get_index_of test---
 10  40  4  1  2  20  3  30 
The index of 30 is 7 
The index of 10 is 0 
The index of 4 is 2 

---list_is_in test---
 10  40  4  1  2  20  3  30 
Return 1 if 30 is in the list: 1 
Return 1 if 10 is in the list: 1 
Return 1 if 3 is in the list: 1 
Return 1 if 500 is in the list: 0 

---list_remove_from_front test---
 10  40  4  1  2  20  3  30 
Removing from front
 40  4  1  2  20  3  30 

---list_remove_from_back test---
 40  4  1  2  20  3  30 
Removing from back
 40  4  1  2  20  3 
Removing from back
 40  4  1  2  20 

---list_remove_at_index test---
 40  4  1  2  20 
Removing 40 from index 0
 4  1  2  20 
Removing 20 from index 4
 4  1  2 
Removing 1 from index 1
 4  2 
Removing from index 0
 2 
Removing from index 0


---operations on empty list tests---
List: 
Removing from index 0
Removing from back
Removing from front
Removing from index 0
Removing from index 0
List: 
The element at index 0 is -1 
Return 1 if 0 is in the list: 0 
The index of 0 is -1 

Freeing list.
