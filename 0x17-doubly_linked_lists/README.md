In todays's project we are going to take a look at DOUBLY LINKED LIST.
In doubly linked list it allows traveersal both in forward and backward direction. It is a type of data stracture which contains a data part and two pointers which point to both the next and the previous node.

Doubly linked list are expensive when it comes to space complexity since they occupy 12 bytes compaired to linked list which use 8 bytes. 

This is the typical structure of a doubly linked list:

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
