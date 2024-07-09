#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
int main() {
	int zzin_k = 1, zzin_q = 1, zzin_r = 2, zzin_b = 2, zzin_n = 2, zzin_p = 8;

	int king, queen, rook, bee, nite, phone;

	scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bee, &nite, &phone);

	king = zzin_k - king;
	queen = zzin_q - queen;
	rook = zzin_r - rook;
	bee = zzin_b - bee;
	nite = zzin_n - nite;
	phone = zzin_p - phone;

	printf("%d %d %d %d %d %d", king, queen, rook, bee, nite, phone);
}
