/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * insertAtEveryKthNode(struct node *head, int K) {
	
	int i, l = 0;
	if (head == NULL)
		return NULL;
	node *curr, *curr1, *temp;
	curr = head;
	curr1 = head;
	while (curr != '\0')
	{
		i = 0;
		while (i<K&&curr != '\0')
		{
			curr1 = curr;
			curr = curr1->next;
			i++;
			l++;
		}
		if (i == K)
		{
			temp = (node*)malloc(sizeof(node));
			temp->num = K;
			curr1->next = temp;
			temp->next = curr;
		}
		if (curr == '\0' || l<K)
			return head;

	}
	return head;
}
