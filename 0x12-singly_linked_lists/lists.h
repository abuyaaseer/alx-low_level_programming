#ifndef LIST_H
#define LIST_H

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
	struct list_t *link;
} list_t;

#endif
