#include <iostream>

int main()
{
  int sum=0,val=0,i=0;
  // read until end-of-file, calculating total of all values read
  std::cout << "Enter some numbers separated by spaces or new lines, finish by issuing an end-of-file command" << std::endl;
  while(std::cin >> val)
    {
    sum += val;
    ++i;
    }
  std::cout << "Sum is: " << sum << " number of numbers input: " << i << std::endl;
  return 0;
}
