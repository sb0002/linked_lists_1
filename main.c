/***************************************************************************************************
*
*	This program allows the user to generate and experiment with
*	linked lists. The program lets the user add new entries, delete entries,
*	print out all entries, and search for a specific entry, all while
*	maintaining a linked list so that entries are arranged numerically.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "include.h"

int number;							//this will always be the number the user most recently input
char numtemp[100]={0};
char command;							//add, delete, print, whatever the user specifies

int main()
{
	while(1)
	{
		printf(" > ");					//promptly engage prompt
		fgets(numtemp, 100, stdin);			//get input from the ever-cooperative user
		sscanf(numtemp, "%c%d", &command, &number);	//parse the input. you know, just in case.

		if(command=='i')
		{
			add(ll, number);
		}
		if(command=='p')
		{
			print(ll);
		}
		if(command=='s')
		{
			int sar=search(ll, number);		//look for the number and report result
			if(sar==1)
			{
				printf("FOUND\n");
			} else { printf("NOT FOUND\n"); }
		}
		if(command=='d')				//delete a number, if it exists
		{
			if(search(ll, number))
			{
				delete(ll, number);
			}
			else
			{
				printf("NODE NOT FOUND\n");
			}
		}
		if(command=='x')
		{
			return 0;
		}
		if(command!='i' && command!='p' && command!='s' && command!='d')						//the user entered something incorrect. let's educate them a bit.
		{
			printf("Command\t\tResult\ni number\tinserts number into the list\np \t\tprints the list's contents\ns number\tsearches for the given number\nd number\tdeletes the given number\nx\t\tquits the program\n");
		}
	}
}
