#include <iostream>
using namespace std;
int main ()
{
  int t,i,h,k=0;
  cin >> t;
  int n[t],a[t];
  for(i=0;i<t;i++)
  {
    cin>>n[i];
    h=0;
    for(int j=0;j<=n[i];j++)
    {
        if(j%2==0)
        h+=1;
        else
        h*=2;
    }
    a[k]=h;
    k++;
  }
   for(i=0;i<t;i++)
   {
      cout<<a[i]<<endl;
    }
  return 0;
}
