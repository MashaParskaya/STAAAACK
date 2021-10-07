#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define max_capacity 100

class Stack{
private:
  int total_current_length;
  vector<string> stack_buffer;
public:
  Stack();

  void clear_stack();

  int get_amount_of_elements();

  void save_stack_to_buffer();

  void add_string(const string tmp);

  void load_stack_from_buffer();

  int get_string_length();

  void copy_string_to(string* s);

  bool delete_last();

  ~Stack();

};
#endif
