#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,2,3,5,3,2,7,7,6,6,6},n=15,i,j;
    
    for(i=0;i<n;i++)
    {
       for(j=0;j<i;j++)
       {
        if(arr[i]==arr[j])
            break;
       }
        if(i==j)
            printf("%d\n",arr[i]); 
}

    return 0;
    }