//// GreedyInclass.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//#include <stack>
//#include <queue>
//
//using namespace std;
//// Kiểm tra xem điểm có index là i có ở trong open hay không ?
////bool isContainsInOpen(int key, queue<string> open, map<int, string> vertexIndexToName) {
////    queue<string> tempOpen = open;
////    while (!tempOpen.empty()) {
////        string frontKey = tempOpen.front();
////        if (frontKey == vertexIndexToName[key]) {
////            return true;
////        }
////        tempOpen.pop();
////    }
////    return false;
////}
//void bfs(string diemBatDau, string diemKetThuc, vector<string> vertexList, vector<vector<int>> matrix, map<string, int> vertexNameToIndex
//    , map<int, string> vertexIndexToName, queue<string> open, vector<bool> close, map<string, string> getParentMap) {
//
//    map<string, int> distanceMap; // Map dùng để lưu trữ khoảng cách từ đỉnh tới đỉnh hiện hành
//    open.push(diemBatDau); // bỏ đỉnh xuất phát vào open stack
//    bool foundFlag = false; // biến cờ để biết có tìm thấy đích hay không
//    vector<bool> isOpenVisited(close.size(), false);
//    while (!open.empty()) {
//        string diemHienHanh = open.front();
//        open.pop();
//        close[vertexNameToIndex[diemHienHanh]] = true;
//
//        if (diemHienHanh == diemKetThuc) {
//            // nếu tìm thấy điểm đích thì dùng vòng lặp
//            foundFlag = true;
//            break;
//        }
//
//
//         // thêm đỉnh hiện hành vào close
//        for (int i = 0; i < vertexList.size(); i++) {
//            int khoangCach = matrix[vertexNameToIndex[diemHienHanh]][i]; // lấy ra khoảng cách từ đỉnh hiện hành đến điểm tiếp theo có index i
//            if (khoangCach > 0 && close[i] == false && isOpenVisited[i] == false) {
//                // Kiểm tra xem có khoảng cách không, có trong close hay không hay có trong open hay không
//                string diemTiepTheo = vertexIndexToName[i];
//                open.push(diemTiepTheo); // thêm diemTiepTheo vào open
//                isOpenVisited[i] = true;
//                distanceMap[diemTiepTheo] = distanceMap[diemHienHanh] + khoangCach; // Tính khoảng cách của diemTiepTheo bằng cách lấy khoảng cách của diemHienHanh + khoảng cách từ điểm hiện hành tới điểm tiếp theo
//                getParentMap[diemTiepTheo] = diemHienHanh; // cập nhập cha của diemTiepTheo là diemHienHanh
//            }
//        }
//    }
//    int countSoDinhDaPhatTrien = 0;
//    for (int i = 0; i < close.size(); i++) {
//        if (close[i] == true) {
//            countSoDinhDaPhatTrien++;
//        }
//    }
//    // Nếu tìm thấy đích đến
//    if (foundFlag)
//    {
//        vector<string> path; // danh sách chứa các đỉnh đường đi từ điemBatDau đến diemKetThuc
//        path.push_back(diemKetThuc);
//        string diemHienHanh = path.back();
//        while (diemHienHanh != diemBatDau)
//        {
//            diemHienHanh = getParentMap[diemHienHanh]; // cập nhập dinhHienHanh lại là cha của dinhHienHanh
//            path.push_back(diemHienHanh);
//        }
//        // Duyệt từ cuối lên để in ra danh sách các đỉnh
//        for (int i = path.size() - 1; i >= 0; i--)
//        {
//            cout << path[i] << " ";
//        }
//        cout << "\n"; 
//        cout << countSoDinhDaPhatTrien << " " << distanceMap[diemKetThuc] << endl; // In ra số đỉnh đã phát triển và khoảng cách đường đi
//    }
//    // Nếu không tìm thấy đích
//    else
//    {
//        cout << "-unreachable-" << "\n";
//        cout << countSoDinhDaPhatTrien << " " << distanceMap[diemKetThuc] << "\n"; // In ra số đỉnh đã phát triển và khoảng cách đường đi
//    }
//}
//
//int main()
//{
//    int n, v;
//    cin >> v >> n;
//
//    vector<string> vertexList(v); // lưu danh sách các đỉnh (chuỗi)
//    vector<vector<int>> matrix(v, vector<int>(v, 0)); // ma trận kề của đồ thị
//    map<string, int> vertexNameToIndex; // map ánh xạ từ tên đỉnh qua index
//    map<int, string> vertexIndexToName; // map ánh xạ từ index qua tên đỉnh
//    queue<string> open; // Stack lưu thông tin các đỉnh chờ duyệt
//    vector<bool> close(v, 0); // danh sách lưu thông tin các đỉnh đã duyệt
//    map<string, string> getParentMap; // lưu thông tin cha con của các đỉnh, getParentMap[u] = v nghĩa là cha của u là v
//
//
//    // Nhập danh sách đỉnh
//    for (int i = 0; i < v; i++) {
//        string vertex;
//        cin >> vertex;
//        vertexList[i] = vertex;
//        vertexNameToIndex[vertex] = i; // ánh xạ tên vào index
//        vertexIndexToName[i] = vertex; // ánh xạ index vào tên
//    }
//
//
//    // Nhập ma trận kề
//    for (int i = 0; i < v; i++) {
//        for (int j = 0; j < v; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//
//    // Nhập thao tác
//    for (int i = 0; i < n; i++) {
//        string diemBatBau, diemKetThuc;
//        cin >> diemBatBau >> diemKetThuc;
//        bfs(diemBatBau, diemKetThuc, vertexList, matrix, vertexNameToIndex, vertexIndexToName, open, close, getParentMap);
//    }
//}
//
//// Có tham khảo bài của bạn phần xử lý lấy ra đường đi từ parent map 