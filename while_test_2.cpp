#include <iostream>

int main(){
  int num1=0,num2=0,sum=0,temp=0;
  std::cout << "Enter two numbers, with the first being the lowest:" << std::endl;
  std::cin >> num1 >> num2;
  temp = num1;
  while(temp <= num2){
    sum += temp;
    ++temp;
  }
  std::cout << "The sum of numbers between " << num1 << " and " << num2 << " is " << sum << std::endl;
  return 0;
}
