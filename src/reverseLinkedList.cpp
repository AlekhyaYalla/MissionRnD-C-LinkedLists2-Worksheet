/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<stdlib.h>

struct node {
	int num;
	struct node *next;
};

struct node * reverseLinkedList(struct node *head) {
	
	node *last, *curr, *temp;
	int i;
	if (head == NULL)
		return NULL;
	curr = (node*)malloc(sizeof(node));
	temp = (node*)malloc(sizeof(node));
	last = (node*)malloc(sizeof(node));
	curr = head;
	while (curr->next != '\0')
		curr = curr->next;
	last = curr;
	while (head->next != '\0')
	{
		temp = head;
		for (i = 0; temp->next != '\0'; i++)
		{
			curr = temp;
			temp = temp->next;
		}
		temp->next = curr;
		curr->next = '\0';
	}
	return last;
}
