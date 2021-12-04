
struct DATA{
char truelist[50];
char falselist[50];
char question[100];
char answer[50];
};

void mat(){

int choice = 0;

//랜덤함수로 0-3중에서 하나의 수를 뽑는다. 
int i;

srand((unsigned int)time(NULL));
int keynum;
keynum = rand() % 4 ; 

printf("0-3 중 랜덤 수는 %d 이다.\n",keynum);
                     
//파일입출력으로 구조체에서 keynum에 해당하는 번호의 buf를 가져온다. 
struct DATA info = { 0 }; 


FILE* fp = NULL;

fp=fopen("matquiz.txt","r");

while (feof(fp)==0)
{
   

   fscanf(fp,"%s %s %s %s\n",info.truelist,info.falselist,info.question,info.answer);
   printf(".");  
   
  
}  
fclose(fp);

   printf("%s %s %s %s\n",info.truelist,info.falselist,info.question,info.answer); 

 

}
