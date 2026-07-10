#include<stdio.h>
int main(){
    int score=0,ans;
   printf("Welcome to the Quiz Application\n");
   printf("=================================\n");
   printf("This Quiz contain General Knowlegdge Questions\n");
   printf("QUESTION 01\n");
   printf("Who is known as the 'Father of Nation'?\n");
   printf("1. Mahatma Gandhi\n2. JawaharLal Nehru\n3. Subhash Chandra Bose\n");
   printf("Enter your Answer\n");
   scanf("%d",&ans);
   if(ans==1){
    score++;
   }
   printf("=================================\n");
   printf("QUESTION 02\n");
   printf("What is the capital of India?\n");
   printf("1.Jaipur\n2. New Delhi\n3. Mathura\n");
   printf("Enter your Answer\n");
   scanf("%d",&ans);
   if(ans==2){
    score++;
   }
   printf("=================================\n");
   printf("QUESTION 03\n");
   printf("What is the National Bird of India?\n");
   printf("1.Crow\n2. Peacock\n3. Parrot\n");
   printf("Enter your Answer\n");
   scanf("%d",&ans);
   if(ans==2){
    score++;
   }
   printf("=================================\n");
   printf("YOUR SCORE:%d\n",score);
   if(score==3){
    printf("Very Good\n");
   }
   else{
    printf("Keep Practicing!\n");
   }
return 0;
}