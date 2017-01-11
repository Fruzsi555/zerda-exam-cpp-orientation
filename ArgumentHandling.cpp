#include "ArgumentHandling.h"

#include <iostream>
#include <string>

ArgumentHandling::ArgumentHandling(int argc, char* argv[], string filename1, string filename2) {
  this->argc = argc;
  this->argv = argv;
  this->input_filename = filename1;
  this->output_filename = filename2;
}

ArgumentHandling::~ArgumentHandling() {

}
