#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define vi vector<int>


/*
The problem statement is really simple. There are some queries. You are to give the answers.

Input
An integer stating the number of queries Q(equal to 50000), and Q lines follow, each containing one integer K between 1 and 5000000 inclusive.

Output
Q lines with the answer of each query: the Kth prime number.

Example
Input:
7
1
10
100
1000
10000
100000
1000000

Output:
2
29
541
7919
104729
1299709
15485863
*/

bool isNotPrime[86028122];
ll maxi = 86028121;
vi primes;

void preproc() {

	isNotPrime[0] = isNotPrime[1] = true;

	for (ll i = 2; i <= maxi; i++) {
		if (!isNotPrime[i]) {
			primes.pb(i);
			for (ll j = i * i; j <= maxi; j += i) {
				isNotPrime[j] = true;
			}
		}
	}
}

void solve() {
	ll n;
	cin >> n;
	cout << primes[n - 1] << endl;

}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	srand(chrono::high_resolution_clock::now().time_since_epoch().count());

	// write your code here
	int N; cin >> N;
	preproc();
	while (N--) {
		solve();
	}
	return 0;
}