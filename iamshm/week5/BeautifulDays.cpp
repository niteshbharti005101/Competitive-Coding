//https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem?h_r=internal-search
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
//my fn starts
int reverse(int i)
{
    int rvno= 0, rem;
    while(i != 0)
    {
        rem = i%10;
        rvno = rvno*10 + rem;
        i /= 10;
    }
    return rvno;
}
int beautifulDays(int i, int j, int k) {
int count =0;
for(i;i<=j;i++){
   int reversed = reverse(i);
   int diff = abs(i-reversed);
   if(diff%k==0)
   {
       count++;
   }
}
return count;
}
//my fn ends
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string ijk_temp;
    getline(cin, ijk_temp);

    vector<string> ijk = split_string(ijk_temp);

    int i = stoi(ijk[0]);

    int j = stoi(ijk[1]);

    int k = stoi(ijk[2]);

    int result = beautifulDays(i, j, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
