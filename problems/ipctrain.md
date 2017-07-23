<h2 align="center">IPCTRAIN </h2>
<a href="https://www.codechef.com/problems/IPCTRAIN"> Problem link</a>

```C++
#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<bitset>
#include<map>
#include<cstring>
#include<set>
#include<queue>
#include<climits>
#include<iomanip>
using namespace std;
#define uii long long int
#define it(a)  ::iterator a
#define sd(a) double a;scanf("%lf",&a);
#define slld(a) uii a;scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define plld(a) printf("%lld",a)
#define INF LLONG_MAX
#define MOD 1000000007
#define powOf2(a) !(a&a-1)
#define mod(a) (a>0 ? a : (-1*a))
#define tc(a) uii a; for(scanf("%lld",&a);a--;)
#define swap(a,b) a = a^b; b = a^b;a = a^b;
#define rep(i,n) for(uii i = 0;i<n;i++)
#define set(n,x) x |= (1 << n)
#define unset(n,x) x &= ~(1<<n)
#define check(n,x) (x & 1 << n) != 0



int main(){
    tc(T)
    {
        slld(N);slld(D);
        vector< pair<uii, uii> > V[D+1];
        uii count = 0;
        bool present[D+1];
        for(uii i = 0;i<=D;i++){
            present[i] = false;
        }
        for(uii i = 0;i<N;i++){
            slld(d);slld(t);slld(s);
            V[d].push_back(make_pair(s,t));
            count += (t*s);
            present[d] = true;
        }
        vector<pair<uii, uii> > ::iterator it;
        priority_queue< pair<uii,uii> > pq;
        for(uii i = 1;i<=D;i++)
        {
            for(it = V[i].begin();it!=V[i].end();it++){
                pq.push((*it));
            }
            if(pq.empty()) continue;
            pair<uii, uii> a = pq.top();
            pq.pop();
            //cout<<"ha"<<endl;
            count -= a.first;
            a.second--;
            if(a.second!=0) pq.push(a);
        }
        cout<<count<<endl;
    }
	return 0;
}

```
