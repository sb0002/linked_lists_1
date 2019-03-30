/*
	The delete function deletes a user-specified number, and then annuls all knowledge of its existence, allowing it to be overwritten by newer, more pleasing data.
*/

#include <stdio.h>
#include "include.h"

int delete(struct node *ll, int number)
{
	int prev=0;
	int next=ll[prev].next;
	while(1)
	{
		if(ll[next].data==number)		//if the search for the unlucky number succeeds...
		{
			ll[prev].next=ll[next].next;
			ll[next].valid=0;		//...then it's marked as writable
			printf("SUCCESS\n");		//make sure the user knows
			return 1;
		}
		else
		{
			prev=next;			//if the first round failed, follow the link and have another go
			next=ll[next].next;
		}
	}
}
