// switch case or toggling
//https://www.hackerrank.com/challenges/utopian-tree/problem
#include <bits/stdc++.h>
using namespace std;
int main() {
       int t;
       cin>>t;
      int n;
    while(t--)
    {   
        cin>>n;
        int height=1;
        int button=1;
            while(n--)
      {      if(button)
             {  height=height*2;
                button--;
            }
             else
             {  
             height=height+1;
               button++;
             }       
            }
         cout<<height<<endl;
    }          
}
