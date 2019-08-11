#include<stdio.h>
int main()
{

   int a;
   printf("enter your age : ");
   scanf("%d",&a);
   
   if(a>=18)
   printf("you are eligible for playing this game");
   
   if(a<18)
   printf("you are not eligible for playing this game");
