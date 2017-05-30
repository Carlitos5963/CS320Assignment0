#include <stdio.h>
#include <string.h>

int main(){
char name[256];
char *cp;
cp = name;
int i;
int j;

printf("Assignment #0-1, Jose Carlos Gomez, JoseCarlosGomez69@gmail.com\n");

printf("What is your name?\n");

for(i = 0; i < 256; i++){
scanf("[^\n]%c", (&name[i]));
if(name[i] == '\n')
break;
}

int len = strlen(name);


printf("Hello ");
for(j = 0; j < len-1; j++){
printf("%c", name[j]);
}
printf("!");

}
