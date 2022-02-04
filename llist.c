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
				char *s = argv[i + 1];
				int num = atoi(s);

				struct node *head = NULL;
    			struct node *n = node_alloc(10);
    			llist_insert_head(&head, n);
			}
			else if (strcmp(argv[i],"it") == 0) {
				char *s = argv[i + 1];
				int num = atoi(s);
				struct node *head = NULL;
    			struct node *n = node_alloc(10);
				llist_insert_tail(&head, n);
			}

			else if (strcmp(argv[i],"dh") == 0) {
				llist_delete_head();
				printf("%s\n", "dh" );
			}

			else if (strcmp(argv[i],"f") == 0) {
				llist_free();
				printf("%s\n", "f" );
			}

			else if (strcmp(argv[i],"p") == 0) {
				llist_print();
				printf("%s\n", "p" );
			}
		}
	}
}


void llist_insert_head(struct node **head, struct node *n) {

}

void llist_insert_tail(struct node **head, struct node *n) {

}

struct node *llist_delete_head(struct node **head) {

}

void llist_print(struct node *head) {

}

void llist_free(struct node **head){

}

struct node *node_alloc(int value) {

}

void node_free(struct node *n) {

}
