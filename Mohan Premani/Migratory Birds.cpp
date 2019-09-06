#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    int cnt[6] = {0};
    for (int i=0;i<n;i++)
    {
        int t;
        scanf("%d",&t);
        cnt[t] ++;
    }
    int maxcnt = -1, maxidx = -1;
    for (int i=1; i<=5; i++)
        if (cnt[i] > maxcnt)
        {
            maxidx = i;
            maxcnt = cnt[i];
        }
    printf("%d\n", maxidx);
}
