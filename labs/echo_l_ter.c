#include<stdio.h>

int main(int argc, char* argv[]){

  int i;
  if(argc <= 1){
    printf("Enter something");
  }
  else{
    for(i = 0; i<argc ; i++){
      printf("%s", argv[i]);
    }
  }


  return 0;
}