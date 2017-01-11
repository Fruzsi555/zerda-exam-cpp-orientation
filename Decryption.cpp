#include <iostream>
#include <string>
#include "Decryption.h"

using namespace std;

Decryption::Decryption() {
  original_text = "";
  decrypted_text = "";
  shift = 0;
}

void Decryption::set_input(string original_text) {
  this->original_text = input;
}

string Decryption::get_output() {
  return decrypted_text;
}

void Decryption::set_shift_num(int shift) {
  this->shift_num = shift;
}

string Decryption::decryption(string original_text, int shift_num) {
  string decrypted_text;
  char char_to_shift;
  char buffer_word = 'a';
  for (int i = 0; i < original_text.size(); ++i) {
    word_to_shift = original_text[i];
      if (isalpha(char_to_shift)) {
        if (islower(char_to_shift)) {
          buffer_word = 'a';
        } else {
          buffer_word = 'A';
        }
        char_to_shift = (char_to_shift - buffer_word + shift_num) % 26 + buffer_word;
  }
  decrypted_text += char_to_shift;
  }
  return decrypted_text;
}

Decryption::~Decryption() {
}
