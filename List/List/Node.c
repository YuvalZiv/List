/*
value - contains the value of the current cell.
next - a pointer to the next node.
previous - a pointer to the previous node.
*/

typedef struct node {
	int value;
	struct node *next;
	struct node *previous;
} node_t;