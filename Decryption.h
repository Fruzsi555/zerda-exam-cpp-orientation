#ifndef DECRYPTION_H
#define DECRYPTION_H

#include <iostream>
#include <string>
#include <fstream>

class Decryption {
private:
  std::string original_text;
  std::string decrypted_text;
  int shift_num;
public:
  Decryption();
  std::string decryption(std::string, int);
  virtual ~Decryption();
};

#endif // DECRYPTION_H
