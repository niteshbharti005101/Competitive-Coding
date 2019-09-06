#include<bits/stdc++.h>
using namespace std;
int CatAndMouse(int x,int y,int z){
int pos1,pos2;
pos1=z-x;
pos2=z-y;
if(pos1<0)
pos1=pos1*(-1);
if(pos2<0)
pos2=pos2*(-1);
if(pos1>=pos2){
if(pos1==pos2){
cout<<"Mouse Escapes"<<"\n";
}
else
cout<<"Cat A catches the mouse."<<"\n";
}
else{
cout<<"Cat B catches the mouse."<<"\n";
}
return 0;
}
int main(){
int q;
cout<<"Enter number of queries :";
cin>>q;
int A[q],B[q],C[q];
for(int i=0;i<q;i++){
cout<<"Enter the positions set "<<i+1<<" of the 2 cats and mouse respectively: ";
cin>>A[i]>>B[i]>>C[i];
}
for(int i=0;i<q;i++){
CatAndMouse(A[i],B[i],C[i]);
}
return 0;
}
