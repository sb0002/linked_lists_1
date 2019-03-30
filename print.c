//The print function simply traverses the structure and prints to screen any valid entries it finds

#include <stdio.h>
#include "include.h"

void print(struct node *ll)
{
	int next=ll[0].next;
	while(next > 0) 		//keep up the loop until MYNULL comes around, signaling structure end
	{
		printf("%i ", ll[next].data);
		next=ll[next].next;	//look to the next link in the chain
	}
	printf("\n");
}
