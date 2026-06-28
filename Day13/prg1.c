#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("enter the elements;");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("elements are\n");
    for(i=0;i<n;i++){
          printf("%d\n",arr[i]);
}
    return 0;
}