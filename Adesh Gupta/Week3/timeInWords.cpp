#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
 map<int,string> min;
 min[0]="o' clock";
 min[1]=min[59]="one minute";
 min[2]=min[58]="two minutes";
 min[3]=min[57]="three minutes";
 min[4]=min[56]="four minutes";
 min[5]=min[55]="five minutes";
 min[6]=min[54]="six minutes";
 min[7]=min[53]="seven minutes";
 min[8]=min[52]="eight minutes";
 min[9]=min[51]="nine minutes";
 min[10]=min[50]="ten minutes";
 min[11]=min[49]="eleven minutes";
 min[12]=min[48]="twelve minutes";
 min[13]=min[47]="thirteen minutes";
 min[14]=min[46]="fourteen minutes";
 min[15]=min[45]="quarter";
 min[16]=min[44]="sixteen minutes";
 min[17]=min[43]="seventeen minutes";
 min[18]=min[42]="eighteen minutes";
 min[19]=min[41]="nineteen minutes";
 min[20]=min[40]="twenty minutes";
 min[21]=min[39]="twenty one minutes";
 min[22]=min[38]="twenty two minutes";
 min[23]=min[37]="twenty three minutes";
 min[24]=min[36]="twenty four minutes";
 min[25]=min[35]="twenty five minutes";
 min[26]=min[34]="twenty six minutes";
 min[27]=min[33]="twenty seven minutes";
 min[28]=min[32]="twenty eigth minutes";
 min[29]=min[31]="twenty nine minutes";
 min[30]="half";

 map<int,string> hr;
 hr[1]="one";
 hr[2]="two";
 hr[3]="three";
 hr[4]="four";
 hr[5]="five";
 hr[6]="six";
 hr[7]="seven";
 hr[8]="eight";
 hr[9]="nine";
 hr[10]="ten";
 hr[11]="eleven";
 hr[12]="twelve";
 if (m==0) return hr[h]+" "+min[m];
 else if (m>30) {
     h++;
   return min[m]+" to "+hr[h];
 }

 else return min[m]+" past "+hr[h];

}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
