#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "stack.hpp"
#include "autotest.hpp"

using namespace std;

int main(){
  Autotest();
  Stack stack;
  cout << "Hello, user\nFor help use command \'-help\'\n";
  while (true){
    cout << "Please, enter your command: ";
    string current_command;
    getline(cin, current_command);
    if (current_command == "-help"){
      cout << "List of commands:\n    \'-help\' to get help\n    \'-add_str\' to put a string to stack\n    \'-get_str\' to get a string from stack\n    \'-get_str_len\' to get a length of a string from stack\n    \'-del_str\' to delete a string from stack\n    \'-size\' to get the size of a stack\n    \'-quit\' to quit the programm\n";
    }
    else if (current_command == "-quit"){
      break;
    }
    else if(current_command == "-add_str"){
      cout << "Please, enter your string: ";
      string s;
      getline(cin, s);
      stack.add_string(s);
      cout << "String successfully added to stack\n";
    }
    else if(current_command == "-get_str"){
      string s;
      stack.copy_string_to(&s);
      if (s != ""){
        cout << s << endl;
      }
    }
    else if(current_command == "-get_str_len"){
      int l = stack.get_string_length();
      if (l != 0){
        cout << l << endl;
      }
    }
    else if(current_command == "-del_str"){
      bool flag = stack.delete_last();
      if (flag){
        cout << "Last string deleted successfully\n";
      }
    }
    else if(current_command == "-size"){
      cout << "Current stack size is " << stack.get_amount_of_elements() << " strings\n";
    }
    else{
      cout << "Unrecognised command \'" << current_command << "\', please enter \'-help\' for help\n";
    }
  }
  return 0;
}
