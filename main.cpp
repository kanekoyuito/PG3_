#include"stdio.h"

//①template<typename Type>と書いてテンプレートを定義
template<typename Type1, typename Type2>
//②引数を①で宣言・定義したものとする
Type1 add(Type1 a, Type2 b) {
	//③戻り値は員数によって変化するので、キャスと(明示的な型変化)を使って整える
	if (a<b)
	{
		return a;
	}
	if (b<a)
	{
		return b;
	}
}
template<>
char add<char>(char a, char b) {
	return printf("数字以外を入れるな　カス\n");
}

int main() {
	printf("%d\n", add<int, float>(114, 51.4f));
	printf("%d\n", add<char, char>(110,100));
	printf("%d\n", add<double, double>(100, 100));
}