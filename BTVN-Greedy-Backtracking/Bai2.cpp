//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//void timIp(int i, string s, vector<string>& ans, int phanConLai) {
//    for (int j = 1; j <= 3; ++j) {
//        if (i + j <= s.length()) {
//            string temp = s.substr(i, j);
//            // Neu gap 1 phan bang 0 thi bo qua luon
//            /*if (temp[0] == '0' && temp.size() > 1) {
//                continue;
//            }*/
//            if (temp.length() <= 3 && stoi(temp) >= 0 && stoi(temp) <= 255 && !(temp[0] == '0' && temp.size() > 1)) {
//                ans.push_back(temp);
//                phanConLai -= j;
//                if (i + j == s.length() && ans.size() == 4 && phanConLai == 0) {
//                    // Xuat ra ket qua
//                    for (int k = 0; k < 4; k++) {
//                        cout << ans[k];
//                        if (k != 3) {
//                            cout << ".";
//                        }
//                    }
//                    cout << "\n";
//                }
//                else {
//                    timIp(i + j, s, ans, phanConLai);
//                }
//                ans.pop_back();
//                phanConLai += j;
//            }
//
//        }
//    }
//}
//int main() {
//
//    string s;
//    cin >> s;
//    if (s.size() > 12) {
//        return 0;
//    }
//    vector<string> ans;
//    timIp(0, s, ans, s.length());
//    return 0;
//}
//
//
//// Có tham khảo bài bạn phần thêm phanConLai 