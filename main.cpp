#include"stdio.h"
#include"Windows.h"

int main() {

	SetConsoleOutputCP(65001);
	char str[] = "こんちわ";

	printf("%s",str);

	return 0;
}