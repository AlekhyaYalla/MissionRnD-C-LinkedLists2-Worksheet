/*
OVERVIEW: Merge two sorted linked lists.
E.g.: 1->3->5 and 2->4, output is 1->2->3->4->5.

INPUTS: Two sorted linked lists.

OUTPUT: Return merged sorted linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

typedef	struct node {
	int num;
	node *next;
};

node * merge2LinkedLists(node *head1, node *head2) {
	
	if (head1 == '\0'&&head2 == '\0')
		return NULL;
	if (head1 == '\0')
		return head2;
	node *curr1, *curr2, *curr, *t;
	curr1 = head1;
	curr2 = head2;
	t = head2;
	while (curr1 != '\0'&&curr2 != '\0')
	{
		while (curr1->num<curr2->num&&curr1->next != '\0')
		{
			curr = curr1;
			curr1 = curr1->next;
		}
		if (curr1->num >= curr2->num)
		{
			if (curr1 == head1)
				head1 = curr2;
			else
				curr->next = curr2;
			t = curr2->next;
			curr2->next = curr1;
			curr = curr2;
		}
		else if (curr1->next == '\0')
		{
			curr1->next = curr2;
			return head1;
		}
		curr2 = t;
	}
	return head1;
}
