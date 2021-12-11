typedef struct DATA {
    char truelist[50];
    char falselist[50];
    char question[100];
}ques;

typedef struct node {
    ques data;
    struct node* next;
}node;

void insert(node** head, ques data)
{
    node* p = malloc(sizeof(struct DATA));
    p->data = data;
    p->next = NULL;
    if (*head == NULL)
        *head = p;
    else
    {
        node* temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = p;
    }
}

void show(node* head, int n)
{
    int Mat_Rank;
    node* p = head;
    char answer[20];
    for (int i = 0; i < n; i++)
        p = p->next;
	printf("\t\t┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf("\t\t┃     <Round 2> 맞춤법게임       ┃\n");
	printf("\t\t┃                             ┃\n");
	printf("\t\t┃     아래의 맞춤법을 맞추어라      ┃\n");
	printf("\t\t|         %s %s %s            |\n", p->data.question, p->data.truelist, p->data.falselist);
	printf("\t\t┃                             ┃\n");
	printf("\t\t┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n"); 
	
    scanf("%s", &answer);
    if (strcmp(p->data.truelist, answer) == 0)
        printf("\n맞습니다.");
    else 
    {
        printf("\n틀렸습니다.\n");
        
        srand(time(NULL));
	    Mat_Rank = rand() % ((160 - 81) + 1) + 81;   //81~160까지의 수에서 랜덤 추출    (맞춤법)
	
	   printf("\t\t  ∧__∧　　\n");
	   printf("\t\t ( ｀Д´）　　\n");
	   printf("\t\t (っ┎∈=---  ******* \n");
	   printf("\t\t  /　　 )\n");
	   printf("\t\t  ( /￣∪\n");
	   printf("\t\t탈락입니다. 당신의 등수는 %d등 입니다.\n", Mat_Rank);
	   system("pause");
	   exit(0);
    }
}

void mat()
{
    system("cls");
    int keynum;
    srand(time(NULL));
    keynum = rand() % 10;

    printf("0-9 중 랜덤 수는 %d 이다.\n", keynum);
    node* head = NULL;
    ques data;
    FILE* fp = NULL;
    fp = fopen("matquiz.txt", "r");
    while (feof(fp) == 0)
    {
        fscanf(fp, "%s %s %s", &(data.question), &(data.truelist), &(data.falselist));
        insert(&head, data);
    }

    show(head, keynum);
    fclose(fp);

}
