#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void) {
	int N;
	cin >> N;

	vector<pair<int, int>> student(N);
	for (int i = 0; i < N; i++) {
		cin >> student[i].first >> student[i].second;
	}

	vector<int> sumF(N);
	vector<int> sumS(N);

	if (student[0].first == 1)
		sumF[0] = student[0].second;
	else
		sumS[0] = student[0].second;

	for (int i = 1; i < N; i++) {
		sumF[i] += sumF[i - 1];
		sumS[i] += sumS[i - 1];

		if (student[i].first == 1)
			sumF[i] += student[i].second;
		else
			sumS[i] += student[i].second;
	}

	int Q;
	cin >> Q;

	for (int i = 0; i < Q; i++) {
		int L, R;
		cin >> L >> R;
		if (L - 2 == -1) {
			cout << sumF[R - 1] << " " << sumS[R - 1] << endl;
			continue;
		}
		cout << sumF[R - 1] - sumF[L - 2] << " " << sumS[R - 1] - sumS[L - 2] << endl;
	}
} 
