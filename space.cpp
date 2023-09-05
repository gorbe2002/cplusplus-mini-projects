/* 
Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.

Write a space.cpp program that helps him keep track of his target weight by:

  - It should ask him what his earth weight is.
  - Ask him to enter a number for the planet he wants to fight on.
  - It should then compute his weight on the destination planet.
*/

#include <iostream>

int main() {
  
  double weight_earth;
  int number;
 
  std::cout << "What is your weight on Earth (in lbs)?: ";
  std::cin >> weight_earth;

  std::cout << "Enter a number for the planet you want to fight on: ";
  std::cin >> number;

  switch (number) {
    case 1:
      std::cout << "Your weight on Mercury is " << weight_earth * 0.38 << " lbs.\n";
      break;
    case 2:
      std::cout << "Your weight on Venus is " << weight_earth * 0.91 << " lbs.\n";
      break;
    case 3:
      std::cout << "Your weight on Mars is " << weight_earth * 0.38 << " lbs.\n";
      break;
    case 4:
      std::cout << "Your weight on Jupiter is " << weight_earth * 2.34 << " lbs.\n";
      break;
    case 5:
      std::cout << "Your weight on Saturn is " << weight_earth * 1.06 << " lbs.\n";
      break;
    case 6:
      std::cout << "Your weight on Uranus is " << weight_earth * 0.92 << " lbs.\n";
      break;
    case 7:
      std::cout << "Your weight on Neptune is " << weight_earth * 1.19 << " lbs.\n";
      break;
    default:
      std::cout << "Not a valid planet!\n";
      break;
  }
}
