#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
bool isNamNhuan(int year) {
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
		return true;
	}
	return false;
}
bool isValidDay(string s) {
	int nam = stoi(s.substr(0, 4)); // lay ra nam tu s
	int thang = stoi(s.substr(4, 2)); // lay ra thang tu s
	int ngay = stoi(s.substr(6, 2)); // lay ra ngay tu s

	if (ngay < 1 || ngay > 31 || thang < 1 || thang > 12 || nam < 1) {
		return false;
	}
	switch (thang) {
	case 4:
	case 6:
	case 9:
	case 11:
		if (ngay < 0 || ngay >= 31) {
			return false;
		}
		break;
	case 2:
		if (isNamNhuan(nam)) {
			if (ngay > 29) {
				return false;
			}
			
		}
		else if (ngay > 28) {
			return false;
		}
		else if (nam > 0 && nam % 3328 == 0) {
			if (ngay > 30) {
				return false;
			}
		}

	}
	return true;


}
void backtracking(int i, string s, string curStr, vector<string> &ans, vector<bool> isVisited) {
	for (int j = 0; j < 8; j++) {
		if (isVisited[j] == false) {
			curStr[i] = s[j];
			isVisited[j] = true;
			if (i == 7) {
				if (isValidDay(curStr)) {
					if (find(ans.begin(), ans.end(), curStr) == ans.end()) {
						ans.push_back(curStr);
					}
				}
			}
			else {
				backtracking(i + 1, s, curStr, ans, isVisited);
			}
			isVisited[j] = false;
		}
	}
}
int main() {
	string s;
	string curStr(8, ' ');
	for (int i = 0; i < 3; i++) {
		string temp;
		cin >> temp;
		s += temp;
	}
	vector<bool> isVisited(8, false);
	sort(s.begin(), s.end());
	vector<string> ans;
	backtracking(0, s, curStr, ans, isVisited);

	cout << ans.size() << "\n";
	
	for (int j = 0; j < ans.size(); j++) {
		cout << ans[j].substr(0, 4) << " " << ans[j].substr(4, 2) << " " << ans[j].substr(6, 2);
		cout << "\n";
	}
	return 0;
}

// co tham khao bai ban phan sort lai mang truoc khi chay backtracking