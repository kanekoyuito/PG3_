#include <stdio.h>

int Recursive1(int kyuuyo, int time, int kotei) {
	if (kyuuyo >= kotei) {
		printf("%d時間後に超える", time);
		return time;
	}
	printf("%d　%d\n", kyuuyo, kotei);
	kyuuyo = kyuuyo * 2 - 50;

	return (Recursive1(kyuuyo, ++time, kotei += 1072));
}

int main() {

	int saiki = 100;
	int ippan = 1072;
	int zikan = 0;
	int resullt1 = Recursive1(saiki, zikan, ippan);;

	return 0;
}