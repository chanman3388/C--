#include <iostream>
using namespace std;

int main() {
  double airflow,ans,feet = 3.2808399, conv = feet*feet*feet;
  int choice;
  cout << "Please indicate conversion direction\n";
  cout << "1: m3/h to cfm\n";
  cout << "2: cfm to m3/h" << endl;
  cin >> choice;
  while (choice != 1 && choice != 2) {
    cout << "Invalid choice, please enter 1 or 2:" << endl;
    cin >> choice;
  }
  cout << "Please enter airflow:" << endl;
  cin >> airflow;
  if (choice == 1) {
    ans = (airflow*conv)/60;
    cout << airflow << " m3/h is " << ans << " cfm" << endl;
  }
  if (choice == 2) {
    ans = (airflow*60)/conv;
    cout << airflow << " cfm is " << ans << " m3/h" << endl;
  }
  return 0;
}
