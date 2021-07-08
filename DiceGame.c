#include<stdio.h>
#include<stdlib.h>

int main(){

  int i,j;
  char name[20];

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Rolling the dice..\n");
 
  i = rand() %6 + 1;
  j = rand() %6 + 1;

  printf("Die 1: %d\n",i);
  printf("Die 2: %d\n",j);

  printf("Total value: %d\n",i+j);

  if(i+j > 7)printf("%s won!\n",name);
  else printf("%s lost.\n",name);
  return 0;
}
