#include<bits/stdc++.h>
using namespace std;
int pageCount(int n,int p){
int turns=(n/2)-(p/2);
if((float)turns>(p/2)){
turns=(p/2);
}
return turns;
}
int main(){
int n,p;
cout<<"Enter number of pages in the book: ";
cin>>n;
cout<<"Enter the page number: ";
cin>>p;
int result=pageCount(n,p);
cout<<"Minimum number of turns are: "<<result;
return 0;
}
