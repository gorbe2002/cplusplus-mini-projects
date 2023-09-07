/*
Write a program to find the sum of even numbers and the product of odd numbers in a given vector {2, 4, 3, 6, 1, 9}.
*/

#include <iostream>
#include <vector>

int main() {
  int sum = 0;
  int product = 1;

  std::vector<int> given = {2, 4, 3, 6, 1, 9};

  for (int i = 0; i < given.size(); i++) {
    if (given[i] % 2 == 0) {
      sum += given[i];
    } else {
      product *= given[i];
    }
  }

  std::cout << "Sum of even numbers is " << sum << "\n";
  std::cout << "Product of odd numbers is " << product << "\n";

}
