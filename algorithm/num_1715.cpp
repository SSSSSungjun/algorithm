#include<iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	if (N == 1) {
		cout << 0 << endl; return 0;
	}
		
	vector<int> card(N);
	priority_queue<int,vector<int>,greater<int>> pq;
	int total_num = 0;

	for (int i = 0; i < N; i++) {
		cin >> card[i];
		pq.push(card[i]);
	}

	while (1) {
		//cout << pq.top() << " ";
		int tmp=0;
		tmp += pq.top();pq.pop();
		tmp += pq.top(); pq.pop();
		total_num += tmp;

		if (pq.empty())break;
		pq.push(tmp);
		
	}
	cout << total_num << endl;
	return 0;
}


