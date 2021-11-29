#include <stdio.h>
#include <string.h>

void mat(){

char truelist[20]="꺼매졌다";
char falselist[20]="까매졌다";
char question[100]="손이 ___.";
char answer[20];

printf("\n\n<두번째 게임은 맞춤법게임입니다.>\n\n");
printf("\n%s\n\n 1.%s\n 2.%s\n\n(한글입력)",question,truelist,falselist);
scanf("%s",answer);

if(strcmp(truelist,answer) == 0)
{
  printf("\n 맞습니다.");
}

else if(strcmp(falselist,answer) == 0)
{
    printf("틀렸습니다.");
}

else
{
    printf("다시 입력하시오.");
}

return 0;
}
