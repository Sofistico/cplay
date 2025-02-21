#include <stdbool.h>
#include <stdio.h>
#include "linked_list.h"
#include <stdlib.h>

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
  struct linked_list list = create_linked_list(2);

  print_values_list(&list);

  printf("Adding a new value:\n");
  add_node(4, &list);

  print_values_list(&list);

  free_list(&list);

  printf("Finished cleaning\n");

  return EXIT_SUCCESS;
}
