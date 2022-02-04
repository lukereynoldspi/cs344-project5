// Luke Reynolds
#include "llist.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc < 2){
		perror("Not enough arguments");
	}
	else {
		for (int i = 0; i < argc; ++i) {
			if (strcmp(argv[i],"ih") == 0) {
				printf("%s\n", "ih" ); 
				char *s = argv[i + 1];
				int num = atoi(s);
				printf("%d\n", num);
			}
			else if (strcmp(argv[i],"it") == 0) {
				printf("%s\n", "it" );
				char *s = argv[i + 1];
				int num = atoi(s);					
				printf("%d\n", num);
			}

			else if (strcmp(argv[i],"dh") == 0) {
				//llist_delete_head();
				printf("%s\n", "dh" );
			}

			else if (strcmp(argv[i],"f") == 0) {
				//llist_free();
				printf("%s\n", "f" );
			}

			else if (strcmp(argv[i],"p") == 0) {
				//llist_print();
				printf("%s\n", "p" );
			}
		}
	}
}

/*
int llist_insert_head(){

}
int llist_insert_tail(){

}
void llist_delete_head(){

}
void llist_free(){

}
void llist_print(){

}

int node_alloc(){

}

void node_free(){

}
*/