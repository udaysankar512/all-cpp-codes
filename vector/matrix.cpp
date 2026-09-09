#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {5, 7, 9}
    };

    cout<<"The size of the row :"<<matrix[0].size()<<endl; // this returns the row size of the matrix
    cout<<"The size of the column :"<<matrix.size()<<endl; // this return the column size of the matrix

    for (const vector<int>& row : matrix) {
        for (int value : row) {
            cout << value << ' ';
        }
        cout << endl;
    }


    return 0;
}