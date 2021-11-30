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

	system("mode con cols=70 lines=30");

	printf("\t\t┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("\t\t┃     <Round 1> 가위바위보    ┃\n");
	printf("\t\t┃                             ┃\n");
	printf("\t\t┃   비기거나 지면 탈락입니다. ┃\n");
	printf("\t\t┃                             ┃\n");
	printf("\t\t┃           1. 가위           ┃\n");
	printf("\t\t┃           2. 바위           ┃\n");
	printf("\t\t┃           3. 보             ┃\n");
	printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");

	printf("Please enter key > ");
	scanf("%d", &answer1);
	if (num1 == 1 && answer1 == 2 || num1 == 2 && answer1 == 3 || num1 == 3 && answer1 == 1)
	{
		printf("\n\t\t       사용자\n");
		if (answer1 == 1)
		{
			for (int i = 0; i < 6; i++)
			{
				printf("\t\t       ");
				for (int j = 0; j < 20; j++)
					printf("%c", Image[0][i][j]);
				printf("\n");
			}
			printf("\t\t       <가위>\n");
		}
		else if (answer1 == 2)
		{
			for (int i = 0; i < 6; i++)
			{
				printf("\t\t       ");
				for (int j = 0; j < 20; j++)
					printf("%c", Image[1][i][j]);
				printf("\n");
			}
			printf("\t\t       <바위>\n");
		}
		else if (answer1 == 3)
		{
			for (int i = 0; i < 6; i++)
			{
				printf("\t\t       ");
				for (int j = 0; j < 20; j++)
					printf("%c", Image[2][i][j]);
				printf("\n");
			}
			printf("\t\t       <보>\n");
		}
		printf("\n\t\t       컴퓨터\n");
		if (num1 == 1)
		{
			for (int i = 0; i < 6; i++)
			{
				printf("\t\t       ");
				for (int j = 0; j < 20; j++)
					printf("%c", Image[0][i][j]);
				printf("\n");
			}
			printf("\t\t       <가위>\n");
		}
		else if (num1 == 2)
		{
			for (int i = 0; i < 6; i++)
			{
				printf("\t\t       ");
				for (int j = 0; j < 20; j++)
					printf("%c", Image[1][i][j]);
				printf("\n");
			}
			printf("\t\t       <바위>\n");
		}
		else if (num1 == 3)
		{
			for (int i = 0; i < 6; i++)
			{
				printf("\t\t       ");
				for (int j = 0; j < 20; j++)
					printf("%c", Image[2][i][j]);
				printf("\n");
			}
			printf("\t\t       <보>\n");
		}
		printf("\n1라운드 통과. 다음 라운드로 넘어갑니다.\n");
	}
	else
	{
		printf("\n\t\t       사용자\n");
		if (answer1 == 1)
		{
			for (int i = 0; i < 6; i++)
			{
				printf("\t\t       ");
				for (int j = 0; j < 20; j++)
					printf("%c", Image[0][i][j]);
				printf("\n");
			}
			printf("\t\t       <가위>\n");
		}
		else if (answer1 == 2)
		{
			for (int i = 0; i < 6; i++)
			{
				printf("\t\t       ");
				for (int j = 0; j < 20; j++)
					printf("%c", Image[1][i][j]);
				printf("\n");
			}
			printf("\t\t       <바위>\n");
		}
		else if (answer1 == 3)
		{
			for (int i = 0; i < 6; i++)
			{
				printf("\t\t       ");
				for (int j = 0; j < 20; j++)
					printf("%c", Image[2][i][j]);
				printf("\n");
			}
			printf("\t\t       <보>\n");
		}
		printf("\n\t\t       컴퓨터\n");
		if (num1 == 1)
		{
			for (int i = 0; i < 6; i++)
			{
				printf("\t\t       ");
				for (int j = 0; j < 20; j++)
					printf("%c", Image[0][i][j]);
				printf("\n");
			}
			printf("\t\t       <가위>\n");
		}
		else if (num1 == 2)
		{
			for (int i = 0; i < 6; i++)
			{
				printf("\t\t       ");
				for (int j = 0; j < 20; j++)
					printf("%c", Image[1][i][j]);
				printf("\n");
			}
			printf("\t\t       <바위>\n");
		}
		else if (num1 == 3)
		{
			for (int i = 0; i < 6; i++)
			{
				printf("\t\t       ");
				for (int j = 0; j < 20; j++)
					printf("%c", Image[2][i][j]);
				printf("\n");
			}
			printf("\t\t       <보>\n");
		}
		printf("\n1라운드 탈락. ");
	}
}
