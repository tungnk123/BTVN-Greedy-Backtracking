//// GreedyInclass.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
////void greedy(int n, int m, vector<vector<int>>& jobs, vector<int> timeMachines, vector<int>& sol) {
////    for (int i = 0; i < n; i++) {
////        int minTimeMachine = INT16_MAX;
////        int minIndexMachine = -1;
////        for (int j = 0; j < m; j++) {
////            if (jobs[j][i] != -1) {
////                int temp = jobs[j][i] + timeMachines[j];
////                if (jobs[j][i] + timeMachines[j] < minTimeMachine) {
////                    minIndexMachine = j;
////                    minTimeMachine = jobs[j][i] + timeMachines[j];
////                }
////            }
////        }
////        sol[i] = minIndexMachine;
////        timeMachines[minIndexMachine] += jobs[minIndexMachine][i];
////
////    }
////}
//
//int minTime = INT32_MAX;
//vector<int> minWay;
//
//int calculateMaxTime(vector<int> curWay, int n, int m, vector<int> jobs) {
//    vector<int> timeMachines(m, 0);
//    for (int i = 0; i < n; i++) {
//        int indexMachine = curWay[i];
//        timeMachines[indexMachine] += jobs[i];
//    }
//    int ans = 0;
//    for (int i = 0; i < m; i++) {
//        if (ans < timeMachines[i]) {
//            ans = timeMachines[i];
//        }
//    }
//    return ans;
//}
//
//void backtrackingScheduling(int i, int n, int m, vector<int> jobs, vector<int> &curWay) {
//    for (int j = 0; j < m; j++) {
//        curWay[i] = j;
//        if (i == n - 1) {
//            int curMaxTime = calculateMaxTime(curWay, n, m, jobs);
//            if (curMaxTime < minTime) {
//                
//                minWay = curWay;
//                minTime = curMaxTime;
//            }
//        }
//        else {
//            backtrackingScheduling(i + 1, n, m, jobs, curWay);
//        }
//        // backtracking
//    }
//}
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    vector<int> input(n);
//    vector<int> jobs(n);
//
//    vector<int> timeMachines(m);
//    vector<int> curWay(n, 0);
//    for (int j = 0; j < n; j++) {
//        int temp;
//        cin >> temp;
//        jobs[j] = temp;
//    }
//
//    /*sort(jobs.rbegin(), jobs.rend());*/
//    /*greedy(n, m, jobs, timeMachines, sol);*/
//    backtrackingScheduling(0, n, m, jobs, curWay);
//    for (int i = 0; i < n; i++) {
//        cout << minWay[i] << " ";
//    }
//
//
//}