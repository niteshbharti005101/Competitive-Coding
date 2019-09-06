#include<bits/stdc++.h>
using namespace std;
void encryption(string s){
    int j,row,column;
    int length=s.size();
    row=sqrt(length);

  if (row >= sqrt(length)) 
  column = row; 
  else 
  column = row + 1;
    for(j=0;j<column;++j) {
        for(int i=j; i<length;i+=column){
        cout << s[i];
        }
        
        cout <<"  ";
    }
}
int main(){
    string s;
    cout<<"Enter the string which needed to be encrypted: ";
    cin>>s;
    encryption(s);

    return 0;
}
