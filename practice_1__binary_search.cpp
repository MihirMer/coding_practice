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

	int arr[] = {1, 4, 5, 8, 9};
	int n = sizeof (arr) / sizeof( int);


	// binary_search
	// returns true of false

	bool found = binary_search(arr, arr + n, 3);
	deb(found);
	// found=0

	found = binary_search(arr, arr + n, 8);
	deb(found);
	// found=1
	cout << endl;



	// lower_bound - same as binary_search, but
	// if element present in array, returns iterator of that element,
	// else returns iterator to the next greater element

	// to convert iterator into index, subtract base address/ array name from it


	// int arr[] = {1, 4, 5, 8, 9};
	int ind;

	ind = lower_bound(arr, arr + n, 4) - arr;
	deb(ind);
	// ind=1
	// element present, returns ind of the element

	ind = lower_bound(arr, arr + n, 7) - arr;
	deb(ind);
	// ind=3
	// element not present, returns ind of next greater element/ or end of array

	ind = lower_bound(arr, arr + n, 10) - arr;
	deb(ind);
	// ind=5
	// element not present, returns ind of next greater element/ or end of array

	cout << endl;


	// upper_bound: same as binary search, but
	// returns iterator of the next greater element ALWAYS


	// int arr[] = {1, 4, 5, 8, 9};

	ind = upper_bound(arr, arr + n, 4) - arr;
	deb(ind);
	// ind=2

	ind = upper_bound(arr, arr + n, 7) - arr;
	deb(ind);
	// ind=3

	ind = upper_bound(arr, arr + n, 10) - arr;
	deb(ind);
	//ind=5


	return 0;
}