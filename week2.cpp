#include <iostream>
using namespace std;

int main() {
    int rows=3;
    int cols=4;
    int** matrix = new int*[rows];
    for(int i=0;i<rows;i++) {
        matrix[i] = new int[cols];
    }
    matrix[0][0]=1;
    matrix[0][1]=2;
    matrix[0][2]=3;
    matrix[0][3]=4;
    matrix[1][0]=5;
    matrix[1][1]=6;
    matrix[1][2]=7;
    matrix[1][3]=8;
    matrix[2][0]=9;
    matrix[2][1]=10;
    matrix[2][2]=11;
    matrix[2][3]=12;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<rows;i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;

}
