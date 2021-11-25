#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

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
		printf("\n사용자 : %s   vs", num1 == 1 ? "가위" : num1 == 2 ? "바위" : "보");
		printf("   컴퓨터 : %s\n", answer1 == 1 ? "가위" : answer1 == 2 ? "바위" : "보");
		printf("1라운드 통과. 다음 라운드로 넘어갑니다.\n");
	}
	else
	{
		printf("\n사용자 : %s   vs", num1 == 1 ? "가위" : num1 == 2 ? "바위" : "보");
		printf("   컴퓨터 : %s\n", answer1 == 1 ? "가위" : answer1 == 2 ? "바위" : "보");
		printf("1라운드 탈락. ");

		/**/
		srand(time(NULL));
		num6 = rand() % ((480 - 161) + 1) + 161;
		printf("%d등 입니다.\n", num6);
	}
}
