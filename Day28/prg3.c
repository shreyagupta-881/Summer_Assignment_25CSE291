#include<stdio.h>
struct contact{
    long long phone;
    char name[15];
    
};
int main(){
   struct contact c[5];
   int n,i;
   printf("No. of contacts");
   scanf("%d",&n);
   for(i=0;i<n;i++){
   printf("Enter Name\n");
   scanf("%s",&c[i].name);
   printf("Enter contact number\n");
   scanf("%lld",&c[i].phone);}

   printf("==========================\n");
   printf("CONTACT LIST\n");
   
   for(i=0;i<n;i++){

   printf("%s-%lld\n",c[i].name,c[i].phone);
   return 0;
}
}