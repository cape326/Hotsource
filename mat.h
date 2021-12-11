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
    node* p = head;
    char answer[20];
    for (int i = 0; i < n; i++)
        p = p->next;
    printf("%s %s %s\n", p->data.question, p->data.truelist, p->data.falselist);
    scanf("%s", &answer);
    if (strcmp(p->data.truelist, answer) == 0)
        printf("\n맞습니다.");
    else (strcmp(p->data.falselist, answer) == 0)
        printf("\n틀렸습니다.");
  
}

void mat()
{
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

    return 0;

}
