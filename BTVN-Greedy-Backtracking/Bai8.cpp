//// GreedyInclass.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//void greedy(int n, int m, vector<vector<int>>& jobs, vector<int> timeMachines, vector<int>& sol) {
//    for (int i = 0; i < n; i++) {
//        int minTimeMachine = jobs[0][i] + timeMachines[0];
//        int minIndexMachine = 0;
//        for (int j = 0; j < m; j++) {
//            if (jobs[j][i] + timeMachines[j] < minTimeMachine) {
//                minIndexMachine = j;
//                minTimeMachine = jobs[j][i];
//            }
//        }
//        sol[i] = minIndexMachine;
//        timeMachines[minIndexMachine] += jobs[minIndexMachine][i];
//
//    }
//}
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    vector<int> input(n);
//    vector<vector<int>> jobs(m, vector<int>(n));
//
//    vector<int> sol(n, 0);
//    vector<int> timeMachines(m);
//
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            int temp;
//            cin >> temp;
//            jobs[i][j] = temp;
//        }
//    }
//
//    /*sort(jobs.rbegin(), jobs.rend());*/
//    greedy(n, m, jobs, timeMachines, sol);
//    for (int i = 0; i < n; i++) {
//        cout << sol[i] << " ";
//    }
//
//
//}