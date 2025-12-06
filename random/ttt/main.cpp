#include <iostream>
#include <vector>
using namespace std;
char get_char(int i) {
    switch (i)
    {
    case 0:
        return ' ';
        break;
    case 1:
        return 'o';
        break;
    case 2:
        return 'x';
        break;
    default:
        break;
    }
    return ' ';
}
bool check_win_player(vector<vector<int>> board,int player) {
    // check rows
    for (int i = 0;i<board.size();i++) {
        bool won = true;
        for (int j =0;j<board[i].size();j++) {
            if (board[i][j] != player) {
                won = false;
                break;
            }
        }
        if (won) {
            return true;
        }
    }
    // cols
    for (int i = 0;i<board.size();i++) {
        bool won = true;
        for (int j =0;j<board[i].size();j++) {
            if (board[j][i] != player) {
                won = false;
                break;
            }
        }
        if (won) {
            return true;
        }
    }
    // diagonal
    bool won = true;
    for (int i = 0; i < board.size(); i++) {
        if (board[i][i] != player) {
            won = false;
            break;
        }
    }
    if (won) {
        return true;
    }
    won = true;
    for (int i = 0; i < board.size(); i++) {
        if (board[i][board.size() - 1 - i] != player) {
            won = false;
            break;
        }
    }
    if (won) {
        return true;
    }
    return false;
}
bool is_board_full(vector<vector<int>> board) {
    for (int i = 0;i<board.size();i++) {
        for (int j = 0;j<board[i].size();j++) {
            if (board[i][j] == 0) {
                return false;
            }
        }
    }
    return true;
}
int check_win(vector<vector<int>> board) {
    for (int i = 1;i<3;i++) {
        if (check_win_player(board,i)) {
            return i;
        }
    }
    if (is_board_full(board)) {
        return 0;
    }
    return -1;
}
void print_board(vector<vector<int>> board) {
    for (int i = 0;i<board.size();i++) {
        cout << get_char(board[i][0]);
        for (int j = 1;j<board[i].size();j++) {
            cout << "|" << get_char(board[i][j]);
        }
        cout << "\n";
    }
}
int evaluate_result(int result, int ai, int depth) {
    if (result == ai) return 10 - depth;
    if (result == 0)  return 0;
    return depth - 10;
}
int minimax(vector<vector<int>> board, int depth, bool is_maximizing, int ai) {
    int result = check_win(board);
    if (result != -1) {
        return evaluate_result(result,ai,depth);
    }
    if (is_maximizing) {
        int best_score = -1000;
        for (int i = 0;i<board.size();i++) {
            for (int j = 0;j<board[i].size();j++) {
                if (board[i][j] == 0) {
                    board[i][j] = ai;
                    int score = minimax(board,depth+1,false, ai);
                    board[i][j] = 0;
                    best_score = max(score,best_score);
                }
            }
        }
        return best_score;
    } else {
        int opponent = (ai == 1) ? 2 : 1; 
        int best_score = 1000;
        for (int i = 0;i<board.size();i++) {
            for (int j = 0;j<board[i].size();j++) {
                if (board[i][j] == 0) {
                    board[i][j] = opponent;
                    int score = minimax(board,depth+1,true, ai);
                    board[i][j] = 0;
                    best_score = min(score,best_score); 
                }
            }
        }
        return best_score;
    }
    
}
pair<int,int> get_best_move(vector<vector<int>> board, int ai) {
    int best_score = -1000;
    pair<int,int> best_move = {-1,-1};
    for (int i = 0;i<board.size();i++) {
        for (int j = 0;j<board[i].size();j++) {
            if (board[i][j] == 0) {
                board[i][j] = ai;
                int score = minimax(board, 0,false,ai);
                board[i][j] = 0;
                if (score > best_score) {
                    best_score = score;
                    best_move = {i,j};
                }
            }
        }
    }
    return best_move;
}
int main() {
    vector<vector<int>> board(3, vector<int>(3,0));
    board[0][0] = 0;
    bool playing = true;
    pair<int,int> best = get_best_move(board,1);
    board[best.first][best.second] = 1;
    print_board(board);
    while (playing) {
        print_board(board);
        if (check_win(board) != -1) {
            if (check_win(board) == 2) {
                cout << "WOW YOU WON" << "\n";
            } else if (check_win(board) == 1) {
                cout << "you lost";
            } else {
                cout << "tie";
            };
            playing = false;
            break;
        }
        cout << "Enter your next move" << "\n";
        int i,j;
        cin >> i >> j;
        while (board[i][j] != 0) {
            cout << "Enter your next move" << "\n";
            cin >> i >> j;
        }
        board[i][j] = 2;
        pair<int,int> best = get_best_move(board,1);
        board[best.first][best.second] = 1;
        print_board(board);
    }
}
