#include <stdio.h>

int kk;
int nn;


int main(){
printf("\n                    당신은 명함을 받았다.\n       ○ △ □ 가 그려진 명함 뒤엔 전화번호가 적혀있다.\n\n"); 
printf("\n                  ...전화를 하시겠습니까?\n\n");
printf("                            1.Yes\n");
printf("                            2.No\n");
printf("\n                 (숫자입력):");

scanf("%d",&nn);

if(nn==1){
    printf("\n            오징어게임에 오신 여러분을 환영합니다.\n       456분의 1의 확률을 뚫고 최후의 일인이 되십시오.\n");
    printf("\n                     1. 첫번째 게임 시작.");
    printf("\n                     2. exit");
    printf("\n             (숫자입력):");
    scanf("%d",&kk);
    if(kk==1){
       //가위바위보 고고
    }
    else if(kk==2){
      return 0;
    }
}

else if(nn==2){
    return 0;
}

}
