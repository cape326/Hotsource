#include <stdio.h>
#include <time.h>

void glass_game()
{
	int glass;
	int answer = -1;

	printf("���� ��� ����: ���� ������ ���� �� �ϳ��� ������ ������ ���ư���.\n");
	printf("������ ���������� �Ϲ����� �� �ϳ���. (����: 1, ������: 2)\n\n");
	printf("  ���\n");
	printf("���� ���� \n");
	printf("���� ���� \n");
	printf("���� ���� \n");
	printf("���� ���� \n");

	srand(time(NULL));
	glass = rand() % 2 + 1;
	scanf("%d", &answer);

	if (glass == answer)
	{
		printf("  ���\n");
		printf("���� ���� \n");
		printf("���� ���� \n");
		printf("���� ���� \n");
	}
	else
	{
		printf("����� Ż���߽��ϴ�.\n");
		exit(0);
	}

	srand(time(NULL));
	glass = rand() % 2 + 1;
	scanf("%d", &answer);

	if (glass == answer)
	{
		printf("  ���\n");
		printf("���� ���� \n");
		printf("���� ���� \n");
	}
	else
	{
		printf("����� Ż���߽��ϴ�.\n");
		exit(0);
	}

	srand(time(NULL));
	glass = rand() % 2 + 1;
	scanf("%d", &answer);

	if (glass == answer)
	{
		printf("  ���\n");
		printf("���� ���� \n");
	}
	else
	{
		printf("����� Ż���߽��ϴ�.\n");
		exit(0);
	}

	srand(time(NULL));
	glass = rand() % 2 + 1;
	scanf("%d", &answer);

	if (glass == answer)
	{
		printf("����� ����߽��ϴ�. 456����� ����� ��!!!\n");
	}
	else
	{
		printf("����� Ż���߽��ϴ�.\n");
		exit(0);
	}
}
