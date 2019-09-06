
#include <bits/stdc++.h> 
using namespace std; 


int gcd(int a, int b) 
{ 
	if (a == 0) 
		return b; 
	return gcd(b % a, a); 
} 

int findGCD(int arr[], int n) 
{ 
	int result = arr[0]; 
	for (int i = 1; i < n; i++) 
		result = gcd(arr[i], result); 

	return result; 
} 
long long findlcm(int arr[], int n) 
{ 
    long long ans = arr[0]; 
    for (int i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
} 
 
int main() 
{ 
	int a[10];int b[10];
    int n, m;
  
  	cin >> n;
  	cin >> m;
  
  for (int i = 0; i<n; i++ )
	 {
	 	cout << "Enter value of a[" << i << "]"<< endl;
    	        cin >> a[i];
  	}
  for (int i = 0; i<m; i++ )
	 {
	 	cout << "Enter value of b[" << i << "]"<< endl;
    	        cin >> b[i];
	 }
	 
	 
	cout << findGCD(b, n) << endl; 
	cout << findlcm(a, n) << endl; 
	
	int x = findGCD(b,n);int y = findlcm(a,n);
	
	int count = 0;
        for(int i = y, j =2; i<=x; i=y*j,j++){
            if(x%i==0){ count++;}
        }
    cout << count;
    return 0;
} 