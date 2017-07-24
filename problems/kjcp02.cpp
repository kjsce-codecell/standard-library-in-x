#include<cstdio>
#include<map>
#include<iostream> 
using namespace std;
 
int main() 
{
    int T;
    scanf("%d", &T);
 
    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);
 
        map<long long, int> m;
 
        long long c;
        for (int i = 0; i < N; i++) {
            scanf("%lld", &c);
            m[c] = 1;
        }
 
        for (int i = 0; i < M; i++) {
            scanf("%lld", &c);
            if (m[c]) printf("YES\n");
            else {
                m[c] = 1;
                printf("NO\n");
            }
        }
    }
 
    return 0;
}
