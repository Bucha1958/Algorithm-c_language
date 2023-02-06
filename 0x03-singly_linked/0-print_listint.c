#include "lists.h"

size_t print_listint(const listint_t *h)
{
  int i;

  if (h == NULL)
    return (0);

  for (i = 1; h->next != NULL; i++)
  {
    printf("%d\n", h->n);
    h = h->next;
  }
  return i;
}
