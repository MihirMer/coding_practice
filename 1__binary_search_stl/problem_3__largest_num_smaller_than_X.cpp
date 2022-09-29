#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define vi vector<int>


int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	srand(chrono::high_resolution_clock::now().time_since_epoch().count());

	// write your code here


	/* Q. Find the largest number smaller than X in a sorted array. If it does not exists, print -1.

	int arr[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};

		X 		ind
		1		-1
		4		1
		9		4
		12 		11

	*/


	int arr[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
	int n = sizeof(arr) / sizeof(int);
	deb(n);
	cout << endl;
	int ind, x;


	// idea, find first occ. of x and return element of prev. index if ind isn't negetive
	// else return -1

	x = 1;

	ind = lower_bound(arr, arr + n, x) - arr;
	ind--;

	if (ind >= 0) cout << arr[ind];
	else cout << -1;

	cout << endl;


	x = 4;

	ind = lower_bound(arr, arr + n, x) - arr;
	ind--;

	if (ind >= 0) cout << arr[ind];
	else cout << -1;

	cout << endl;


	x = 9;

	ind = lower_bound(arr, arr + n, x) - arr;
	ind--;

	if (ind >= 0) cout << arr[ind];
	else cout << -1;

	cout << endl;


	x = 12;

	ind = lower_bound(arr, arr + n, x) - arr;
	ind--;

	if (ind >= 0) cout << arr[ind];
	else cout << -1;

	cout << endl;



	return 0;
}