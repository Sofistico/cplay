#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void print_values_list(struct linked_list *list) {
  struct node *cur = list->nodes;
  printf("linked list count: %i\n", list->count);
  while (cur != NULL) {
    printf("list value: %i\n", cur->cur);
    cur = cur->next;
  }
}

int main(int argc, char *argv[])
{
  struct linked_list list = create_linked_list(11);

  printf("Adding values to the list:\n");

  for (int i = 0; i <= 10; i++) {
    add_node(i, &list);
  }

  print_values_list(&list);

  struct node* test_node = get_node(4, &list);
  printf("test_node->cur = %d\n", test_node->cur);

  free_list(&list);

  printf("Finished cleaning\n");

  return EXIT_SUCCESS;
}
