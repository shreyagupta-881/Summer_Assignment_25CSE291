#include<stdio.h>
int main(){
    int arr[100],n,i,sum=0,count=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("enter the elements;");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
        count++;
    }
    printf("Sum of array is:%d",sum);
    int average= sum/count;
    printf("Average of a array:%d\n",average);

    return 0;
}
