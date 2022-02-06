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

		struct node *head = NULL;

		for (int i = 0; i < argc; ++i) {

			if (strcmp(argv[i],"ih") == 0) {
				char *s = argv[i + 1];
				int num = atoi(s);

    			struct node *n = node_alloc(num);
    			llist_insert_head(&head, n);
			}

			else if (strcmp(argv[i],"it") == 0) {
				char *s = argv[i + 1];
				int num = atoi(s);

    			struct node *n = node_alloc(num);
				llist_insert_tail(&head, n);
			}

			else if (strcmp(argv[i],"dh") == 0) {
				llist_delete_head(&head);
			}

			else if (strcmp(argv[i],"f") == 0) {
				llist_free(&head);
				printf("%s\n", "f" );
			}
			
			else if (strcmp(argv[i],"p") == 0) {
				llist_print(head);
			}
		}
	}

	return 0;
}


void llist_insert_head(struct node **head, struct node *n) {
	n->next = *head;
	*head = n;
}

void llist_insert_tail(struct node **head, struct node *n) {

	struct node *temp = *head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	
	temp->next = n;
	n->next = NULL;
}

struct node *llist_delete_head(struct node **head) {
	if (*head != NULL) {
		struct node *temp = *head;
		*head = temp->next;
	}
}

void llist_print(struct node *head) {

	printf("\n");
	if (head == NULL) {
		printf("[empty]");
	}
	while (head)
    {
		if (head->next != NULL) {
			printf("%d -> ", head->value);
		}
		else {
			printf("%d", head->value);
		}
        head = head->next;
    }
	printf("\n");
}

void llist_free(struct node **head){
	while (head){
		free(*head);
	}
}

struct node *node_alloc(int value) {
	
	struct node *node = malloc(sizeof(struct node));
    node->value = value;
    node->next = NULL;
	return node;

}

void node_free(struct node *n) {
	free(n);
}
