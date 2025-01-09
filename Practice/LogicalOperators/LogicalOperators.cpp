#include <iostream>

// && = check if two conditions are true
// || = check is at least one of two conditions is true
// ! = reverses the logical state of its operand

int main()
    {
      int temp;
      bool sunny = false;

      std::cout << "Enter the temperature: ";
      std::cin >> temp;

      if(temp <= 0 || temp >= 30)
      {
        std::cout << "The temperature is bad!\n";
      }
      else{
        std::cout << "the temperature is good!\n";
        }

      if (!sunny)
      {
        std::cout << "It is cloudy";
      }
  else
    {
    std::cout << "It is sunny";
    }
      return 0;
    }