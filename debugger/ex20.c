#include "dbg.h"

#include<stdlib.h>
#include<stdio.h>

void test_debug(){
  debug("I have black hair");

  debug("I am %d years old", 29);
}

void test_log_err(){
  log_err("I believe everything is broken.");
  log_err("There are %d problems in %s", 0, "space");
}

int main(int argc, char *argv[]){
  check(argc == 2, "Need an argument.");

  test_debug();
  test_log_err();
  return 0;

error:
  return 1;
}