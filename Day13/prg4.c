#include<stdio.h>
int main(){
    int arr[100],n,i,even=0,odd=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("enter the elements;");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Number Of Even Number:%d\n",even);
    printf("Number Of Odd Number:%d",odd);

    return 0;}
