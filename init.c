/*
	The purpose of the init function is to make sure the sentinel node is blank, non-writable, and points to the correct thing. It also traverses the structure and makes everything aside from the sentinel writable.
*/

#include <stdio.h>
#include "include.h"

void init(struct node *ll)
{
	ll[0].next==MYNULL; 		//structure begins life as an empty husk
	for(int i=1;i<100;i++)
	{
		ll[i].valid=0;		//life is breathed into each element in turn
	}
	ll[0].data=0;			//sentinel is zeroed out
	ll[0].valid=1;			//sentinel tagged as "leave me alone"
}
