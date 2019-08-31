#include <bits/stdc++.h>

using namespace std;


int main()
{   int h, m;
    cin>>h;
    cin>>m;
    string min[30]={"one minute", 
                "two minutes","three minutes","four minutes","five minutes",
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
string hour[12] ={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"};

if (m==00){cout << hour[h-1] << " o' clock";}
else if (m<30){cout << min[m-1] << " past " << hour[h-1];}
else if (m>30){cout << min[60 - m -1] << " to " << hour[h];}


    return 0;

}
