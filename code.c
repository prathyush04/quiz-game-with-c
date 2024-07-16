#include <stdio.h>

int main() {
 int i,j;
 int ans1,ans2,ans3;
 int point1,point2,point3;

 printf("enter 7 to start the game\n\n");
 printf("enter 0 to exit\n\n");
 scanf("%d",&i);
 
 if (i==7){
     printf("game has started\n\n");
 }
 else if (i==0){
     printf("game has been stopped\n\n");
    
 }
 else{
     printf("invalid input\n\n");
 }
 
 if(i==7){
     printf("A) who is the CEO of Google?\n");
     printf("1) Satya Nadella\n");
     printf("2) Sundar Pichai\n");
     printf("3) Narayana Murthy\n");
     printf("4) Elon Musk\n");
     scanf("%d",&ans1);
     if(ans1==2){
         printf("Congrats you've won 5 points\n\n");
         point1=5;
     }
     else{
         printf("Oops wrong answer\n\n");
         point1=0;
     }
     
      printf("A) what is the fullform of WWW?\n");
     printf("1) World Wide Web\n");
     printf("2) WOrld Winter Web\n");
     printf("3) Winter Web Wide\n");
     printf("4) World web Wide\n");
     scanf("%d",&ans2);
     if(ans2==1){
         printf("Congrats you've won 5 points\n\n");
         point2=5;
     }
     else{
         printf("Oops wrong answer\n\n");
         point2=0;
     }
         printf("A) what is int? \n");
     printf("1) Function\n");
     printf("2) Datatype\n");
     printf("3) Structure\n");
     printf("4) Union\n");
     scanf("%d",&ans3);
     if(ans3==2){
         printf("Congrats you've won 5 points\n\n");
         point3=5;
     }
     else{
         printf("Oops wrong answer\n\n");
         point3=0;
     }
     j=point1+point2+point3;
 printf("you've scored: %d",j);
 }
 
 return 0;
}
