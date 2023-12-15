//// BTVN-Greedy-Backtracking.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//#include <vector>
//#include <set>
//using namespace std;
//char dauNgoac[] = { '(', ')' };
//void backtracking(int countNgoacMo, int countNgoacDong, int n, vector<char> &temp) {
//    for (int i = 0; i < 2; i++) {
//        if ((i == 0 && countNgoacMo < n ) || (i == 1 && countNgoacDong < n && countNgoacDong < countNgoacMo)) {
//            temp.push_back(dauNgoac[i]);
//            if (i == 0) {
//                countNgoacMo++;
//            }
//            else {
//                countNgoacDong++;
//            }
//            if (temp.size() == n * 2 && countNgoacDong == n && countNgoacMo == n) {
//                
//                for (int i = 0; i < temp.size(); i++) {
//                    cout << temp[i];
//                }
//                cout << "\n";
//            }
//            else {
//                backtracking(countNgoacMo, countNgoacDong, n, temp);
//            }
//            temp.pop_back();
//            if (i == 0) {
//                countNgoacMo--;
//            }
//            else {
//                countNgoacDong--;
//            }
//            
//        }
//    }
//}
//int main()
//{
//    int n;
//    cin >> n;
//    vector<char> temp;
//    backtracking(0, 0, n, temp);
//    
//}
//
