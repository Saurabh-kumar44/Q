#include <bits/stdc++.h>

using namespace std;

int getTrib(int n) {
  if (n == 0)
    return 0;

  if (n == 1 || n == 2)
    return 1;

  return getTrib(n - 1) + getTrib(n - 2) + getTrib(n - 3);
}

int main() {

  int n;
  cout<<"Enter the number: "<<endl;
  cin >> n;
  cout<<"";
  cout << getTrib(n);
}