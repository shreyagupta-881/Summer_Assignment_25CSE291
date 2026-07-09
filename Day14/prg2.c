#include<stdio.h>
int main(){
    int arr[100],n,i,element,count=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("enter the elements;");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   printf("enter the element whose frequency need to find");
   scanf("%d",&element);
   for(i=0;i<n;i++){
           if(arr[i]==element){
               count++;
           }
        }
    printf("Frequeny of %d=%d",element,count);
    return 0;
        }