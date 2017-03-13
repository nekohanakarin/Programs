#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define REP(i,m,n) for (int i=m;i<n;i++)
#define FOR(i,m,n,a) for(int i=m;i<n;i+=a)
const ll MOD=1e9+7;

int main(){
  ll sn,cn,ans=0;
  cin >> sn >> cn;
  
  if(2*sn>cn){
    cout<<cn/2<<endl;
  }
  else{
    ans+=sn;
    sn-=ans;
    cn-=2*ans;

    ans+=cn/4;
    cout<<ans<<endl;
  }
  
  return 0;
}
