#include <iostream>
using namespace std;
int
main ()
{
  int n, m, i, j, c, c1 = 0,p=0,q;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
    cin >> a[i];
  m = a[0];
  for (i = 0; i < n; i++)
    {
      if (a[i] > m)
	m = a[i];
    }
  for (j = 1; j <= m; j++)
    {
      c = 0;
      for (i = 0; i < n; i++)
	  {
	  if (a[i] == j)
	    c += 1;
	  }
     if(p<c)
     {
         p=c;
         q=j;
     }
    }
    cout<<q;
  return 0;
}
