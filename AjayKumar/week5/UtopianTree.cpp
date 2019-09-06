#include <bits/stdc++.h>

using namespace std;

// Complete the utopianTree function below.
int utopianTree(int n) {
    int a=1;
    if (n==0){
        return a;
    }
    else {
        for (int i=1;i<=n;i++){
            if (i%2==0)
                a = a+1;
            else 
                a= a*2;
        }
        return a;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = utopianTree(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
