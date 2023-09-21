#include "lists.h"
size_t print_list(const list_t *h)
{
    int count_nods = 0;
    list_t *ptr_nods = NULL;

    if (h->str == NULL)
    {
        printf("[0] (nil)\n");
    }
    ptr_nods = h->next;

    while (ptr_nods != NULL)
    {
        printf("[%d] %s\n", h->len, h->str);
        count_nods++;
        printf("[%d] %s\n", ptr_nods->len, ptr_nods->str);
        count_nods++;
        ptr_nods = ptr_nods->next;
    }
    
    return (count_nods);
}

