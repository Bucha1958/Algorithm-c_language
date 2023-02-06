#include "lists.h"
#include <string.h>

int main(void)
{
  listint_t *head;
  listint_t *new_node;
  int i;
  listint_t hello = {8, NULL};
  size_t n;

  head = &hello;
  new_node = malloc(sizeof(listint_t));
  new_node->n = 9;
  new_node->next = NULL;
  if (new_node == NULL)
  {
    printf("Error\n");
    return (1);
  }
  new_node->next = head;
  head = new_node;
  n = print_listint(head);
  printf("%lu elements\n", n);
  return 0;

}
