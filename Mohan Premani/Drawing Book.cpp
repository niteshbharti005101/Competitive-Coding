#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p, turnstart, turnend;
    scanf("%d %d", &n, &p);
    if (n%2==1)
        n--;
    if (p%2==1)
        p--;
    turnstart = p/2, turnend = (n-p)/2;
    printf("%d\n", min(turnstart, turnend));
}
