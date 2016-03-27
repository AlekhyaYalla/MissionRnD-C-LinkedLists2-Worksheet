/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

typedef	struct node {
	int num;
	node *next;
};

int linkedListMedian(struct node *head) {

	if (head == NULL)
		return -1;
	int l = 0, i = 0;
	node *fast, *slow, *curr;
	slow = head;
	fast = head;
	while (fast != '\0'&&fast->next != '\0')
	{
		curr = slow;
		slow = slow->next;
		fast = fast->next->next;
	}
	if (fast == NULL)
		return (curr->num + slow->num) / 2;
	else
		return slow->num;

}