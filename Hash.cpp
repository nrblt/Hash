#include <bits/stdc++.h>
using namespace std;

#define re return 0;
#define ll long long
#define str string
#define INF (int)(1e9+7)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)
#define maxn (ll)(1e5+7)

ll cnt,res,t,m,k,ans,mx=-INF,mn=INF,p,n,pol,flag=0,mod1,mod2;


ll a[maxn],b,c,prf1[maxn],prf2[maxn],pw1[maxn],pw2[maxn],l,r,x,y,P=31;//P is the bigger then the maximum number in array

pair<ll,ll> get_hash(ll l ,ll r){
      ll a=((prf1[r]-prf1[l-1]*pw1[r-l+1])%mod1+mod1)%mod1;
      ll b=((prf2[r]-prf2[l-1]*pw2[r-l+1])%mod2+mod2)%mod2;
      return mp(a,b);
}
void solve(){
      cin>>n;
      for(int i=1;i<=n;++i){
            cin>>a[i];//or string 
      }

      mod1=1e9+7;//while(!prime[mod1])mod1++;
      mod2=1e9+9;
      for(int i=1;i<=n;++i){
            prf1[i]=(prf1[i-1]*P+a[i])%mod1;//prefix
            prf2[i]=(prf2[i-1]*P+a[i])%mod2;
      }
      pw1[0]=1;//cause 0 power of every number is 1
      pw2[0]=1;
      for(int i=1;i<=n;++i){
            pw1[i]=pw1[i-1]*P%mod1;
            pw2[i]=pw2[i-1]*P%mod2;
      }

      cin>>l>>r>>x>>y;
      if(get_hash(l,r)==get_hash(x,y)){//if they are equal
            cout<<"YES";
            return ;

      }
      cout<<"NO";


}
int main(){
      //scanf("%d", &t);
      //while(t--) {
            solve();
      //}


}
