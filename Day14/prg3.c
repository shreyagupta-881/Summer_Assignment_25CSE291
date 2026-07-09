#include<stdio.h>
int main(){
    int arr[100],n,i,largest,second;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("enter the elements;");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest=second=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
           }
        else if(arr[i]>second&&arr[i]!=largest){
            second=arr[i];
        }}
    printf("The Second Largest Element of Array:%d\n",second);
   
    return 0;
}