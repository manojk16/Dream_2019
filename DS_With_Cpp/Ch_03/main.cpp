#include <iostream>


using namespace std;
// Pointer & Classes:
// (*str).length() is smiliar to str->length();

//int main(){
//    string *str;
//    str = new string;
//    // Dynamic Array
//    int *p;
//    p= new int[10];
//    *p=25;
//    cout<<p[0]<<endl;
//
//
//    // Array Name: A Constant Pointer
//
//    return 0;
//}

// two-dimensional dynamic
void fill(int **board, int rows, int column);
void printboard(in t**p, int rows, int, in column);
int main(){
    int **board;
    int rows;
    int column;

    cout << "Create The Number of rows and coulmn \n"
    cin >> rows >> column ;

  // create the rows of board
  board = new int* [rows];
  // create the column of the boards
  for(int i=0;i<rows;++i){
      board[rows]=new board[column];
  }
  fill(board,rows,column);
  printboard(board, rows, column);
    return 0;
}

void fill(int **board, int rowsize, int columnsize){
    for(int i=0;i<rowsize;++i){
    *board;
    }
}