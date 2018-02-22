#include <stdio.h>
#include <string.h>

int main(){
  char name[256];
  char *cp;
  cp = name;
  int i,j;

  //Assignment tagline
  printf("Assignment #0-1, Jose Carlos Gomez, JoseCarlosGomez69@gmail.com\n");

  printf("What is your name?\n");

  //Separate each char from user input and place in array
  for(i = 0; i < 256; i++){
    scanf("%c", &name[i]);
    if(name[i] == '\n')
    break;
  }

  //Length of input
   int len = strlen(name);


  //Print name using the char array
  printf("Hello ");
  for(j = 0; j < len-1; j++){
    printf("%c", name[j]);
  }
  printf("!\n");

}
