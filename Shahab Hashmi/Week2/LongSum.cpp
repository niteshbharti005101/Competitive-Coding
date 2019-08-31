#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	unsigned long long a[n],sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	cout<<sum;
}