#include "binary_trees.h"

/**
 * binary_tree_levelorder - traverse through the tree using
 * level order trversal
 * @tree: pointer to the root node
 * @func: pointer to the function to call each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
}

/**
 * enqueue - add data to a queue
 * @queue: pointer to the linked list
 * @value: data to add
 * Return: the pointer to the head ofthe list
 */
queue_list_t *enqueue(queue_list_t *head, int value)
{
	queue_list_t *tail, *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(queue_list_t));
	if (!now_node)
		return (NULL);
	new_node->n = value;
	new_node->next = NULL;

	if (tail)
		tail->next = new_node;
	tail = new_node;

	if (!head)
		head = new_node;
}

/**
 * dequeue - collect the first element from queue list
 * @head: double pointer to the queue list
 * Return: the value of the first element of the list
 */
queue_list_t *dequeue(queue_list_t **head)
{
	queue_list_t *temp;
	int result;

	if (!(*head))
		return (NULL);
	temp = (*head);
	(*head) = (*head)->next;
	result = temp->n;
	free(temp);

}
