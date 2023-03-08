#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Write a C program to store the player name, runs scored,
wickets taken of 20 cricketers using structure along with pointer
then arrange in order of maximum wickets to minimum wickets they had taken.
*/

struct data{
	char name[20];
	int runs;
	int wickets;
};

int main()
{
	int n = 20,i,j;
	char temp_name[20];
	int temp_runs,temp_wickets;
	struct data *player;

	player = (struct data*)malloc(n*sizeof(struct data));


//Getting input from users
	for(i=0;i<n;i++)
	{
		printf("[#%d].Enter Player Name : ",i+1);
		scanf("%s",(player+i)->name);
		printf("[#%d].Enter Player Runs : ",i+1);
		scanf("%d",&(player+i)->runs);
		printf("[#%d].Enter Player Wickets : ",i+1);
		scanf("%d",&(player+i)->wickets);
		printf("\n");
	}

//Implementing Selection Sort
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((player+i)->wickets < (player+j)->wickets)
			{
				//sorting name
				strcpy(temp_name,(player+i)->name);
				strcpy((player+i)->name,(player+j)->name);
				strcpy((player+j)->name,temp_name);

				//sorting runs
				temp_runs = (player+i)->runs;
				(player+i)->runs = (player+j)->runs;
				(player+j)->runs = temp_runs;

				//sorting wicket
				temp_wickets = (player+i)->wickets;
				(player+i)->wickets = (player+j)->wickets;
				(player+j)->wickets = temp_wickets;
			}
		}
	}


//Printing sorted list in format
printf("Name \t Runs \t Wickets\n");
printf("---- \t ---- \t -------\n");
	for(i=0;i<n;i++)
	{	
		printf("%s\t",(player+i)->name);
		printf("%d\t",(player+i)->runs);
		printf("%d",(player+i)->wickets);
		printf("\n");

	}

	return 0;
}
