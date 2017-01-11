#include "FileHandling.h"

FileHandling::FileHandling() {
}

FileHandling::FileHandling(std::string filename1, std::string filename2) {
  this->input_filename = filename1;
  this->output_filename = filename2;
  content = "";
}

std::string FileHandling::read_from_file() {
  std::ifstream input_file;
  input_file.open(input_filename);
  std::string buffer;
  content = "";
  while (getline(input_file, buffer)) {
    content += buffer + "\n";
  }
  input_file.close();
  return content;
}

void FileHandling::write_to_file(std::string decrypted_text) {
  std::ofstream output_file;
  output_file.open(output_filename);
  output_file << decrypted_text;
  output_file.close();
  return;
}

FileHandling::~FileHandling() {
}
