#include <stdio.h>
#include <stdlib.h>

// create a single node of linked list
struct node
{
	int data;
	struct node *next;
};

// create the first node
struct node *head;

/* memory allocation for each node */
struct node *createNode(int item)
{
	// allocate memory using malloc()
	struct node *new_node = (struct node *)malloc(sizeof(struct node));

	// store data to node
	new_node->data = item;

	// address of node holds NULL
	new_node->next = NULL;

	return new_node;
}

/* insertion at the front of list */
void insertFront(int item)
{
	// there is no node
	if (head == NULL)
	{
		// create and allocate new node and make it head
		head = createNode(item);
		return;
	}

	// create and allocate new node
	struct node *temp = createNode(item);

	// make the new node as head
	temp->next = head;
	head = temp;
}

/* insertion at the end of list */
void insertEnd(int item)
{
	// there is no node
	if (head == NULL)
	{
		// create and allocate new node and make it head
		head = createNode(item);
		return;
	}

	// create a temp node and it holds head
	struct node *temp = head;

	// traversal of the list
	while (temp->next != NULL)
	{
		// jump to next node
		temp = temp->next;
	}

	// create and allocate node after the last one
	temp->next = createNode(item);
}

/* insertion at any position */
void insertAny(int item, int index)
{
	// there is no node
	if (head == NULL)
	{
		// create and allocate new node and make it head
		head = createNode(item);
		return;
	}

	// create a temp node and it holds head
	struct node *temp = head;
	int i;

	// a loop till the index
	for (i = 0; i < index - 1 && temp->next != NULL; i++)
	{
		// jump to next node
		temp = temp->next;
	}

	// store the next node
	struct node *temp1 = temp->next;

	// create and allocate node in the index
	temp->next = createNode(item);
	temp->next->next = temp1;
}

/* deletion at front */
void deleteFront()
{
	// make the next one as head
	head = head->next;
}

/* deletion at end */
void deleteEnd()
{
	// create a temp node and it holds head
	struct node *temp = head, *temp1;

	// traversal of the list
	while (temp->next != NULL)
	{
		// store the previous position
		temp1 = temp;

		// jump to next node
		temp = temp->next;
	}

	// make the previous node as the last
	temp1->next = NULL;
}

/* deletion at any position */
void deleteAny(int index)
{
	// create a temp node and it holds head
	struct node *temp = head, *temp1, *temp2;
	int i;

	// a loop till the index
	for (i = 0; i < index && temp->next != NULL; i++)
	{
		// store the previous position
		temp1 = temp;

		// jump to next node
		temp = temp->next;
	}

	// store the next position
	temp2 = temp->next;

	// unlink current one
	temp1->next = temp2;
}

void print()
{
	// create a temp node and it holds head
	struct node *temp = head;

	// traversal of the list
	while (temp != NULL)
	{
		// display items
		printf("%d -> ", temp->data);

		// jump to next node
		temp = temp->next;
	}
	printf("null \n");
}

int main()
{
	int choice, item, index;

	// no node allocated
	head = NULL;

	printf("\n== LINKED LIST OPERATIONS ==\n");

	// menu
	printf("\n1. Print linked list"
		   "\n2. Insertion at front"
		   "\n3. Insertion at end"
		   "\n4. Insertion at any position"
		   "\n5. Deletion from front"
		   "\n6. Deletion from end"
		   "\n7. Deletion from any position"
		   "\n0. Exit");

	while (1)
	{
		printf("\n> ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("\nThe linked list :: \n");
			print();
			break;

		case 2:
			printf("Enter item: ");
			scanf("%d", &item);
			insertFront(item);
			printf("Inserted.\n");
			break;

		case 3:
			printf("Enter item: ");
			scanf("%d", &item);
			insertEnd(item);
			printf("Inserted.\n");
			break;

		case 4:
			printf("Enter item: ");
			scanf("%d", &item);
			printf("Enter index: ");
			scanf("%d", &index);
			insertAny(item, index);
			printf("Inserted.\n");
			break;

		case 5:
			if (!head)
			{
				printf("Empty list.\n");
				continue;
			}
			deleteFront();
			printf("Deleted item: %d \n", item);
			break;

		case 6:
			if (!head)
			{
				printf("Empty list.\n");
				continue;
			}
			deleteEnd();
			printf("Deleted item: %d \n", item);
			break;

		case 7:
			if (!head)
			{
				printf("Empty list.\n");
				continue;
			}
			printf("Enter index: ");
			scanf("%d", &index);
			deleteAny(index);
			printf("Deleted item: %d \n", item);
			break;

		case 0:
			printf("\nBye!\n");
			return 0;

		default:
			printf("Error : Try again! \n");
			break;
		}
	}

	return 0;
}