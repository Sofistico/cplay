#include "linked_list.h"
#include <stdlib.h>

struct node *set_new_node(struct node *cur, int val) {
  struct node *next_node = malloc(sizeof(struct node));
  next_node->cur = val;
  next_node->next = NULL;
  if (cur != NULL)
    cur->next = next_node;
  return next_node;
}

struct linked_list create_linked_list(int value) {
  struct linked_list list;
  list.nodes = set_new_node(NULL, value);
  list.count = 1;
  return list;
}

void add_node(int val, struct linked_list *llist) {
  if (llist == NULL || llist->nodes == NULL)
    return;
  struct node *node = llist->nodes;
  if (node == NULL)
    return;
  while (node->next != NULL) {
    node = node->next;
  }
  set_new_node(node, val);
  llist->count++;
}

void free_list(struct linked_list *list) {
  if (list == NULL || list->nodes == NULL)
    return;
  struct node *cur_node = list->nodes;
  struct node* in_place = cur_node;
  while (in_place != NULL) {
    struct node* in_place = cur_node->next;
    free(cur_node);
  }
}
