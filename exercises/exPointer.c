#include<stdio.h>

void printFunc(int* age, char** name, int count){
  char **ind = name;
  int i = 0;
  for(i = 0; i<count; i++){
    printf("%s has %d years alive.\n", *(ind + i), *(age+i));
  }
}

int main(int argc, char* argv[]){
  int ages[] = {23, 43, 32, 22 , 44};
  char* names[] = {
    "Alan", "Frank", "Lisa", "Edmund", "Carlos"
  };

  int count = sizeof(ages)/sizeof(int);

  int i = 0;

  for(i = 0; i<count; i++){
    printf("%s has %d years alive.\n", names[i], ages[i]);
  }

  printf("------- \n");

  int *cur_age = ages;
  char **cur_name = names;

  for(i = 0; i<count; i++){
    printf("%s has %d years alive.\n", *(cur_name + i), *(cur_age + i));
  }

  printf("----\n");  
  for(i = 0; i<count; i++){
    printf("%s has %d years alive.\n", cur_name[i], cur_age[i]);
  }
  printf("----\n");  
  printFunc(ages, names, count);
}