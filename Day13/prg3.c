#include<stdio.h>
int main(){
    int arr[100],n,i,largest,smallest;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("enter the elements;");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    smallest=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }}
    printf("The Largest Element of Array:%d\n",largest);
    printf("The Smallest Element of Array:%d",smallest);
    return 0;
}