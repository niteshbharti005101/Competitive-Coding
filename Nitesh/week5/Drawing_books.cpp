#include <iostream>
using namespace std;
int main ()
{
  int n,p,i,c=0,c1=0;
  cin >> n;
  cin>> p;
  for(i=1;i<=n/2;i+=2)
  {
      if(p==1)
      {
          c=0;
          break;
      }
      else if(i<=p)
      {
        c+=1;
      }
  }
  for(i=n;i>=n/2;i-=2)
  {
      if((p==(n-1) and n%2!=0) or p==n)
      {
          c1=0;
          break;
      }
      else if(i>=p)
      {
        c1+=1;
      }
  }
  if(c<c1)
  cout<<c;
  else
  cout<<c1;
  return 0;
}
