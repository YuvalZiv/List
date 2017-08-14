// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <stdlib.h>
#include "stdafx.h"
#include "Functions.h"


int _tmain(int argc, _TCHAR* argv[]) {
	list_t* list = create_list();
	add_node(list, 4);
	add_node(list, 9);
	add_node(list, 2);
	remove_node(list, list->first);
	add_node(list, 4);
	printf("First value: %d\n", get_value(list->first));
	printf("Length: %d\n", get_length(list));
	printf("Average: %.2f\n", average(list));
	destroy_list(list);
	return 0;
}

