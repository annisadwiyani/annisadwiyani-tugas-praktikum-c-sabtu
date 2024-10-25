#include <stdio.h>

int main() {
    int N;

    // Input nilai N
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    // Memeriksa apakah N lebih besar dari 50
    if (N > 50) {
        N = N + 10; // Jika ya, tambahkan 10
    }

    // Kurangi N dengan 25
    N = N - 25;

    // Output nilai N
    printf("Nilai N adalah: %d\n", N);

    return 0;
}
