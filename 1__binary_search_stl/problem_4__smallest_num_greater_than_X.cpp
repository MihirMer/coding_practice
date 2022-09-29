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


	/* Q. Find the smallest number greater than X in a sorted array. If it does not exists, print -1.

	int arr[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};

		X 		ind
		0		1
		4		9
		11		-1
		13		-1
	*/


	int arr[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
	int n = sizeof(arr) / sizeof(int);
	deb(n);
	cout << endl;
	int ind, x;


	// idea, find last occ. of x and return element of prev. index if ind is less than array size
	// else return -1

	x = 0;

	ind = upper_bound(arr, arr + n, x) - arr;

	if (ind < n) cout << arr[ind];
	else cout << -1;

	cout << endl;

	x = 4;

	ind = upper_bound(arr, arr + n, x) - arr;

	if (ind < n) cout << arr[ind];
	else cout << -1;

	cout << endl;

	x = 11;

	ind = upper_bound(arr, arr + n, x) - arr;

	if (ind < n) cout << arr[ind];
	else cout << -1;

	cout << endl;

	x = 13;

	ind = upper_bound(arr, arr + n, x) - arr;

	if (ind < n) cout << arr[ind];
	else cout << -1;

	cout << endl;

	return 0;
}