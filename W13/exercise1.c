#include<stdio.h>
#define SIZE 5

struct test
{
	int score;
	char name[4];  
};

int main()
{

	struct test test[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		printf("Plz enter name of student :");
		scanf("%s", &test[i].name, sizeof(test[i].name));
		printf("Plz enter score of %s :", test[i].name);
		scanf("%d", &test[i].score);
	}
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j <SIZE -1; j++)
		{
			if (test[j].score < test[j + 1].score)
			{
				struct test temp = test[j];
				test[j] = test[j + 1];
				test[j + 1] = temp;
				j=-1;
			}
		}
	}
	printf("%10s%10s\n", "Name", "Score");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%10s%10d\n", test[i].name, test[i].score);
	}
}