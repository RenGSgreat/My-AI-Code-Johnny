#include <stdio.h> 
int main(void){
	int choice;
	printf("我是你爹吗？") ;
	printf("1表示是的\n");
	printf("2表示不是\n");
	printf("请选择\n");
	scanf("%d",&choice);
if(choice==1)	{
	printf("不管你选什么都是我的儿子！\n") ;
}
else if (choice==2) {
	printf("不管你选什么都是我的儿子！\n") ;
}
else{
	printf("别乱按！孙子\n"); 
}
	return 0;	
}
