#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int get() {

    int board[5][5];
    for (int y = 0; y < 5; ++y) {
        for (int x = 0; x < 5; ++x) {
            if (y == 2 && x == 2) {
                board[x][y] = -2;
                x++;
            }
            int tmp;
            cin >> tmp;
            board[x][y] = tmp;
        }
    }

    vector<int> nums;
    for (int z = 0; z < 75; ++z) {
        int in;
        cin >> in;
        nums.push_back(in);
    }
    int count = 0;
    while (true){
        int in = nums[count];
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if (board[i][j] == in) {
                    board[i][j] = -2;
                }
            }
        }

//        for (int i = 0; i < 5; ++i) {
//            for (int j = 0; j < 5; ++j) {
//                cout << board[i][j] << " ";
//
//            }
//            cout << endl;
//        }
//        cout << endl;
        for (int i = 0; i < 5; ++i) {
            int sumj = 0;
            for (int j = 0; j < 5; ++j) {
                if (board[i][j] == -2) {
                    sumj++;
                }
                if (sumj >= 5) {
//                    cout <<"ij"<<endl;
                    return count;
                }
            }
        }
        for (int j = 0; j < 5; ++j) {
            int sumj = 0;
            for (int i = 0; i < 5; ++i) {
                if (board[i][j] == -2) {
                    sumj++;
                }
                //cout << sumj << endl << endl;
                if (sumj >= 5) {
//                    cout <<"j"<<endl;
                    return count;
                }
            }
        }
        int sumj = 0;
        for (int j = 0; j < 5; ++j) {
//            cout << j<<endl;
            if (board[j][j] == -2) {
                sumj++;
            }
//            cout << sumj << endl << endl;
            if (sumj >= 5) {
//                cout <<"diag1"<<endl;
                return count;
            }
        }
        sumj=0;
        for (int j = 0; j < 5; ++j) {
//            cout << j<<5-j<<endl;
            if (board[j][4 - j] == -2) {
                sumj++;
            }
//            cout << sumj << endl << endl;
            if (sumj >= 5) {
//                cout <<"diag2"<<endl;
                return count;
            }
//            cout << sumj<<endl;
        }
        count++;
    }
}

int main() {
    int n;
    cin >> n;
    for (int k = 0; k < n; ++k) {

        cout << "BINGO after " << get()+1<< " numbers announced" << endl;

    }
    return 0;
}