#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
#include<conio.h>
#define maphigh 28
#define mapwide 84
// constexpr auto maphigh = 28, mapwide = 84;
struct virus
{
	int x;
	int y;
}virus;
unsigned short snakesize = 5, speed = 100, len = 4;
struct snake
{
	int x[50];
	int y[50];
	int len;
	int speed;
}snake;
int key = 'w';
void gotoxy(int x, int y);
void drawmap();
void keydown();
void creatfood();
int snakestatus();
void startgame();
int menuselect();
void goodbye();
int main()
{
	for (;;)
	{
		system("cls");
		switch (menuselect())
		{
		case 1:
			startgame();
			break;
		case 2:
			goodbye();
			return 0;
		default:
			break;
		}
	}
}
void drawmap()
{
	
	srand((unsigned int)time(NULL));
	int i, k;
	for (i = 0; i <= maphigh; i++)
	{
		gotoxy(0, i);
		printf("■");
		gotoxy(mapwide+1, i);
		printf("■");
	}
	for (i = 0; i <= mapwide; i += 2)
	{
		gotoxy(i, 0);
		printf("■■");
		gotoxy(i, maphigh);
		printf("■■");
	}
	
	snake.len = len;
	snake.speed = speed;
	snake.x[0] = mapwide / 2;
	snake.y[0] = maphigh / 2;
	gotoxy(snake.x[0], snake.y[0]);
	printf("■");
	for (k = 1; k < snake.len; k++)
	{
		snake.x[k] = snake.x[k - 1] + 2;
		snake.y[k] = snake.y[k - 1];
		gotoxy(snake.x[k], snake.y[k]);
		printf("■");
	}
	while (1)
	{
		virus.x = rand() % (mapwide - 4) + 2;
		virus.y = rand() % (maphigh - 2) + 1;
		if (virus.x % 2 == 0)
			break;
	}
	gotoxy(virus.x, virus.y);
	printf("■");
	gotoxy(mapwide + 4, maphigh);
	printf("■:%d", snakesize - snake.len);
}
void creatfood()
{
	if (snake.x[0] == virus.x && snake.y[0] == virus.y)
	{
		snake.len++;
		srand((unsigned)time(NULL));
		while (1)
		{
			int flag = 1;
			virus.x = rand() % (mapwide - 4) + 2;
			virus.y = rand() % (maphigh - 2) + 1;
			for (int k = 0; k < snake.len; k++)
			{
				if (snake.x[k] == virus.x && snake.y[k] == virus.y)
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1 && virus.x % 2 == 0)
			{
				break;
			}
		}
	}
	gotoxy(virus.x, virus.y);
	printf("$");
	gotoxy(mapwide + 8, 0);
	printf("W");
	gotoxy(mapwide + 6, 1);
	printf("A S D \t進行控制");
	gotoxy(mapwide + 4, maphigh);
	printf("剩餘:%d", snakesize - snake.len);
}
void keydown()
{
	int i, temp;
	if (_kbhit()) 
	{
		fflush(stdin);
		temp = _getch();
		if ((temp == 'a' || temp == 'A') && (key != 'D' && key != 'd'))
		{
			key = temp;
		}
		if ((temp == 'w' || temp == 'W') && (key != 's' && key != 'S'))
		{
			key = temp;
		}
		if ((temp == 's' || temp == 'S') && (key != 'W' && key != 'w'))
		{
			key = temp;
		}
		if ((temp == 'D' || temp == 'd') && (key != 'a' && key != 'A'))
		{
			key = temp;
		}
	}
	gotoxy(snake.x[snake.len - 1], snake.y[snake.len - 1]);
	printf("  ");
	for (i = snake.len - 1; i > 0; i--)
	{
		snake.x[i] = snake.x[i - 1];
		snake.y[i] = snake.y[i - 1];
	}
	switch (key)
	{
	case'w':
	case'W':
		snake.y[0]--;
		break;
	case's':
	case'S':
		snake.y[0]++;
		break;
	case'a':
	case'A':
		snake.x[0] -= 2;
		break;
	case'd':
	case'D':
		snake.x[0] += 2;
		break;
	}
	gotoxy(snake.x[0], snake.y[0]);
	printf("■\n■");
	gotoxy(mapwide + 2, 0);
}
int snakestatus()
{
	if ((snake.x[0] == 0 || snake.x[0] == mapwide) || (snake.y[0] == 0 || snake.y[0] == maphigh))
		return 0;
	for (int k = 1; k < snake.len; k++)
	{
		if (snake.x[0] == snake.x[k] && snake.y[0] == snake.y[k])
			return 0;
	}
	return 1;
}
void gotoxy(int x, int y)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	
	COORD coord;
	coord.X = x;
	coord.Y = y;
	
	SetConsoleCursorPosition(handle, coord);
}
void startgame()
{
	system("cls");
	drawmap();
	while (1)
	{
		creatfood();
		keydown();
		Sleep(snake.speed);
		if (!snakestatus())
		{
			gotoxy(mapwide / 2, maphigh / 2);
			printf("Game Over!");
			getchar();
			getchar();
			break;
		}
		if (snake.len == snakesize)
		{
			gotoxy(mapwide / 3, maphigh / 2);
			printf("恭喜您破關");
			getchar();
			
			break;
		}
	}
}
int menuselect()
{
	char number;
	int a;
	printf("\n\n\t\t\t\t\t\t1.StartGame\n");
	printf("\n\t\t\t\t\t\t2.exit\n");
	printf("\n\t\t\t\t\t\tPlease enter a number:");
	while (1)
	{
		number = getchar();
		a = (int)number - 48;
		if (number <= '5' && number >= '1')
			return a;
		printf("\n\t\t\t\t\t\t\t      ");
	}
}
void goodbye()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);//閮剖??蝝????
	gotoxy(0, 12);
	printf("\t\t\t\t\t\t謝謝使用!再見!\n");
	getchar();
	getchar();
}








