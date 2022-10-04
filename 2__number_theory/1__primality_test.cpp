#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define vi vector<int>


bool isPrime(int n) {
	if (n == 1) {
		return false;
	}

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}

	return true;
}


int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	srand(chrono::high_resolution_clock::now().time_since_epoch().count());

	// write your code here

	int n;

	cin >> n; // 5
	cout << isPrime(n) << endl; // true

	cin >> n; // 16
	cout << isPrime(n) << endl; // false

	return 0;
}