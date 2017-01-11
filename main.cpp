#include <iostream>
#include <string>
//#include "FileHandling.h"
#include "Decryption.h"
//#include "ArgumentHandling.h"

int main(int argc, char* argv[]) {

  char command_s[] = "-s";
  char command_o[] = "-o";

  Decryption test;
  test.decryption("input.txt", "output.txt", 3);

  return 0;
}
