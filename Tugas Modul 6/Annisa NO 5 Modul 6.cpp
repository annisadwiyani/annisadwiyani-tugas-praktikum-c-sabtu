#include <stdio.h>

int main() {
	double saldo = 1000000; // Saldo awal
	double bunga = 0.02;    // Bunga per bulan (2%)
	int bulan = 10;         // Total bulan
	
	for (int i = 1; i <= bulan; i++) {
		saldo += saldo * bunga; // Hitung bunga dan tambahkan ke saldo
		printf("Saldo setelah bulan ke-%d: Rp. %.2f\n", i, saldo);
	}
	
	printf("\nJumlah uang setelah %d bulan: Rp. %.2f\n", bulan, saldo);
	
	return 0;
}
