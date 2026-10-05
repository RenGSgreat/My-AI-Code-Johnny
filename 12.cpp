#include<stdio.h> 
int main(){
    int arr[15]={1,3,6,10,15,21,28,36,45,55,66,78,91,105,120};
    int start,end;
    int i;
    printf("ÇëÊäÈë£»\n");
    scanf("%d %d",&start,&end);
    start=start-1;
    end=end-1;
	if(start<0||end>14||start>end){
		return 0;
	}
	for(i=start;i<=end;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n") ;
   return 0;	
}
	
	
	
	
	
	
	

