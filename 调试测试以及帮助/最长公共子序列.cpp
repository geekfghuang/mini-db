#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int n1, n2,  k = 1;
char town1[10010], town2[10010];
int solve[2][10010];

int max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	return y;
}
int main()
{

	int i, j;
	scanf("%s", town1);
	scanf("%s", town2);
	n1 = strlen(town1);
	n2 = strlen(town2);
	memset(solve, 0, sizeof(solve));

	int help = 0;
	for (i = 1; i <= n1; i++)               /*对角线增加为公共字符*/
	  for (j = 1; j <= n2; j++)
	  {
		help = i % 2;
		if (town1[i - 1] == town2[j - 1])            
		{
			solve[help][j] = 1 + solve[(help+1)%2][j - 1]; 
		}
		else
		{
			solve[help][j] = max(solve[(help + 1) % 2][j], solve[help][j - 1]);
		}
	  }

	printf("%d\n", solve[help][n2]);
	
}
