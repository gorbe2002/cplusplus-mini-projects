/*
Write a 99bottles.cpp program that prints the verses of the “99 Bottles” song.
*/

#include <iostream>

int main() {
  for (int i = 99; i > 0; i--) {
    if (i == 2) {
      std::cout << i << " bottles of pop on the wall.\nTake one down and pass it around.\n" << i - 1 << " bottle of pop on the wall.\n";
    } else if (i == 1) {
      std::cout << i << " bottle of pop on the wall.\nTake one down and pass it around.\n" << i - 1 << " bottles of pop on the wall.\n";
    } else {
      std::cout << i << " bottles of pop on the wall.\nTake one down and pass it around.\n" << i - 1 << " bottles of pop on the wall.\n";
    } 
  }
}
