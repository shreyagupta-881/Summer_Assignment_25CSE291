#include<stdio.h>
int main(){
    int arr[10],n,i,sum=0;
    printf("Enter size");
    scanf("%d",&n);
    printf("Enter Elements");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
     sum+=arr[i];
          printf("%d\n",sum);
          printf("%2f",(float)sum/n);
return 0;
    }
    