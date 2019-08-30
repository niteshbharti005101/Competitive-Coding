#include <iostream>

using namespace std;

int main() {
   int n;
   long long sum = 0;
   long long int a[10];
    cin >> n;
    for(int i = 0; i < n; i++){
        
        cin >> a[i];
    }
    for(int i = 0;i<n;i++){
        sum=sum+a[i];
    }
    cout << sum << endl;
    return 0;
}
