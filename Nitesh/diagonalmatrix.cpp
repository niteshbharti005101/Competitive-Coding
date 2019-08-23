#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cout<<"Enter n:"<<endl;
	cin>>n;
	int a[n][n];
	cout<<"Enter elements:"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int k,c,d1=0,d2=0;
	for(k=0;k<n;k++){
		for(c=0;c<n;c++){
			if(k==c){
				d1+=a[k][c];
			}
		}
	}
	cout<<"Diagonal1="<<d1<<endl;
	int u,v=0;
	for(u=0;u<n;u++){
		
		while(v<n)
		{
			d2+=a[u][n-v-1];
			v++;
			break;
		}
	}
	cout<<"Diagonal2="<<d2<<endl;
	int DiagonalDifference=0;
	DiagonalDifference=d2-d1;
	cout<<"Absolute Diagonal-difference is :"<<DiagonalDifference<<endl;
	return 0;
}