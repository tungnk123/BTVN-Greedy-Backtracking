//#include <iostream>
//#include <vector>
//#include <map>
//#include <string>
//#include <set>
//#include <climits>
//using namespace std;
//
////string selectNodeWithMinDistance(set<string> tapDinhP, string dinhHienHanh, map<string, map<string, int>> graph) {
////    string ans = "";
////    int minDistance = INT_MAX;
////    for (map<string, int>::iterator it = graph[dinhHienHanh].begin(); it != graph[dinhHienHanh].end(); it++) {
////        if (tapDinhP.find(it->first) != tapDinhP.end() && it->second < minDistance) {
////            minDistance = it->second;
////            ans = it->first;
////        }
////    }
////    return ans;
////}
////void greedy(map<string, map<string, int>> graph, string startNode, set<string> tapDinhP, vector<string>& sol) {
////
////    string dinhHienHanh = startNode;
////
////    while (tapDinhP.size() != 0) {
////        string minNode = selectNodeWithMinDistance(tapDinhP, dinhHienHanh, graph);
////        // remove minNode ra khoi P
////        tapDinhP.erase(minNode);
////        sol.push_back(minNode);
////        dinhHienHanh = minNode;
////    }
////}
//int weightMin = 100000000;
//vector<string> sol;
//string initialNode;
//void backtracking(int i, string startNode, map<string, map<string, int>> graph, vector<int> visited, int n, map<int, string> tenDiemMap, map<string, int> dist, vector<string>& curPath) {
//    for (int j = 0; j < n; j++) {
//        if (visited[j] == 0) {
//            string nodeTiepTheo = tenDiemMap[j];
//            string curNode = startNode;
//            if (graph[curNode][nodeTiepTheo] > 0) {
//                dist[nodeTiepTheo] = dist[curNode] + graph[curNode][nodeTiepTheo];
//                if (dist[nodeTiepTheo] > weightMin) {
//                    return;
//                }
//                curPath[i] = nodeTiepTheo;
//                visited[j] = 1;
//                if (i == n - 2) {
//                    //dist[nodeTiepTheo] += graph[initialNode][curPath[0]];
//                    dist[nodeTiepTheo] += graph[curPath[i]][initialNode];
//                    if (dist[nodeTiepTheo] < weightMin) {
//                        weightMin = dist[nodeTiepTheo];
//                        sol = curPath;
//                    }
//                    dist[nodeTiepTheo] -= graph[curPath[i]][initialNode];
//                }
//                else {
//                    backtracking(i + 1, nodeTiepTheo, graph, visited, n, tenDiemMap, dist, curPath);
//                }
//                visited[j] = 0;
//                dist[nodeTiepTheo] = 0;
//            }
//        }
//    }
//}
//
//int main() {
//    int e;
//    string startNode;
//    cin >> e >> startNode;
//    initialNode = startNode;
//    map<string, map<string, int>> graph;
//    set<string> tapDinhP;
//
//    for (int i = 0; i < e; ++i) {
//        string u, v;
//        int x;
//        cin >> u >> v >> x;
//        graph[u][v] = x;
//        tapDinhP.insert(u);
//        tapDinhP.insert(v);
//    }
//    int n = tapDinhP.size();
//    vector<int> visited(n, 0);
//    vector<string> curPath(n - 1);
//    map<int, string> tenDiemMap;
//    map<string, int> dist;
//    int i = 0;
//    int startIndex = -1;
//    for (const string& value : tapDinhP) {
//        if (value == startNode) {
//            startIndex = i;
//        }
//        tenDiemMap[i++] = value;
//    }
//
//    //visited[startIndex] = 1;
//    dist[startNode] = 0;
//    backtracking(0, startNode, graph, visited, n, tenDiemMap, dist, curPath);
//
//
//    cout << startNode << " ";
//    for (int i = 0; i < sol.size(); i++) {
//        cout << sol[i] << " ";
//    }
//    cout << startNode;
//    return 0;
//}