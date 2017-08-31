//http://blog.csdn.net/code_pang/article/details/8251240
#include <stdio.h>
#include <string.h>

#define SIZE 405

int main(void)
{
	int count[SIZE];
	int i, j, testNum, n, max, from, to;

	scanf("%d", &testNum);
	while (testNum-- != 0)
	{
		scanf("%d", &n);
		memset(count, 0, sizeof(count));
		for (i = 0; i < n; i++)
		{
			scanf("%d %d", &from, &to);
			if (from > to)
			{
				int temp = from;
				from = to;
				to = temp;
			}
			if (from % 2 == 0)
			{
				count[from-1]++;
			}
			if (to % 2 == 1)
			{
				count[to+1]++;
			}
			for (j = from; j <= to; j++)
			{
				count[j]++;
			}
		}
		max = 0;
		for (i = 0; i < SIZE; i++)
		{
			if (count[i] > max)
			{
				max = count[i];
			}
		}
		printf("%d\n", max*10);
	}
	return 0;
}
