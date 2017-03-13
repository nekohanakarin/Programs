#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define REP(i,m,n) for (int i=m;i<n;i++)
#define FOR(i,m,n,a) for(int i=m;i<n;i+=a)
const ll MOD=1e9+7;

int main(){
  int N;
  ll a=1;
  cin >> N;
  REP(i,0,N){
    a = (a*(i+1))%MOD;
  }
  cout << a << endl;
  return 0;
}
