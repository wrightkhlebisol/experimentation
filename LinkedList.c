#include <stdio.h>
#include <stdlib.h>

struct Node
{
	char *value;
	struct Node *next;
};

struct Node first, last;

int addNode(void)
{
	struct Node node;

	node->value = "Node";
	if (first == NULL)
	{
		first = last = node;
		return (0);
	}

	if (last != NULL)
		last->next = node;

	return (0);
}

int main(void)
{
	addNode();
	return (0);
}
