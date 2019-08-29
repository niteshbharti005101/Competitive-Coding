#include <bits/stdc++.h>
using namespace std;
int birthdayCakeCandles(int s, int ar[]) {
	//int s = sizeof(ar)/sizeof(ar[0]);
	int max = ar[0];
	int count = 0;
	for (int i = 0; i < s; i++) {
		if (ar[i] > max)
			max = ar[i];
	}
	for (int i = 0; i < s; i++) {
		if (ar[i] == max)
			count += 1;
	}
	return count;
}

int main() {
	int n;
	cout << "Enter number of birthday Cake Candles:";
	cin >> n;
	int arr[n];
	cout << "Enter the heights of " << n << " Candles : \n";
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	int result = birthdayCakeCandles(n, arr);
	cout << "The number of candles will be blown out :" << result << endl;
	return 0;
}
