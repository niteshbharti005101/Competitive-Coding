#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,temp = -1, k = -1,max = -1;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
       cin >> arr[i];
       if(arr[i] > max)max = arr[i];
    }
    vector<int> count(max,0);
    for(int i = 0; i < arr.size(); i++)
      count[arr[i]]++;
    for(int i = 0; i <= max; i++){
        if(count[i] > temp){
            temp = count[i];
            k = i;
        }
    }
    cout << k << endl;
    return 0;
}
