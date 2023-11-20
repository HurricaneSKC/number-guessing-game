#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  std::srand(std::time(nullptr));
  int secretNumber = std::rand() % 100 + 1;
  int guess =0;

  std::cout << "Guess a number between 1 and 100: ";

  while(true) {
    std::cin >> guess;
    if(guess == secretNumber) {
      std::cout << "You guessed correctly";
      break;
    } else if (guess < secretNumber) {
      std::cout << "Too low, try again: ";
    } else {
      std::cout << "Too high, try again: ";
    }
  }

  return 0;
}