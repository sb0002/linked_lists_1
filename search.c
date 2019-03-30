/*
	The search function looks through the structure for a node containing as data the desired number
*/


#include <stdio.h>
#include "include.h"

int search(struct node *ll,int number)
{
	for(int i=1;i<100;i++) 		//begin the search
	{
		if(ll[i].data==number && ll[i].valid==1) //if the number is present and not marked unwritable...
		{
			return 1; 			 //...then report success
		}
	}
	return 0;
}
