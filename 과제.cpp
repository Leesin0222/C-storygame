
#include "stdio.h"
typedef struct MyStruct {
	char name[23];//이 름 
	int moonsang;//문상 
	int don;//돈 
}Mystruct;
//1번을 고를시 실행 
void moonsang(){
	int count;
	printf("몇 개를 받고싶느냐?");
    	scanf("%d",&count);
    	printf("문상이란 속쇠보단 치킨이라는 금이 더 귀하느니라..\n\n당신은 %d마리의 치킨을 문상대신 받았다.야호(?))\n\n",count) ;
    	for(int i=0;i<count;i++){
    		printf("랜덤 치킨 바코드:llll11l1ll11lIII!l!II!l\n");
		}
		printf("-----------------끝----------------------------------") ;
	
}
//2번을 고를시 실행 
void money(){
	printf("신이 말했다..치킨이라는 큰 숲을 보았다면 이렇게 되진않았을텐데...\n\n현금 인출기가 고장나서 당신은 현금을 받지 못했답니다..\n\n\n\n\n-----------------끝----------------------------------");
	
}
//3번을 고를시 실행 
void fresh(struct MyStruct* cla){

	printf("\n이름이 무엇이더냐.... : ");
	scanf("%s", &cla->name);
	printf("받고싶은 치킨마리수는? : ");
	scanf("%d", &cla->moonsang);
	printf("받고싶은 100원갯수는? : ");
	scanf("%d", &cla->don);
	printf("\n신이 말했다... 이거 다 너꺼다!! \n\n");
		for(int i=0;i<cla->moonsang;i++){
    		printf("%s의랜덤 치킨 바코드:llll11l1ll11lIII!l!II!l\n",cla->name);
		}
			for(int i=1;i<cla->don;i++){
    		printf("신이 %s의 통장에 %d00000원을 넣었다\n",cla->name,i);
		}

}
 int main(){
 	Mystruct Cookie;
    int one;
    printf("********************이용진이라는 신을 만났다(단편스토리게임)**********************\n\n어느 날 당신은 신을 만났다...이용진이라는 신...그는 말했다.\n\n문상과 돈 둘 중에 뭘 고를래? 1.문상 2.현금 3.난 자연인이될래요\n");
    scanf("%d",&one);
    if(one==1){
       moonsang();
       return 0;
	}
	else if(one==2){
		money();
	}
	else if(one==3){
		fresh(&Cookie);
	}
	else{
		printf("잘못선택했으니 아무것도 받지마라 넌 눈이 없냐?");
	}
 }
 

  
  
  
  
  
  
  
  
  
  
  
  
  
