#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int l=0,h=6,mid,key=5;
    while(l<=h){
        mid=(l+h)/2;

        if(arr[mid]==key){
            printf("Found");
            return 0;
        }
        else if(arr[mid]<key)
              l=mid+1;
        else
              h=mid-1;
    }
    printf("Not Found");

    return 0;
}    