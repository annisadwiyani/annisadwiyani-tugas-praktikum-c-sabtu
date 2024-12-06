#include <stdio.h>

int main(){
	// Variabel untuk menyimpan nilai deret
	int num = 1;
	
	// Loop untuk mencetak deret
	for (int i = 0; i <= 10; i++ ) {
		printf("%d ", num);
		num *= 2; // Mengalikan nilai num dengan 2 setiap iterasi
	}
	printf("\n"); // Menambahkan baris baru setelah selesai mencetak
	return 0;
}
