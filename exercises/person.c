#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>

struct Person {
  char *name;
  int age;
};

struct Person *Person_create(char *name, int age) {
  struct Person *who = malloc(sizeof(struct Person));
  assert(who != NULL);

  who->name = strdup(name);
  who->age = age;

  return who;
};

void Person_destroy(struct Person *who){
  assert(who != NULL);
  printf("Address of the person freed is %p\n", who);
  free(who->name);
  free(who);
}

void Person_print(struct Person *who){
  assert(who != NULL);
  printf("Address of the person is %p\n", who);
  printf("%s is of age: %d\n", who->name, who->age);
}

int main(int argc, char* argv[]){

  struct Person *joe = Person_create("Joe", 42);
  printf("Joe's memory: %p\n", joe);
  Person_print(joe);

  Person_destroy(joe);

  return 0;
}