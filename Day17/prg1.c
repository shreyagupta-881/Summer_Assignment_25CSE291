#include<stdio.h>
int main(){
    int arr1[100],arr2[100],n,i;
    printf("Enter the size ");
    scanf("%d",&n);
    printf("enter the elements of array1;");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter the elements of array2;");
    for(i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    printf("merge array are\n");
    for(i=0;i<n;i++){
          printf("%d",arr1[i]);
}
for(i=0;i<n;i++){
          printf("%d",arr2[i]);
}
    return 0;
}