#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#define _XOPEN_SOURCE 200 
//#include <signal.h> 
//#define NUM_Q 4
//#define MAX_NUM_Q 20

struct DATA{
char truelist[50];
char falselist[50];
char question[100];

};

//int fileOpen(FILE** _fp,char* _fileName,char* _mode){
    //*_fp = fopen(_fileName,_mode);
    //if(!*_fp){
      //  printf("Fail to open - %s\n",_fileName);
       // return -1;
    //}
    //return 0;
//}

int main(void){

int answer;
int choice = 0;

int tl[50];
int fl[50];
int qtn[100];

//랜덤함수로 0-3중에서 하나의 수를 뽑는다. 
int i;

srand((unsigned int)time(NULL));
int keynum;
keynum = rand() % 4 ; 

printf("0-3 중 랜덤 수는 %d 이다.\n",keynum);
                     
//파일입출력으로 구조체에서 keynum에 해당하는 번호의 buf를 가져온다. 
struct DATA info = { 0 }; 

//char* fileName = "matquiz.txt";
FILE* fp = NULL;

fp=fopen("matquiz.txt","r");

//if (fileOpen(&fp,fileName,"a") < 0) exit(1);
while (feof(fp)==0)
{
   fscanf(fp,"%s %s %s",info.truelist,info.falselist,info.question);
 //  printf("\nwew");  
   tl[choice] = info.truelist;
   fl[choice] = info.truelist;
   qtn[choice] = info.truelist;

   choice ++;
  // printf("%s, %s, %s\n",info.truelist,info.falselist,info.question);
}

printf("%s, %s, %s\n",tl[keynum],fl[keynum],qtn[keynum]);

printf("\n\n<두번째 게임은 맞춤법게임입니다.>\n\n");
printf("\n%s\n\n 1.%s\n 2.%s\n\n(한글입력)",qtn[keynum],tl[keynum],fl[keynum]);
scanf("%s",answer);

fclose(fp);


if(strcmp(tl[keynum],answer) == 0)
{
  printf("\n 맞습니다.");
}

else if(strcmp(fl[keynum],answer) == 0)
{
    printf("틀렸습니다.");
}

else
{
    printf("다시 입력하시오.");
}

//printf("\n%s\n\n 1.%s\n 2.%s\n\n(한글입력)",qtn[keynum],tl[keynum],qtn[keynum]);

return 0;

}
