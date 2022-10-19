#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(void) {
	int N;
	cin >> N;

	vector<string> S(N);
	for (int i = 0; i < N; i++)
		cin >> S[i];

	map<string, int> Map;
	for (int i = 0; i < N; i++) {
		if (Map[S[i]] == 0)
			cout << i + 1 << endl;
		Map[S[i]] = 1;
	}
}
