# Домашнее задание к работе 2

## Условие задачи
Четыре человека пообедали в ресторане. Официант подал им счет на Х руб. каждому.
Они решают оставить официанту чаевые в размере 15% от счета. Составьте программу,
которая выведет на экран сумму чаевых, которую получил официант.

## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
2. Объявить константы:
   - 'p' = 0.15 - процент, который чаевые составляют от счёта
   - 'guests' = 4 - количество гостей
3. Задать исходные данные:
   - `bill` = 1000 — счёт каждого гостя
4. Вычислить общий счёт:
   - 'total_bill' = 'guests' * 'bill'
5. Вычислить сумму чаевых:
   - 'tips' = 'total_bill' * 'p'
6. Вывести результаты расчетов с подстановкой всех значений в текст.
7. **Конец**

### Блок-схема

https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=%D1%80%D0%B5%D1%88%D0%B5%D0%BD%D0%B8%D0%B5%20%D0%B4%D0%B7%20%D0%BB%D0%B0%D0%B1%D0%B02.html&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0%20%E2%80%94%201%22%20id%3D%22UUZ0zvsHhKDI9sizftYO%22%3E7Zlbb5swFMc%2FTV4mdeIe8tiQdHtYpUh56Po0OdiAOwcz4zTJPv0MmIsxVdJ2LFPbF4SPb%2FH%2Fd86xTSZ2sD18YSBLbilEZGIZ8DCxFxPL8k1HPAvDsTK4U78yxAzDymS2hjX%2BjaTRkNYdhihXGnJKCceZagxpmqKQKzbAGN2rzSJK1FkzECPNsA4B0a13GPJELsuatvavCMdJPbPpzaqaLagby5XkCYB03zHZy4kdMEp59bY9BIgU2tW6VP1unqhtfhhDKT%2Bnw8394sowV%2BbtbQIfjLtVMIt%2BXclRHgHZyQXLH8uPtQJiFCG2KMz3CeZonYGwqNkL3MKW8C0RJVO8RpiQgBLKyn42BMiPQmHPOaM%2FUafGC320iUSNnBwxjg5PrspstBI%2BhugWcXYUTWQHu5ZX%2BpfpyfK%2BpWV6XmVLOqQc2Q5IB4mboVsNxYuU8RmS2mdImsLrwjdFKSQgz3GoKsnoLoWomMRoVEJQc9STGnU0cA1dgtrGEAEcP6rDD%2BkiZ1hRLCZuEDiGisAyetLmdMdCJHt1PfTUQH1GHLAYcW2gElOz7JeTc06TE0GcFa9CfEAIIjRmYCsYZYhhMT1i%2FbpVW3E6fg6ozoBD8eQiHzpD8eRbG1u4%2BCjx1DBQ4mnAmUaLJ%2Fe9xZM9m312VQj%2BCyNKH6rh%2B49iytPoccoB%2BbHBZd%2FSZMjCp3K%2FRznPNcIqwedtRFEUWeHgRgS9jeeOFDhN%2BWKBM9XjRPj8WhYp4wmNaQrIsrX2IqVt843STKr7gDg%2FyjQFdpyq2qMD5t%2BL7sLvqtJ9p2ZxkCOXheMzA1KspfT70ym8cupT7XSWZ0fuq8D4HxnN9v5aRnP6x42RM9rsg57Tz1mvoNff2kamV98r3zM%2Bt38GeDk%2Btx%2FHY%2BOz9PNE8SmgPkkoh4viPJG9gaNEk%2BEudpQw9UttJft7vx416etyaM64tf7nn3DM6XBOudgnHHPgzimyxXxRPo2J0Mqf1u%2FiOS%2BfS013oQnX1EtpWpAABMdpscMIlUr372ov23TIFArjEJBr2W2LISRPER3aoF6HaGoriEzP1RANeb09GiH9XlkyuJYkWlpuSct7y2zUlORenM1UY1Pf6oPmsh8M7s1vForljAZFFNs%2FEapzVvtPjL38Aw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E

## 2. Реализация программы

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


## 3. Результаты работы программы

РАСЧЁТ СУММЫ ЧАЕВЫХ
-------------------

УСЛОВИЯ:
- Количество гостей за столом - 4 человека.
- Официант подал им счёт на 1000 руб. каждому.
- Гости решают оставить чаевые официанту в размере 15 процентов от счёта.

РАСЧЁТ:
- Общий счёт стола равен сумме счетов всех гостей = 1000 * 4 = 4000 руб.
- Сумма чаевых составляет 15 процентов от общего счёта = 4000 * 0.15 = 600 руб.

ОТВЕТ:
600 руб.

## 4. Информация о разработчике

Вильальба Агния, бТИИ-251
