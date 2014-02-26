#include <iostream>

int main(){
  int num1=0,num2=0,sum=0,temp=0;
  std::cout << "Please enter two numbers: " << std::endl;
  std::cin >> num1 >> num2;
  if(num1 == num2)
    std::cout << "Numbers are equal, nothing to do" << std::endl;
  else if (num1 > num2){
    for(temp = num2; temp <= num1; ++temp)
      sum += temp;
    std::cout << "The sum of all the numbers between " << num2 << " and " << num1 << " inclusive is ";
  }
  else
  for(temp = num1; temp <= num2; ++temp)
    sum += temp;
std::cout << "The sum of all the numbers between " << num1 << " and " << num2 << " inclusive is ";
  std::cout << sum << std::endl;
  return 0;
}

