#include <iostream>
using namespace std;

int main(){
  float mins = 0, MB = 0, txt = 0, total = 0;
  cout << "This calculates the estimated cost of whatever month's usage on three's 321 payg\n";
  cout << "Please enter\n";
  cout << "Minutes used:" << endl;
  cin >> mins;
  cout << "Texts used:" << endl;
  cin >> txt;
  cout << "Megabytes used:" << endl;
  cin >> MB;
  total = (0.03*mins) + (0.02*txt) + (0.01*MB);
  cout << "Total paid " << u8"156"  << total << endl;
  return 0;
}
