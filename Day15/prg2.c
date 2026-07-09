#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("enter the elements;");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp=arr[0];
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    printf("array after left rotation are\n");
    for(i=0;i<n;i++){
          printf("%d\n",arr[i]);
}
    return 0;
}