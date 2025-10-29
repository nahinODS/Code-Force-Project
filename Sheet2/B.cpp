#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  cin >> n;
  if(n<2)cout << -1 <<endl;
  for( long long i = 1; i <=n; i++){
        if(i % 2 ==0)
    cout<< i << endl;
  }
  return 0;
  
