#include<bits/stdc++.h>
using namespace std;

int rowMax1(vector<vector<int>>&matrix,int n,int m){
    int cnt_max = 0;
    int index = -1;

    //traverse the matrix
    for(int i = 0;i < n;i++){
        int cnt_ones = 0;
        for(int j = 0;j < m;j++){
            cnt_ones += matrix[i][j];
        }
        if(cnt_ones > cnt_max){
            cnt_max = cnt_ones; //updates the count of 1s where there are maximum 1s (gives how many 1s occured at max in a row)
            index = i; //updates row name of max 1s (gives the index of that row where max 1 occured)
        }
    }
    return index;
}
int main(){
    vector<vector<int>>matrix = {{1,1,1},{0,0,1},{0,0,0}};
    int n = 3, m = 3;
    cout << rowMax1(matrix,n,m);
    return 0;
}

//same code with user input of matrix size and its elements

/*#include<bits/stdc++.h>
using namespace std;

int rowMax1(vector<vector<int>>&matrix, int n, int m){
    int cnt_max = 0;
    int index = -1;

    // Traverse the matrix
    for(int i = 0; i < n; i++){
        int cnt_ones = 0;
        for(int j = 0; j < m; j++){
            cnt_ones += matrix[i][j];
        }
        if(cnt_ones > cnt_max){
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}

int main(){
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m)); // Declare a matrix of size n x m

    cout << "Enter the elements of the matrix (row by row):" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j]; // Input each element of the matrix
        }
    }

    int result = rowMax1(matrix, n, m);
    cout << "The index of the row with the maximum number of 1s is: " << result << endl;

    return 0;
}*/