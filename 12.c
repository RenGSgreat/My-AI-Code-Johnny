#include <stdio.h>
int  main(){
     int arr[15]={1,3,6,10,15,21,28,36,45,55,66,78,91,105};
     int start,end;
     scanf("%d %d",&start,&end);
        if (start<0||end>14||start>end)
         {
            return 0;
         }
         start=start-1;
    for(int i=start;i<end;i++){
        printf("%d ",arr[i]);
     }
    return 0;
}