
#include "stdio.h"
typedef struct MyStruct {
	char name[23];//�� �� 
	int moonsang;//���� 
	int don;//�� 
}Mystruct;
//1���� ���� ���� 
void moonsang(){
	int count;
	printf("�� ���� �ް�ʹ���?");
    	scanf("%d",&count);
    	printf("�����̶� �Ӽ躸�� ġŲ�̶�� ���� �� ���ϴ��϶�..\n\n����� %d������ ġŲ�� ������ �޾Ҵ�.��ȣ(?))\n\n",count) ;
    	for(int i=0;i<count;i++){
    		printf("���� ġŲ ���ڵ�:llll11l1ll11lIII!l!II!l\n");
		}
		printf("-----------------��----------------------------------") ;
	
}
//2���� ���� ���� 
void money(){
	printf("���� ���ߴ�..ġŲ�̶�� ū ���� ���Ҵٸ� �̷��� �����ʾ����ٵ�...\n\n���� ����Ⱑ ���峪�� ����� ������ ���� ���ߴ�ϴ�..\n\n\n\n\n-----------------��----------------------------------");
	
}
//3���� ���� ���� 
void fresh(struct MyStruct* cla){

	printf("\n�̸��� �����̴���.... : ");
	scanf("%s", &cla->name);
	printf("�ް���� ġŲ��������? : ");
	scanf("%d", &cla->moonsang);
	printf("�ް���� 100��������? : ");
	scanf("%d", &cla->don);
	printf("\n���� ���ߴ�... �̰� �� �ʲ���!! \n\n");
		for(int i=0;i<cla->moonsang;i++){
    		printf("%s�Ƿ��� ġŲ ���ڵ�:llll11l1ll11lIII!l!II!l\n",cla->name);
		}
			for(int i=1;i<cla->don;i++){
    		printf("���� %s�� ���忡 %d00000���� �־���\n",cla->name,i);
		}

}
 int main(){
 	Mystruct Cookie;
    int one;
    printf("********************�̿����̶�� ���� ������(�����丮����)**********************\n\n��� �� ����� ���� ������...�̿����̶�� ��...�״� ���ߴ�.\n\n����� �� �� �߿� �� ����? 1.���� 2.���� 3.�� �ڿ����̵ɷ���\n");
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
		printf("�߸����������� �ƹ��͵� �������� �� ���� ����?");
	}
 }
 

  
  
  
  
  
  
  
  
  
  
  
  
  
