/*
	This function's job is to look through the structure and find a node suitable for overwriting. Note: valid=1 means the node is valid, or it has something in it that shouldn't be touched right now. Valid=0 means "invalid"; whatever is inside is unimportant and can be overwritten.
*/


#include <stdio.h>
#include "include.h"

int get_node(struct node *ll)
{
        for(int i=1;i<100;i++)
        {
                if(ll[i].valid==0) 	//look for a node we can write to
                {
                        return i;	//send the writable node's index back for usage
                }
		if(i==99)
                {
                        return MYNULL;	//out of luck. there's no free space.
                }
        }
}
