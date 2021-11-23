#include <stdio.h>
#include <string.h>    
#include <stdlib.h> 
#include <time.h> 

int new()
{
	srand(time(NULL));
	int random = 0;
	random = rand() % 20;
	printf("%d\n", random);

	printf("*띄어쓰기를 하지 마시오*\n");
	char n[100];
	char n0[100] = "관객크리티컬";
	char n1[100] = "팬이아니어도저장";
	char n2[100] = "알아서잘딱깔끔하고센스있게";
	char n3[100] = "설명을참조하세요";
	char n4[100] = "불타는소통";
	char n5[100] = "당연히모든치킨은옳다";
	char n6[100] = "군침이싹도노";
	char n7[100] = "스스로불러온재앙";
	char n8[100] = "팔도비빔면";
	char n9[100] = "눈물";
	char n10[100] = "비주얼담당";
	char n11[100] = "별걸다줄인다";
	char n12[100] = "복잡한세상편하게살자";
	char n13[100] = "제목이곧내용";
	char n14[100] = "어서오세요";
	char n15[100] = "꾸며도꾸질꾸질";
	char n16[100] = "정보좀요";
	char n17[100] = "얼어죽어도코트";
	char n18[100] = "갑자기통장보니알바해야겠다";
	char n19[100] = "자본주의가낳은괴물";

	switch (random)
	{
	case 0:
		printf("관크는 무엇의 약자인가요?\n");
		scanf("%s", n);
		if (strcmp(n, n0) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 1:
		printf("팬아저는 무엇의 약자인가?\n");
		scanf("%s", n);
		if (strcmp(n, n1) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 2:
		printf("알잘딱깔센은 무엇의 약자인가요?\n");
		scanf("%s", n);
		if (strcmp(n, n2) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 3:
		printf("설참은 무엇의 약자인가요?\n");
		scanf("%s", n);
		if (strcmp(n, n3) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 4:
		printf("불소는 무엇의 약자인가요?\n");
		scanf("%s", n);
		if (strcmp(n, n4) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 5:
		printf("당모치는 무엇의 약자인가요?\n");
		scanf("%s", n);
		if (strcmp(n, n5) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 6:
		printf("군싹는 무엇의 약자인가요?\n");
		scanf("%s", n);
		if (strcmp(n, n6) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 7:
		printf("스불재는 무엇의 약자인가요?\n");
		scanf("%s", n);
		if (strcmp(n, n7) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 8:
		printf("괄도네넴띤은 무엇을 뜻하는 건가요?\n");
		scanf("%s", n);
		if (strcmp(n, n8) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 9:
		printf("롬곡는 무엇을 뜻하는 건가요?\n");
		scanf("%s", n);
		if (strcmp(n, n9) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 10:
		printf("비담은 무엇의 약자인가요?\n");
		scanf("%s", n);
		if (strcmp(n, n10) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 11:
		printf("별다줄은 무엇의 약자인가요?\n");
		scanf("%s", n);
		if (strcmp(n, n11) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 12:
		printf("복세편살은 무엇의 약자인가요?\n");
		scanf("%s", n);
		if (strcmp(n, n12) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 13:
		printf("ㅈㄱㄴ는 무엇의 약자인가요?\n");
		scanf("%s", n);
		if (strcmp(n, n13) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 14:
		printf("5°5:5는 무엇을 뜻하나요?\n");
		scanf("%s", n);
		if (strcmp(n, n14) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 15:
		printf("꾸꾸꾸는 무엇의 약자인가요?\n");
		scanf("%s", n);
		if (strcmp(n, n15) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 16:
		printf("ㅈㅂㅈㅇ는 무엇을 뜻하나요?\n");
		scanf("%s", n);
		if (strcmp(n, n16) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 17:
		printf("얼죽코는 무엇의 약자인가요?\n");
		scanf("%s", n);
		if (strcmp(n, n17) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 18:
		printf("갑통알은 무엇의 약자인가요?\n");
		scanf("%s", n);
		if (strcmp(n, n18) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	case 19:
		printf("자낳괴는 무엇의 약자인가요?\n");
		scanf("%s", n);
		if (strcmp(n, n19) == 0)
			printf("pass");
		else
			printf("fail");
		break;
	}

	return 0;
}
