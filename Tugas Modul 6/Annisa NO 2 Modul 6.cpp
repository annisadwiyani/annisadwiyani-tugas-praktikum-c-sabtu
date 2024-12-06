#include <stdio.h>

int main() {
	// Loop dari 100 hingga 55 dengan pengurangan 5
	for (int i = 100; i >= 55; i -= 5) {
		printf("%d ", i);
	}
	printf("\n"); // Menambahkan baris baru setelah selesai mencetak
	return 0;
}
