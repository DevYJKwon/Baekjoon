#include <iostream>

using namespace std;

int main()
{
    int mat1[50][50] = { 0, }, mat2[50][50] = { 0, };
    int row, col;
    cin >> row >> col;


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%1d", &mat1[i][j]);
        }
    }
     
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%1d", &mat2[i][j]);
        }
    }

    int count = 0;
    bool flag = false;
    for (int i = 0; i < row-2; i++) {
        for (int j = 0; j < col-2; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                for (int x = i; x < i + 3; x++) {
                    for (int y = j; y < j + 3; y++) {
                        mat1[x][y] = 1 - mat1[x][y];
                    }
                }
                count++;
            }
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                flag = true;
                count = -1;
                break;
            }
        }
        if (flag) {
            break;
        }
    }

    cout << count;

    return 0;
}

