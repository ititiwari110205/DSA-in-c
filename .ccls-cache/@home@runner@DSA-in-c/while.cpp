#include <iostream>
using namespace std;
int main() {
  /*..........1 to n no print...........
  int n;
  cin >> n;
  int i = 1;
  while (i <= n) {
    cout << i << " ";
    i = i + 1;
  }*/
  /*................ sum of no 1 to n..............*/
  int n;
  cin >> n;
  int i = 1;
  int sum = 0;
  while (i <= n) {
    sum = sum + i;
    i = i + 1;
  }
  cout << "value of sum is " << sum << endl;
}