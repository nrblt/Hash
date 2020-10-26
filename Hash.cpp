#include <bits/stdc++.h>
using namespace std;

//https://vjudge.net/contest/398640#problem/D


#define re return 0;
#define ll long long
#define str string
#define INF (int)(1e9+7)
#define pb push_back
//#define mp make_pair
#define F first
#define S second
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)
#define maxn (ll)(1e5+7)

ll n,m,k,res,t,q,len,a[maxn];
char s[maxn];

void solve(int oo) {
      scanf("%s%d", s, &q);
      n = strlen(s);
      len = 300;
      int b[n];
      int ok[n];
      for (int i = 0; i < n; ++i) {
            b[i] = 0;
            ok[i] = i % len == 0;
      }
      int l, r;
      scanf("%d%d", &l, &r);
      for (int i = l - 1; i < r;) {


      }

}



int main(){
      //scanf("%d", &t);
      cin>>n>>m;
      int kk=t;
      for(int i=1;i<=n;++i){
            cin>>a[i];
      }
      sort(a+1,a+1+n);
      reverse(1+a,a+1+n);
      while(m--) {
            solve(kk-t);
      }
}
