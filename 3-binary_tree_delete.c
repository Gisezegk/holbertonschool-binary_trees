#include "binary_trees.h"



void
delete_node(binary_tree_t *node)
{
	if (node == NULL)
	{
		return;
	}
	delete_node(node->left);
	delete_node(node->right);
	free(node);
}



void
binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	delete_node(tree);
}
