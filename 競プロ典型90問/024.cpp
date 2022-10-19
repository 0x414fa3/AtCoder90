#include<iostream>
#include<vector>

using namespace std;

int main(void) {
	int N, K;
	cin >> N >> K;

	vector<int> A(N);
	for (int i = 0; i < N; i++)
		cin >> A[i];

	vector<int> B(N);
	for (int i = 0; i < N; i++)
		cin >> B[i];

	int count = 0;
	for (int i = 0; i < N; i++) {
		if (A[i] != B[i]) {
			int diff = abs(A[i] - B[i]);
			count += diff;
		}
		if (count > K) {
			cout << "No" << endl;
			return 0;
		}
	}
	
	if (abs(count - K) % 2 == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
