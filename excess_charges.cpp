#include <iostream>
#include <string>
using namespace std;

int main (){
  cout << "Calculates cost of excess usage of one item, enter item type: (types allowed: minute, text, MB" << endl; // it does accept other types, but those will make the most sense
  string type,minute = "minute",text = "text",MB = "MB";
  cin >> type;
    if((type != minute) && (type != text) && (type != MB)){
    cerr << "\"" << type << "\"" << " not of the aforementioned types, exiting" << endl;      
    return -1;    
    }
  cout << "Enter charge for excess in pounds per " << type <<":" << endl;
  float charge=0,excess=0;
  cin >> charge;
  cout << "Enter allowance:" << endl;
  float allowance=0,used=0,extra=0;
  cin >> allowance;
  cout << "Enter used:" << endl;
  cin >> used;
  extra = used - allowance;
  excess = charge*extra;
  cout << "You will be charged " << excess << " pounds for having used " << extra << " " << type;
  if(type != "MB")
    cout << "s";
  cout << " over the allowance of " << allowance << endl;
  return 0;
}
