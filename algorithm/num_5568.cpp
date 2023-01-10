#include<iostream>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

//5568 ������ �𸣰ھ ���ͳ� ������ �߽��ϴ�.

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N; //�̴� ī���� ����
	int K;//N�� �� k���� �����ϰڴ�.

	cin >> N; 
	cin >> K;
	cin.ignore(); //���� �۾�
	
	vector<string> cardNum(N);

	for (int i = 0; i < N; i++) {
		getline(cin,cardNum[i]);
	}

	sort(cardNum.begin(), cardNum.end());

	unordered_map<string, int> cd; //hash map�̿� ��� ���� int�� ���ǹ��Ѽ���
	
	do
	{
		string tmp="";
		for (int i = 0; i < K; i++) 
			tmp += cardNum[i];
		cd.insert(make_pair(tmp , 0));

	} while (next_permutation(cardNum.begin(), cardNum.end())); //���� �Լ���� �ϴ��󱸿�

	cout << cd.size() << endl;
	return 0;
}
