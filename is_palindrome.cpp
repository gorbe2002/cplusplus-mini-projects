#include <iostream>
#include <string>
using namespace std;

// Define is_palindrome() here:
string is_palindrome(string text) {
  int left = 0;
  int right = text.length() - 1;

  while (right >= left) {
    if (text[left] == text[right]) {
      left++;
      right--;
    } else {
      return "false";
    }
  }
  return "true";
}

int main() {
  
  cout << is_palindrome("madam") << endl;
  cout << is_palindrome("ada") << endl;
  cout << is_palindrome("lovelace") << endl;
  
}
