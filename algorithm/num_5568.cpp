#include<iostream>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

//5568 도저히 모르겠어서 인터넷 참고좀 했습니다.

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N; //뽑는 카드의 숫자
	int K;//N개 중 k개로 조합하겠다.

	cin >> N; 
	cin >> K;
	cin.ignore(); //버퍼 작업
	
	vector<string> cardNum(N);

	for (int i = 0; i < N; i++) {
		getline(cin,cardNum[i]);
	}

	sort(cardNum.begin(), cardNum.end());

	unordered_map<string, int> cd; //hash map이용 사실 뒤의 int는 무의미한수준
	
	do
	{
		string tmp="";
		for (int i = 0; i < K; i++) 
			tmp += cardNum[i];
		cd.insert(make_pair(tmp , 0));

	} while (next_permutation(cardNum.begin(), cardNum.end())); //순열 함수라고 하더라구요

	cout << cd.size() << endl;
	return 0;
}
