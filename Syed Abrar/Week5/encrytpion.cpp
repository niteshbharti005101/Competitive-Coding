#include<bits/stdc++.h>
using namespace std;
int main()
{
  string sentence;
  getline(cin ,sentence);

 int l = sentence.length();

int r = floor(sqrt(l));
int c = ceil (sqrt(l));

while(r*c < length){
    r++;
}

for(int i=0;i<c;i++)
{
 for(int j=i;j<length;j+=c)
 {    cout<<sentence[j];

}
cout<<" ";
}
}
