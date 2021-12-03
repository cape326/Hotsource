void new()
{
	system("mode con cols=70 lines=35");
	srand(time(NULL));
	int random = 0;
	random = rand() % 20;
	printf("%d\n", random);
	printf("\t\t┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("\t\t┃    띄어쓰기를 하지 마시오    ┃\n");
	
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
		printf("\t\t┃   관크는 무엇의 약자인가요?  ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n0) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 1:
		printf("\t\t┃   팬아저는 무엇의 약자인가?  ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n1) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 2:
		printf("\t\t┃ 알잘딱깔센은 무엇의 약자인가?┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n2) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 3:
		printf("\t\t┃   설참은 무엇의 약자인가요?  ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n3) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 4:
		printf("\t\t┃   불소는 무엇의 약자인가요?  ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n4) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 5:
		printf("\t\t┃ 당모치는 무엇의 약자인가요?  ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n5) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 6:
		printf("\t\t┃   군싹는 무엇의 약자인가요?  ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n6) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 7:
		printf("\t\t┃  스불재는 무엇의 약자인가요? ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n7) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 8:
		printf("\t\t┃ 괄도네넴띤은 무엇을 뜻하나요?┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n8) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 9:
		printf("\t\t┃ 롬곡는 무엇을 뜻하는 건가요? ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n9) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 10:
		printf("\t\t┃  비담은 무엇의 약자인가요 ?  ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n10) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 11:
		printf("\t\t┃ 별다줄은 무엇의 약자인가요?  ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n11) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 12:
		printf("\t\t┃ 복세편살은 무엇의 약자인가요?┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n12) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 13:
		printf("\t\t┃ ㅈㄱㄴ는 무엇의 약자인가요?  ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n13) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 14:
		printf("\t\t┃   5°5:5는 무엇을 뜻하나요?  ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n14) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 15:
		printf("\t\t┃  꾸꾸꾸는 무엇의 약자인가요? ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n15) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 16:
		printf("\t\t┃  ㅈㅂㅈㅇ는 무엇을 뜻하나요? ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n16) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 17:
		printf("\t\t┃  얼죽코는 무엇의 약자인가요? ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n17) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 18:
		printf("\t\t┃ 갑통알은 무엇의 약자인가요?  ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n18) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	case 19:
		printf("\t\t┃  자낳괴는 무엇의 약자인가요? ┃\n");
		printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		gets(n);
		if (strcmp(n, n19) == 0)
		{
			printf("pass");
			system("pause");
			exit(0);
		}
		else
		{
			printf("fail");
			system("pause");
			exit(0);
		}
		break;
	}

	return 0;
}
