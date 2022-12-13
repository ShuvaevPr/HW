#include <iostream>

int main() {

    const int M = 5;
    const int N = 5;
    int zmeyka[M][N];

    int count = 1;

    for (int i = 0; i < M; i++) {
        if (i % 2 == 0) {   //четные строки

            for (int j = 0; j < N; j++) {
                zmeyka[i][j] = count++;
            }
        } else {
            for (int j = N - 1; j >= 0; j--) {
                zmeyka[i][j] = count++;
            }
        }

    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << zmeyka[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
}