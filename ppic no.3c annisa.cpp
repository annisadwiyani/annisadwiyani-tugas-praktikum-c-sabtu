#include <stdio.h>

int main() {
    int N;

    // Input nilai N
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    // Memeriksa apakah N lebih besar dari 50
    if (N > 50) {
        N = N - 25; // Jika ya, kurangi 25
    }

    // Tambahkan 10 ke N
    N = N + 10;

    // Output nilai N
    printf("Nilai N adalah: %d\n", N);

    return 0;
}
