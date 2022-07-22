#include <iostream>
#include <string>
using namespace std;

int main(){
  char arr[9] = {'D','A','T','A','P','O','W','E','R'};
  char answer[9];
  int a,b;
  int idx = 0;
  cin >> a >> b;
  for(int i =a;i<=b;i++){
    answer[idx] = arr[i];
    idx++;
  }

  for(int j=0;j<idx;j++){
    cout << answer[j];
  }

  return 0;
}