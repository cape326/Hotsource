#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

char Image[][6][20] =
{

{

"□■□■□□□□",

"□■□■□□□□",

"□■□■□□□□",

"□■■■■■■□",

"□■■■■■■□",

"□■■■■■■□"

},

{

"□□□□□□□□",

"□■■■■■□□",

"□■■■■■□□",

"□■■■■■■□",

"□■■■■■■□",

"□■■■■■■□"

},

{

"□□□■□■□□",

"□■□■□■□■",

"□■□■□■□■",

"□■□■□■□■",

"■■■■■■■■",

"□■■■■■■■"

}

};

void round1()
{
	int num1, answer1, num6;
	srand(time(NULL));
	num1 = rand() % 3 + 1;
	printf("┏━━━━━━━━━━━━━━━┓\n");
	printf("┃     <Round 1> 가위바위보     ┃\n");
	printf("┃                              ┃\n");
	printf("┃   비기거나 지면 탈락입니다.  ┃\n");
	printf("┃                              ┃\n");
	printf("┃           1. 가위            ┃\n");
	printf("┃           2. 바위            ┃\n");
	printf("┃           3. 보              ┃\n");
	printf("┗━━━━━━━━━━━━━━━┛\n");
	printf("Please enter key > ");
	scanf("%d", &answer1);
	if (num1 == 1 && answer1 == 2 || num1 == 2 && answer1 == 3 || num1 == 3 && answer1 == 1)
	{
		printf("\n     사용자\n");
		if (answer1 == 1)
		{
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 20; j++)
					printf("%c", Image[0][i][j]);
				printf("\n");
			}
			printf("     <가위>\n");
		}
		else if (answer1 == 2)
		{
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 20; j++)
					printf("%c", Image[1][i][j]);
				printf("\n");
			}
			printf("     <바위>\n");
		}
		else if (answer1 == 3)
		{
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 20; j++)
					printf("%c", Image[2][i][j]);
				printf("\n");
			}
			printf("      <보>\n");
		}
		printf("\n     컴퓨터\n");
		if (num1 == 1)
		{
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 20; j++)
					printf("%c", Image[0][i][j]);
				printf("\n");
			}
			printf("     <가위>\n");
		}
		else if (num1 == 2)
		{
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 20; j++)
					printf("%c", Image[1][i][j]);
				printf("\n");
			}
			printf("     <바위>\n");
		}
		else if (num1 == 3)
		{
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 20; j++)
					printf("%c", Image[2][i][j]);
				printf("\n");
			}
			printf("      <보>\n");
		}
		printf("1라운드 통과. 다음 라운드로 넘어갑니다.\n");
	}
	else
	{
		printf("\n     사용자\n");
		if (answer1 == 1)
		{
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 20; j++)
					printf("%c", Image[0][i][j]);
				printf("\n");
			}
			printf("     <가위>\n");
		}
		else if (answer1 == 2)
		{
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 20; j++)
					printf("%c", Image[1][i][j]);
				printf("\n");
			}
			printf("     <바위>\n");
		}
		else if (answer1 == 3)
		{
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 20; j++)
					printf("%c", Image[2][i][j]);
				printf("\n");
			}
			printf("      <보>\n");
		}
		printf("\n     컴퓨터\n");
		if (num1 == 1)
		{
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 20; j++)
					printf("%c", Image[0][i][j]);
				printf("\n");
			}
			printf("     <가위>\n");
		}
		else if (num1 == 2)
		{
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 20; j++)
					printf("%c", Image[1][i][j]);
				printf("\n");
			}
			printf("     <바위>\n");
		}
		else if (num1 == 3)
		{
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 20; j++)
					printf("%c", Image[2][i][j]);
				printf("\n");
			}
			printf("      <보>\n");
		}
		printf("\n1라운드 탈락. ");

		/**/
		srand(time(NULL));
		num6 = rand() % ((480 - 161) + 1) + 161;
		printf("%d등 입니다.\n", num6);
	}
}
