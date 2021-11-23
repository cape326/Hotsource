#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

void round1()
{
	int num1, answer1,num6;
	srand(time(NULL));
	num1 = rand() % 3;
	printf("1라운드는 가위바위보 게임입니다.\n");
	printf("게임을 시작합니다. (0:가위 1:바위 2:보) : ");
	scanf("%d", &answer1);
	if (num1 == 0 && answer1 == 1 || num1 == 1 && answer1 == 2 || num1 == 2 && answer1 == 0)
	{
		printf("\n컴퓨터 : %s\n", num1 == 0 ? "가위" : num1 == 1 ? "바위" : "보");
		printf("사용자 : %s\n", answer1 == 0 ? "가위" : answer1 == 1 ? "바위" : "보");
		printf("\n1라운드 통과. 다음 라운드로 넘어갑니다.\n");
	}
	else
	{
		printf("\n컴퓨터 : %s\n", num1 == 0 ? "가위" : num1 == 1 ? "바위" : "보");
		printf("사용자 : %s\n", answer1 == 0 ? "가위" : answer1 == 1 ? "바위" : "보");
		printf("\n1라운드 탈락.\n");
		
		/**/
		srand(time(NULL));
	num6 = rand() % ((480 - 161) + 1) + 161;
		printf("당신은 %d등 입니다.\n", num6);
	}
}
