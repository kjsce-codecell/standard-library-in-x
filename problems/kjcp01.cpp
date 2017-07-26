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
#include<bitset>
#include<numeric>
#define llu long long
#define inf 0x3f3f3f3f
#define N 100000
#define m(a,b) (a>b? b : a)
#define M(a,b) (a>b? a : b)
#define mod 1000000007
using namespace std;
vector<pair<llu,llu>> v;
vector<pair<llu,llu>>::iterator it;
llu a[1001];
llu co[N+1];
bool flag[N+1];
bool comp(pair<llu,llu> b,pair<llu,llu> d)
{
    if(co[b.first]!=co[d.first])
        return co[b.first]>co[d.first];
    else
        return b.second<d.second;
}

int main()
{
    llu i,j,k,l,e,n,m,t,f,c;
    cin>>n>>m;
    fill_n(co,N+1,0);
    fill_n(flag,N+1,false);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        co[a[i]]++;
    }
    c=0;
    pair<llu,llu> p;
    for(i=0;i<n;i++)
    {
        if(!flag[a[i]])
        {
            flag[a[i]]=true;
            p=make_pair(a[i],c);
            v.push_back(p);
            c++;
        }
    }
    sort(v.begin(),v.end(),comp);
    for(it=v.begin();it!=v.end();it++)
    {
        p=*it;
        for(i=0;i<co[p.first];i++)
            cout<<p.first<<" ";
    }
    cout<<endl;
    return 0;
}

