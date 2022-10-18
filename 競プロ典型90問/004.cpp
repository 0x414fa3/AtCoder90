#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void) {
	int H, W;
	cin >> H >> W;
	
	vector<vector<int>> A(H, vector<int>(W));
	for (int i = 0; i < H; i++)
		for (int j = 0; j < W; j++)
			cin >> A[i][j];

	vector<int> x(W);
	vector<int> y(H);

	vector<vector<int>> B(H, vector<int>(W));
	for (int i = 0; i < H; i++) 
		for (int j = 0; j < W; j++) 
			y[i] += A[i][j];
	
	for (int i = 0; i < W; i++)
		for (int j = 0; j < H; j++)
			x[i] += A[j][i];

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cout << x[j] + y[i] - A[i][j] << " ";
		}
		cout << endl;
	}
}