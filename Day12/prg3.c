#include<stdio.h>
void fibonacci(int num){
int a=0,b=1,c,i;
    

    for(i=1;i<=num;i++){
            printf("%d",a);
            c=a+b;
            a=b;
            b=c;
    }
        
    }
int main(){
    int num,f;
    printf("Enter the number of terms want");
    scanf("%d",&num);
    
    fibonacci(num);
    
    return 0;
}