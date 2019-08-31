#include <bits/stdc++.h>
using namespace std;
 
string minutes[30] = {"one minute", 
                "two minutes",
                "three minutes",
                "four minutes",
                "five minutes",
                "six minutes",
                "seven minutes",
                "eight minutes",
                "nine minutes",
                "ten minutes",
                "eleven minutes",
                "twelve minutes",
                "thirteen minutes",
                "forteen minutes",
                "quarter",
                "sixteen minutes",
                "seventeen minutes",
                "eighteen minutes",
                "nineteen minutes",
                "twenty minutes",
                "twenty one minutes",
                "twenty two minutes",
                "twenty three minutes",
                "twenty four minutes",
                "twenty five minutes",
                "twenty six minutes",
                "twenty seven minutes",
                "twenty eight minutes",
                "twenty nine minutes",
                "half"};
string hour[12] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"};
 
int main(){
    int hr;
    cin >> hr;
    int mm;
    cin >> mm;
    if(mm == 0) 
      {cout << hour[hr-1] << " o' clock" << endl;}
    else if(mm <= 30)
      {cout << minutes[mm-1] << " past " << hour[hr-1] << endl;}
    else 
      {cout << minutes[60 - mm -1] << " to " << hour[hr] << endl;}
    return 0;
}
