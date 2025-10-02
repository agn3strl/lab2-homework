
#include <stdio.h>
#include <locale.h>

int main()

{

	const float p = 0.15;
	int x = 1000;
	int n = 4;

	setlocale(LC_CTYPE, "RUS");

	int pp = p * 100;
	int bill = x;
	int guests = n;
	int total_bill = guests * bill;
	int tips = total_bill * p;

	printf("РАСЧЁТ СУММЫ ЧАЕВЫХ\n");
	printf("-------------------\n\n");
	printf("УСЛОВИЯ:\n");
	printf("- Количество гостей за столом - %d человека.\n", guests);
	printf("- Официант подал им счёт на 1000 руб. каждому.\n");
	printf("- Гости решают оставить чаевые официанту в размере %d процентов от счёта.\n\n", pp);
	printf("РАСЧЁТ:\n");
	printf("- Общий счёт стола равен сумме счетов всех гостей = %d * %d = %d руб.\n", bill, guests, total_bill);
	printf("- Сумма чаевых составляет 15 процентов от общего счёта = %d * %0.2f = %d руб.\n\n", total_bill, p, tips);
	printf("ОТВЕТ:\n");
	printf("%d руб.\n\n", tips);

	return 0;

}