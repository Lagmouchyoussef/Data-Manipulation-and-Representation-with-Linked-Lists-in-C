# Linked-List-Exercises-Bus-Stations-Sorted-Integers-and
Exercise 1

Representation of Casablanca Bus Stations Using a Singly Linked List

In this exercise, we propose to represent the bus stations of the city of Casablanca using a singly linked list. A bus station is characterized by the following information:

Station Number: A unique identifier for each station.

Station Name: The name of the station, such as "Maarif", "Hay Salam", "Oulfa".

Number of Buses: The number of buses that pass through this station.

The linked list allows storing this information linearly, where each element of the list contains the data of a station and a pointer to the next element. The last element of the list points to NULL, indicating the end of the list.

Example

Here is an example of a linked list representing several bus stations in Casablanca:

Station 1: Maarif (Number 1, Number of buses: 2)

Station 2: Hay Salam (Number 2, Number of buses: 4)

Station 3: Oulfa (Number 3, Number of buses: 5)

In this example, each bus station is an element of the list. For instance, the station "Maarif" points to the next station "Hay Salam", which in turn points to the station "Oulfa". The station "Oulfa" is the last element of the list and points to NULL, indicating the end of the list.

Define the structure of the linked list.

Write a function for input.

Write a function for display.

Write a function to add a station at the end.

Write a function to delete the last station from the list.

Document 2:
Linked List:

Build the list from external data
Develop a module that builds the linked list from n integer data read from user input.

Display the elements of the list
Develop a module that displays all the elements present in the linked list.

Calculate the length of the list
Develop a module that calculates and returns the number of elements present in the linked list.

Sort the list in ascending order
Develop a module that sorts the elements of the linked list in ascending order.

Search for a value
Develop a module that searches for a node containing the value v in the list. The module should return the found node or an indicator if the value is not present.

Search by position
Develop a module that searches and returns the node at position K in the list. If the position is out of bounds, the module should return an error message.

Insert a value
Develop a module that allows inserting a new value v at the end of the linked list.

Insert at a given position
Develop a module that allows inserting a value v at a specific position K in the linked list. If the position is out of bounds, an error message should be returned.

Delete a value
Develop a module that allows deleting the first node containing the value v from the linked list. If the value is not found, return an error message.

Delete all occurrences of a value
Develop a module that deletes all nodes containing the value v in the linked list.

Delete a node by position
Develop a module that allows deleting the node at position pos in the linked list. If the position is invalid, return an error message.

Destroy the list
Exercise 2:

Representation of Large Numbers Using Linked Lists

In this exercise, we will use linked lists to represent large positive integers or zero. To optimize the representation of a number, we propose to decompose it into several parts. Each part can contain up to 4 digits.

Let N be a positive integer or zero with NC digits.
N = CNC-1 CNC-2 ... C1 C0, where C0 is the units digit, C1 is the tens digit, etc.
Then, N will be decomposed as follows:

N = CNC-1 CNC-2 CNC-3 CNC-4 | CNC-5 CNC-6 CNC-7 CNC-8 | ... | C1 C0
1st part 2nd part ... Last part

Example: The number N = 8002590300407896420003 can be decomposed as follows:

N = 8002 | 5903 | 0040 | 7896 | 4200 | 03
1st part 2nd part 3rd part 4th part 5th part 6th part

To represent a number decomposed in this way, we will use a linked list of type ListeNombres defined in C as follows:

typedef struct Liste {
    short int partie;
    struct Liste *suiv;
} ListeNombres;
Each part of the number is an element of the linked list containing the value of the part and the address of the next part. The number N = CNC-1 CNC-2 ... C1 C0 will be represented by a linked list of type ListeNombres as follows:

P
CNC-1 CNC-2 CNC-3 CNC-4 -> CNC-5 CNC-6 CNC-7 CNC-8 -> ... -> C1 C0 -> NULL
Example: The number 8002590300407896420003 can be decomposed as follows:

N = 8002  (1st part)

5903
2nd part

40
3rd part

7896
4th part

4200
5th part

3
6th part

and will be represented by a linked list of type ListeNombres as follows:

P
8002
suiv

5903
suiv

40
suiv

7896
suiv

4200
suiv

3
NULL

✧ Creation of a linked list of parts of a number

Let a positive integer or zero be defined by a ChaineChiffres S (containing only digit characters: '0','1', '2',...,'9'). We propose to represent it by a linked list of type ListeNombres. To do this:

Write a function with the prototype: ListeNombres *regrouperChiffres(char *S); that creates a new linked list of type ListeNombres to represent the number defined by the ChaineChiffres S (parameter). This function returns the address of the first element of the created list.

Example: Let the number 330104660000027 be represented by the ChaineChiffres S = "330104660000027".

Calling the function regrouperChiffres(S) will return the address of the first element p of the created list as follows:

P
3301
suiv

466
suiv

0
suiv

27
NULL

Plan
