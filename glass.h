void Glass_Game()
{
	int glass;
	int answer = -1;

	system("mode con cols=70 lines=30");
	
	printf("유리 밟기 게임: 왼쪽 오른족 유리 중 하나를 선택해 앞으로 나아가라.\n");
	printf("유리는 강와유리와 일반유리 중 하나다. (왼쪽: 1, 오른쪽: 2)\n\n");
	
	printf("\n\n");
	printf("\t\t\t┏━━━━━━━━━━━━━━━┓\n");
	printf("\t\t\t┃      결승     ┃\n");
	printf("\t\t\t┃      ㅁㅁ     ┃\n");
	printf("\t\t\t┃      ㅁㅁ     ┃\n");
	printf("\t\t\t┃      ㅁㅁ     ┃\n");
	printf("\t\t\t┃      ㅁㅁ     ┃\n");
	printf("\t\t\t┃               ┃\n");
	printf("\t\t\t┃      시작     ┃\n");
	printf("\t\t\t┗━━━━━━━━━━━━━━━┛\n");
	printf("\n");

	srand(time(NULL));
	glass = rand() % 2 + 1;
	scanf("%d", &answer);

	if (glass == answer)
	{
		system("cls");
		system("mode con cols=70 lines=30");

		printf("유리 밟기 게임: 왼쪽 오른족 유리 중 하나를 선택해 앞으로 나아가라.\n");
		printf("유리는 강와유리와 일반유리 중 하나다. (왼쪽: 1, 오른쪽: 2)\n\n");

		printf("\n\n");
		printf("\t\t\t┏━━━━━━━━━━━━━━━┓\n");
		printf("\t\t\t┃      결승     ┃\n");
		printf("\t\t\t┃      ㅁㅁ     ┃\n");
		printf("\t\t\t┃      ㅁㅁ     ┃\n");
		printf("\t\t\t┃      ㅁㅁ     ┃\n");
		printf("\t\t\t┃               ┃\n");
		printf("\t\t\t┃               ┃\n");
		printf("\t\t\t┃      시작     ┃\n");
		printf("\t\t\t┗━━━━━━━━━━━━━━━┛\n");
		printf("\n");
	}
	else
	{
		printf("당신은 탈락했습니다.\n");
		exit(0);
	}

	srand(time(NULL));
	glass = rand() % 2 + 1;
	scanf("%d", &answer);

	if (glass == answer)
	{
		system("cls");
		system("mode con cols=70 lines=30");

		printf("유리 밟기 게임: 왼쪽 오른족 유리 중 하나를 선택해 앞으로 나아가라.\n");
		printf("유리는 강와유리와 일반유리 중 하나다. (왼쪽: 1, 오른쪽: 2)\n\n");

		printf("\n\n");
		printf("\t\t\t┏━━━━━━━━━━━━━━━┓\n");
		printf("\t\t\t┃      결승     ┃\n");
		printf("\t\t\t┃      ㅁㅁ     ┃\n");
		printf("\t\t\t┃      ㅁㅁ     ┃\n");
		printf("\t\t\t┃               ┃\n");
		printf("\t\t\t┃               ┃\n");
		printf("\t\t\t┃               ┃\n");
		printf("\t\t\t┃      시작     ┃\n");
		printf("\t\t\t┗━━━━━━━━━━━━━━━┛\n");
		printf("\n");
	}
	else
	{
		printf("당신은 탈락했습니다.\n");
		exit(0);
	}

	srand(time(NULL));
	glass = rand() % 2 + 1;
	scanf("%d", &answer);

	if (glass == answer)
	{
		system("cls");
		system("mode con cols=70 lines=30");

		printf("유리 밟기 게임: 왼쪽 오른족 유리 중 하나를 선택해 앞으로 나아가라.\n");
		printf("유리는 강와유리와 일반유리 중 하나다. (왼쪽: 1, 오른쪽: 2)\n\n");

		printf("\n\n");
		printf("\t\t\t┏━━━━━━━━━━━━━━━┓\n");
		printf("\t\t\t┃      결승     ┃\n");
		printf("\t\t\t┃      ㅁㅁ     ┃\n");
		printf("\t\t\t┃               ┃\n");
		printf("\t\t\t┃               ┃\n");
		printf("\t\t\t┃               ┃\n");
		printf("\t\t\t┃               ┃\n");
		printf("\t\t\t┃      시작     ┃\n");
		printf("\t\t\t┗━━━━━━━━━━━━━━━┛\n");
		printf("\n");
	}
	else
	{
		printf("당신은 탈락했습니다.\n");
		exit(0);
	}

	srand(time(NULL));
	glass = rand() % 2 + 1;
	scanf("%d", &answer);

	if (glass == answer)
	{
		printf("당신은 우승했습니다. 456억원은 당신의 것!!!\n");
	}
	else
	{
		printf("당신은 탈락했습니다.\n");
		exit(0);
	}
}
