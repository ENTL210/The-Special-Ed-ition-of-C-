#include <iostream>
#include <string>
#include "functions.h"


int main() {
  std::string userName = prompt_for_name();
  greeting(userName);  
  return 0;
}
