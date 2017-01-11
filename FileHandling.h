#ifndef FILEHANDLING_H
#define FILEHANDLING_H

#include <iostream>
#include <string>
#include <fstream>

class FileHandling {
private:
  std::string input_filename;
  std::string output_filename;
  std::string content;
public:
  FileHandling(std::string, std::string);
  std::string read_from_file();
  void write_to_file(std::string);
  ~FileHandling();
};

#endif // FILEHANDLING_H
