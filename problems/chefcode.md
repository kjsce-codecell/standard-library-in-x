<h2 align="center">CHEFCODE </h2>
<a href="https://www.codechef.com/problems/CHEFCODE"> Problem link</a>

** Only-backtracking solution **

```C++
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<queue>
#include<numeric>
#define llu long long
#define inf 0x3f3f3f3f
#define pb push_back
#define mp make_pair
#define ipair pair<llu,llu>
#define inp(a) scanf("%lld",&a)
#define out(a) printf("%lld\n",a)
#define N 100000
#define m(a,b) (a>b? b : a)
#define M(a,b) (a>b? a : b)
#define mod 1000000007
using namespace std;
llu c=0;
void subselect(llu a[],llu n,llu k,llu s,double prod)
{
    double tk=(double)k;
    double e,te;
    if(s==n-1 && prod<=tk)
    {
        //cout<<prod<<" ";
        c++;
        prod*=a[s];
        //cout<<prod<<" ";
        if(prod<=tk)
            c++;
        return;
    }
    if(s<n-1)
    {
        e=(double)a[s];
        subselect(a,n,k,s+1,prod);
        prod*=e;
        subselect(a,n,k,s+1,prod);
    }
}
int main()
{
    llu i,j,k,l,e,n,m,t,f;
    inp(n);inp(k);
    double tk=(double)k;
    llu a[n];
    for(i=0;i<n;i++)
        inp(a[i]);
    double prod=1.0;
    subselect(a,n,k,0,prod);
    cout<<c-1<<endl;
    return 0;
}
```

** Meet in the middle solution **

```C++
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<queue>
#include<numeric>
#define llu long long
#define inf 0x3f3f3f3f
#define pb push_back
#define mp make_pair
#define ipair pair<llu,llu>
#define inp(a) scanf("%lld",&a)
#define out(a) printf("%lld\n",a)
#define N 100000000
#define m(a,b) (a>b? b : a)
#define M(a,b) (a>b? a : b)
#define mod 1000000007
using namespace std;
llu c=0;
vector<double> x,y;
vector<double>::iterator p;
void subselect(llu a[],llu n,double k,llu s,double prod,string st)
{
    double e,te;
    if(s==n-1 && prod<=k)
    {
        //cout<<prod<<" ";
        if(st=="x")
            x.pb(prod);
        else
            y.pb(prod);
        prod*=a[s];
        //cout<<prod<<" ";
        if(prod<=k)
        {
            if(st=="x")
                x.pb(prod);
            else
                y.pb(prod);
        }
        return;
    }
    if(s<n-1)
    {
        e=(double)a[s];
        subselect(a,n,k,s+1,prod,st);
        prod*=e;
        subselect(a,n,k,s+1,prod,st);
    }
}
void divide(llu a[],llu n,llu k)
{
    llu in;
    double tk=(double)k;
    subselect(a,n/2,tk,0,1.0,"x");
    subselect(a,n,tk,n/2,1.0,"y");
    auto it=find(y.begin(),y.end(),1);
    y.erase(it);
    it=find(x.begin(),x.end(),1);
    x.erase(it);
    //cout<<x.size()<<" "<<y.size()<<endl;
    sort(y.begin(),y.end());
    llu ys=(llu)y.size();
    llu xs=(llu)x.size();
    //cout<<"i x in y c"<<endl;
    for(llu i=0;i<xs;i++)
    {
        if(x[i]<=k)
            p=upper_bound(y.begin(),y.end(),k/x[i]);
        in=(p-y.begin());
        c+=in;
        //cout<<i<<" "<<x[i]<<" "<<in<<" "<<y[in]<<" "<<c<<endl;
    }
    c+=(ys+xs);
}
int main()
{
    llu i,j,k,l,e,n,m,t,f;
    inp(n);inp(k);
    double tk=(double)k;
    llu a[n];
    for(i=0;i<n;i++)
        inp(a[i]);
    double prod=1.0;
    if(n==1)
    {
        if(a[0]<=k)
            c++;
    }
    else
        divide(a,n,k);
    cout<<c<<endl;
    return 0;
}
```
