#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,ave;
	int sum;
	int score[SIZE];
	
	sum=0;
	for(i=0;i<SIZE;i++)
	{
		printf("score : ");
		scanf("%d", &score[i]);
		sum+=score[i]; 
	}
		
	ave = sum / SIZE;
	printf("ave : %d\n", ave);
	
	return 0;
}
