# Handout for Task 02

## Vector product in Julia

```julia
N = 10^8

a = 3
x = fill(0.1, N)
y = fill(7.1, N)

d = a*x + y

test = all(x -> x == 7.4, d)
println(test)
```

## Vector product in C

```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    int N = 10;
    double a;
    double x[N], y[N], d[N];
    bool flag;

    a = 3;
    for (int i = 0; i < N; i++) {
        x[i] = 0.1;
        y[i] = 7.1;
    }

    for (int i = 0; i < N; i++) {
        d[i] = a*x[i] + y[i];
    }

    flag = true;
    for (int i = 0; i < N; i++) {
        if (d[i] != 7.4) {
            flag = false;
            break;
        }
    }

    if (flag == true) {
        printf("Test: correct\n");
    } else {
        printf("Test: incorrect\n");
    }
```

## Matrix multiplication in Julia

```julia
N = 10
A = fill(3, N, N)
B = fill(7.1, N, N)

C = A*B

all(x -> x == N*3*7.1, C)
```

## Matrix multiplication in C

```c
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
```

## Answer to questions
**Did you find any problems in running the codes for some N. If so, do you have an idea why?**
The matrix multiplication did not work for high N. In C this is due to the fact that the stack size is limited and the matrices are too large to fit in the stack. In Julia, the problem is that the number of operations is too high.

**Where you able to test correctly the sum and product of points 1-3? If so, how? If not, what was the problem?**
No, the results were not correct. This is due to floating point errors.