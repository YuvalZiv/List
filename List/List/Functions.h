#include "List.c"

list_t* create_list(void);
void destroy_list(list_t* list);
void add_node(list_t* list, int value);
void remove_node(list_t* list, node_t* node);
int get_length(list_t* list);
node_t* get_first(list_t* list);
node_t* get_last(list_t* list);
node_t* get_next(node_t* node);
node_t* get_previous(node_t* node);
int get_value(node_t* node);
float average(list_t* list);