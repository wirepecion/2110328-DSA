#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isvalid(const vector<string>& board, int row, int col, int N) {

    for (int j = 0; j < N; ++j) {
        if (j != col && board[row][j] == 'Q') {
            return false;
        }
    }

    for (int i = 0; i < N; ++i) {
        if (i != row && board[i][col] == 'Q') {
            return false;
        }
    }

    for (int i = 1; row - i >= 0 && col - i >= 0; ++i) {
        if (board[row - i][col - i] == 'Q') return false;
    }
    for (int i = 1; row + i < N && col + i < N; ++i) {
        if (board[row + i][col + i] == 'Q') return false;
    }

    for (int i = 1; row - i >= 0 && col + i < N; ++i) {
        if (board[row - i][col + i] == 'Q') return false;
    }
    for (int i = 1; row + i < N && col - i >= 0; ++i) {
        if (board[row + i][col - i] == 'Q') return false;
    }

    return true; 
}

int main() {
    int N;
    cin >> N;

    vector<string> board(N);
    for (int i = 0; i < N; ++i) {
        cin >> board[i];
    }

    vector<string> result = board;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (board[i][j] == 'Q' && !isvalid(board, i, j, N)) {
                result[i][j] = '-';
            }
        }
    }

    for (const string& row : result) {
        cout << row << endl;
    }

    return 0;
}
