#include<iostream>

using namespace std;

long long gcd(long long a, long long b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main(void) {
	long long int A, B, C;
	cin >> A >> B >> C;

	long long int max = gcd(A, gcd(B, C));

	cout << (A / max - 1) + (B / max - 1) + (C / max - 1) << endl;
}
