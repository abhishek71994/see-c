#include<stdio.h>
#include "dbg.h"
#include "ex22.h"

const char *MY_NAME = "Zed e. Shaw";

void scope_demo(int count){
  log_info("The value of count %d", count);

  if(count>10){
    int count = 100;
    log_info("Count in this scope is %d", count);
  }

  log_info("count is at exit: %d", count);

  count = 3000;

  log_info("count after assigning %d", count);
}

int main(int argc, char *argv[]){

  log_info("My name: %s, age: %d", MY_NAME, get_age());

  set_age(100);

  log_info("My age is now: %d", get_age());
  
  // size extern test

  log_info("The size is: %d", THE_SIZE);

  THE_SIZE = 9;

  log_info("The size now is: %d", THE_SIZE);
  print_size();
  
  int count = 50;
  scope_demo(count);
}


