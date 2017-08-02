/*
  CSE 109
  Cole Tomlinson
  cmt218
  text filter program
  Program #1
*/


//include statements for necessary libraries
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){

  int i;

  //case where user inputs -u for uppercase
  if(argc >1 && strcmp(argv[1], "-u") == 0){
    while((i = getchar()) != EOF){
      int outch = toupper(i);
      putchar(outch);
    }
  }
  
  //case where user inputs -l for lowercase  
  else if(argc >1 && strcmp(argv[1],"-l") == 0){
    while((i = getchar()) != EOF){
      int outch = tolower(i);
      putchar(outch);
    }
  }

  //case where user has no additional command line args
  else if(argc == 1){   
  while((i = getchar()) != EOF){
    int outch = i;

    putchar(outch);
  }
  }

  //handles any other unrecognized arg with an error message
  else {
    fprintf(stderr,"Invalid command line option %s \n",argv[1]);
  }

  return 0;
}
