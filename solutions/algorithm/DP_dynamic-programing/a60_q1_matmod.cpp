#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int>> Matrix;

// Function to multiply two 2x2 matrices under modulo k
Matrix matrix_multiply(const Matrix &M, const Matrix &N, int k) {
    Matrix result(2, vector<int>(2));
    result[0][0] = (M[0][0] * N[0][0] + M[0][1] * N[1][0]) % k;
    result[0][1] = (M[0][0] * N[0][1] + M[0][1] * N[1][1]) % k;
    result[1][0] = (M[1][0] * N[0][0] + M[1][1] * N[1][0]) % k;
    result[1][1] = (M[1][0] * N[0][1] + M[1][1] * N[1][1]) % k;
    return result;
}

// Function to perform matrix exponentiation under modulo k
Matrix matrix_exponentiation(Matrix A, long long n, int k) {
    // Init identity matrix
    Matrix result = {{1, 0}, {0, 1}};
    
    while (n > 0) {
        if (n % 2 == 1) {
            result = matrix_multiply(result, A, k);
        }
        A = matrix_multiply(A, A, k);
        n /= 2;
    }
    return result;
}

int main() {
    long long n;
    int k;
    cin >> n >> k;

    Matrix A(2, vector<int>(2));
    cin >> A[0][0] >> A[0][1] >> A[1][0] >> A[1][1];

    A[0][0] %= k;
    A[0][1] %= k;
    A[1][0] %= k;
    A[1][1] %= k;

    // Calculate A^n % k
    Matrix result = matrix_exponentiation(A, n, k);

    cout << result[0][0] << " " << result[0][1] << " " 
         << result[1][0] << " " << result[1][1] << endl;

    return 0;
}
