#include <iostream>
using namespace std;

int main(){
  float Trans=0.5,s=8,c=10,m=0.7;
  cout << "This calculates the total science that you can get according to the science formula on the KSP wiki\n";
  cout << "The formula being C*M*(1-(1-S*T/C)^t)\n";
  cout << "Where S is the science,\n";
  cout << "M is the science modifier based on location/situation,\n";
  cout << "T is the transmission efficiency,\n";
  cout << "C being the science cap,\n";
  cout << "t the number of times the experiment is repeated" << endl;
  cout << "Choose t now:" << endl;
  int itot;
  cin >> itot;
  cout << "Using the \"EVA report\" science object, with S = " << s << ", C = "<< c <<" and T = "<< Trans <<", choosing an arbitrary M of "<< m <<" and a total of" << itot << "times being run\n";
  cout << "A comparison between multiple rocket returns and transmissions shall be calculated here." << endl;
  float sumT,sum,temp1,temp2,temp3,temp4;
  temp1 = 1 - (s*Trans/c);
  temp3 = 1 - (s/c);
  cout << temp3 << endl;
  for (int t=1;t < itot;++t){
    temp2 = temp1*(1-(s*Trans/c));
    temp1 = temp2;
    temp4 = temp3*(1-(s/c));
    temp3 = temp4;
  }
  cout << temp3 << endl;
  sumT = c*m*(1-temp1);
  sum = c*m*(1-temp3);

  cout << "Multiple return total: " << sum << endl;
  cout << "Transmission total: " << sumT << endl;
  return 0;
}
