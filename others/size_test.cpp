#include <iostream>
#include <string>

struct dynamic_string_array {
  int capacity, size;
  std::string *user_input;

  dynamic_string_array() {
    capacity = 0;
    size = 0;
    user_input = nullptr;
  }
  ~dynamic_string_array() {
    delete [] user_input;
  }

  void push_back(std::string const &s) {
    if (size == capacity) {
      int new_capacity = capacity ? 16 : capacity * 1.5;
      std::string *new_user_input = new std::string[new_capacity];
      for (int i = 0; i < size; ++i) {
        new_user_input[i] = user_input[i];
      }
      // ---
      delete [] user_input;
      user_input = new_user_input;
      capacity = new_capacity;
    }
    user_input[size] = s;
    ++size;
  }
};

int main() {
  dynamic_string_array user_input;

  for (std::string s; std::cin >> s;) {
    user_input.push_back(s);
  }

  //...
}
