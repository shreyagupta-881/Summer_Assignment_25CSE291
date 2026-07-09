#include<stdio.h>
int main(){
  int arr[100],n,i,search;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("enter the elements;");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter The element to search");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(arr[i]==search){
            printf("Element found at position:%d",i);
            return 0;
        }
}
printf("Element not found");
return 0;
}