#include<stdio.h>
int main(){
    int arr[100],n,i,sum=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("enter the elements;");
    for(i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("missing number=%d",n*(n+1)/2-sum);
    return 0;
}