#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>


/**
*struct list_s - single linked list
*@str: string
*@len: length of string
*@link: points to the next node
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *link;
} list_t;

size_t print_list(const list_t *h);

#endif
