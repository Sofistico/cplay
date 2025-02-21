#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct linked_list {
  struct node *nodes;
  int count;
};

struct node {
  struct node *next;
  int cur;
};

struct linked_list create_linked_list(int value);
void add_node(int val, struct linked_list *llist);
void free_list(struct linked_list* list);

#endif
