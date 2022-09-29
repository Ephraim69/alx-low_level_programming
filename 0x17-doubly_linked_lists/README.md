# 0x17-doubly_linked_lists
## 0-print_dlistint.c
### Write a function that prints all the elements of a dlistint_t list.
    * Prototype: size_t print_dlistint(const dlistint_t *h);
    * Return: the number of nodes

## 1-dlistint_len.c
### Write a function that prints all the elements of a dlistint_t list.
    * Prototype: size_t print_dlistint(const dlistint_t *h);
    * Return: the number of nodes
    * Format: see example

## 2-add_dnodeint.c
### Write a function that adds a new node at the beginning of a dlistint_t list.
    * Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
    * Return: the address of the new element, or NULL if it failed

## 3-add_dnodeint_end.c
### Write a function that adds a new node at the end of a dlistint_t list.
    * Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
    * Return: the address of the new element, or NULL if it failed

## 4-free_dlistint.c
### Write a function that frees a dlistint_t list.
* Prototype: void free_dlistint(dlistint_t *head);

## 5-get_dnodeint.c
### Write a function that returns the nth node of a dlistint_t linked list.
    * Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
    * where index is the index of the node, starting from 0
    * if the node does not exist, return NULL
