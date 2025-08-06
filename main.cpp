#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main(void) {

	vector<string> IDNum = {
		// ...（略：IDのリストはそのままでOK）...
		"k022g0001@g.neec.ac.jp"
	};

	// ソート関数を正しく記述
	sort(IDNum.begin(), IDNum.end());

	cout << "学籍番号" << endl;

	for (int i = 0; i < IDNum.size(); i++)
		cout << IDNum[i] << endl;

	return 0;
}
