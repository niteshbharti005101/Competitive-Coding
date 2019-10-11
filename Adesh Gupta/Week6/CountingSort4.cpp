#include "bits/stdc++.h"
using namespace std;
int main()
{ 
   int n;
   cin>>n;
   string str[n];
   for(int i=0;i<n/2;++i)
   { 
       int j;
       cin>>j;
       string temp;
       cin>>temp;
       str[j]+="- ";
   }

   for(int i=n/2;i<n;++i)
   {   
       int j;
       cin>>j;
       string temp;
       cin>>temp;
       str[j]+=temp+" ";

   }
  for(int i=0;i<n;++i)
  {
      cout<<str[i];
  }
    return 0;
}
