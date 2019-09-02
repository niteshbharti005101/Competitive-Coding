#include <bits/stdc++.h>

using namespace std;

int timeInWords(int h, int m) {
char hour[12][12]={"One\0","Two\0","Three\0","Four\0","Five\0","Six\0","Seven\0","Eight\0","Nine\0","Ten\0","Eleven\0","Twelve\0"};
char minute[30][15]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","quater","Sixteen","Seventeen","Eighteen","nineteen","twenty","twenty-one","twenty-two","twenty-three","twenty-four","twenty-five","twenty-six","twenty-seven","twenty-eight","twenty-nine","half"};                                                                                                               
if(m==0){
cout<<hour[h-1]<<" o' clock";
}
if(m>0 && m<31){
cout<<minute[m-1]<<" past "<<hour[h-1];
}
else if(m>=31 && m<60){
cout<<minute[59-m]<<" to "<<hour[h];
}
return 0;
}

int main()
{
int h,m;
cout<<"Enter hours portion:";
cin>>h;
cout<<"Enter minutes portion: ";
cin>>m;
timeInWords(h,m);
return 0;
}
