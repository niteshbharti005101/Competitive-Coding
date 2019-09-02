#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	cout<<"Enter number";
	cin>>a;
	int x,Y;
	x=int(a[1]);
	cout<<x<<endl;
	Y=(int)(a[1]-'0');
	cout<<Y<<endl;
	return 0;
}