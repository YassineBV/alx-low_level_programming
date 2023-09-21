#ifndef LINK_S
#define LINK_S

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


size_t print_list(const list_t *h);

#endif
