#include <stdio.h>
#include <stdbool.h>

int main() {
    int N = 10;
    double A[N][N], B[N][N], C[N][N];
    bool flag;
    double result;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = 3;
            B[i][j] = 7.1;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    flag = true;
    result = N * 3 * 7.1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (C[i][j] != result) {
                flag = false;
                break;
            }
        }
    }

    if (flag == true) {
        printf("Test: correct\n");
    } else {
        printf("Test: incorrect\n");
    }

}