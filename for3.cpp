#include <iostream>

int main(){
  int num1 = 0,num2 = 0,sum = 0;
  std::cout << "Enter two numbers with the first being lower:" << std::endl;
  std::cin >> num1 >> num2;
  for(int i = num1; i <= num2;++i)
    sum += i;
  std::cout << "The sum between " << num1 << " and " << num2 << " is " << sum << std::endl;
  return 0;
}
