#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,a[26];
    for (i =0; i<26;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    int h=0;
    int l =s.length();
    for (i=0;i<l;i++){
        if (h<a[s[i]-'a']){
            h = a[s[i]-'a'];
        }
    }
    cout<<h*l;
    
}
