# Linked Lists in C
Created my first C program for Lab 1 of Operating Systems.

## Here are my test cases!
Tests for linked list implementation

---list_add_to_back test---<br/>
Adding 1, 2, 3 to the back<br/>
1  2  3<br/><br/>


---list_add_to_front test---<br/>
Adding 4 to the front<br/>
4  1  2  3<br/><br/>


---list_add_at_index test---<br/>
Adding 10 to index 0<br/>
10  4  1  2  3 
Adding 20 to index 4<br/>
10  4  1  2  20  3 <br/>
Adding 30 to index 10<br/>
10  4  1  2  20  3  30 <br/>
Adding 40 to index 1<br/>
10  40  4  1  2  20  3  30<br/><br/>



---list_get_elem_at test---<br/>
10  40  4  1  2  20  3  30 <br/>
The element at index 0 is 10 <br/>
The element at index 7 is 30 <br/>
The element at index 2 is 4 <br/><br/>


---list_get_index_of test---<br/>
10  40  4  1  2  20  3  30 <br/>
The index of 30 is 7 <br/>
The index of 10 is 0 <br/>
The index of 4 is 2<br/><br/>

---list_is_in test---<br/>
10  40  4  1  2  20  3  30 <br/>
Return 1 if 30 is in the list: 1 <br/>
Return 1 if 10 is in the list: 1 <br/>
Return 1 if 3 is in the list: 1 <br/>
Return 1 if 500 is in the list: 0 <br/><br/>

---list_remove_from_front test---<br/>
10  40  4  1  2  20  3  30 <br/>
Removing from front<br/>
40  4  1  2  20  3  30 <br/><br/>

---list_remove_from_back test---<br/>
40  4  1  2  20  3  30 <br/>
Removing from back<br/>
40  4  1  2  20  3 <br/>
Removing from back<br/>
40  4  1  2  20 <br/><br/>

---list_remove_at_index test---<br/>
40  4  1  2  20 <br/>
Removing 40 from index 0<br/>
4  1  2  20 <br/>
Removing 20 from index 4<br/>
4  1  2<br/>
Removing 1 from index 1<br/>
4  2 <br/>
Removing from index 0<br/>
2<br/>
Removing from index 0<br/><br/>


---operations on empty list tests---<br/>
List:<br/>
Removing from index 0<br/>
Removing from back<br/>
Removing from front<br/>
Removing from index 0<br/>
Removing from index 0<br/>
List: <br/>
The element at index 0 is -1 <br/>
Return 1 if 0 is in the list: 0 <br/>
The index of 0 is -1 <br/><br/>

Freeing list. <br/><br/>
