#include<bits/stdc++.h>
using namespace std;
int utopianTree(int n) {
int height=1;
for(int i=0;i<=n;++i){

if(i%2!=0){
height*=2;
}
if(i!=0 && i%2==0 ){
height+=1;
}

}
return height;

}
int main(){
int t;
cout<<"Enter number of test cases: ";
cin>>t;
int arr[t];
cout<<"Enter the number of cycles in "<<t<<" test cases: ";
for(int i=0;i<t;++i){
cin>>arr[i];
}
for(int i=0;i<t;++i){
cout<<utopianTree(arr[i])<<"\n";
}
return 0;
}
