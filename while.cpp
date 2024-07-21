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
  /*................ sum of no 1 to n..............
  int n;
  cin >> n;
  int i = 1;
  int sum = 0;
  while (i <= n) {
    sum = sum + i;
    i = i + 1;
  }
  cout << "value of sum is " << sum << endl;*/
  /*.............prim or not.................*/
  int n;
  cin>>n;
  int i=2;
  while(i<n){
    if(n%i==0){
      cout<<"no is not prime for "<< i <<endl;
    }  else{
      cout<<"no is prime for "<<i<<endl;
    }
    
    
    i=i+1;
   

  }

}