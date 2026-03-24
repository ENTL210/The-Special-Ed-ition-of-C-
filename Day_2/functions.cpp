#include <iostream>
#include <string>
#include "functions.h"

void greeting(std::string name)
{
  std::cout << "Greeting, " << name << "\n";
}

std::string prompt_for_name() {
  std::string name = "";
  std::cout << "What is your name: ";
  std::getline(std::cin, name);
  return name;
}