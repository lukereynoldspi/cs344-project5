// Luke Reynolds
#include <llist.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	if argc < 2:
		perror("Not enough arguments");
	else
		for (int i = 0; i < argc; ++i):
			if (strcmp(argv[i],"ih") == 0):
				llist_insert_head();
			else if (strcmp(argv[i],"it") == 0):
				llist_insert_tail();
			else if (strcmp(argv[i],"dh") == 0):
				llist_delete_head();
			else if (strcmp(argv[i],"f") == 0):
				llist_free();
			else if (strcmp(argv[i],"p") == 0):
				llist_print();

}