# Домашнее задание к работе 4

## Условие задачи
### Жеребьевка

Двум командам (A и B) выпали номера. Право первого хода получает та команда, для которой выполняется условие: только один из выпавших номеров четный. Запишите условие для получения права первого хода.


## 1. Алгоритм и блок-схема

### Алгоритм

1. Начало.
2. Ввод номера команды `А`.
3. Ввод номера команды `B`.
4. Если номер команды `А` - четный, а номер команды `B` - нечетный:
   - Вывод: `Право первого хода получает команда A`.
5. Если номер команды `B` - четный, а номер команды `A` - нечетный:
	- Вывод: `Право первого хода получает команда B`.
6. Если оба числа имеют одинаковую четность:
	- Вывод: `Право первого хода не получает ни команда A ни команда B`
6. Конец.

### Блок-схема

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=blok-shema_A_B.drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%91%D0%BB%D0%BE%D0%BA-%D1%81%D1%85%D0%B5%D0%BC%D0%B0%22%20id%3D%220%22%3E3VnbjqM4EP2WeUCafkiLSwzksdNJelerkUbKSDvz6IAbUBPMGnLbr18b22A7STfDkmg0UkRc5Sq7fHxctsHynrfHFwLL9AuOUW65dny0vIXluq4T2PSPaU5c488crkhIFnOVolhn%2FyKhFH7JLotRpRnWGOd1VurKCBcFimpNBwnBB93sFed6ryVM0JliHcH8XPt3Ftcp14bA7vR%2FoCxJZc%2B%2BLWq2UBoLRZXCGB8Ulbe0vGeCcc1L2%2BMzyhl4Ehfut7pS2wZGUFH3cXDPHUQbVX2SwyV4V8SIeTiWNz%2BkWY3WJYxY7YFOMNWl9TYX1dx7D%2FOd8LYWtjVbsOfctqhJGMgyfc6b51I4IVKjoxKFiPkF4S2qyYmapAqsEu5DNwWOxFW04kngBdFkNRQESNqWO4xoQcB0GTKvD2R0XktWpFYwz1GOEwK3FJ0SkYz2iIhZ97Wr%2BHmEXT%2BnkczjbE%2BLSd3YcFVVwkKLzP9nx7g138DoLWkmdhLhHNNun9gqIrCo5MjmzQpq63KG%2FCSG5O0zSTafKZIUKlv%2BPfB%2FVuMCwAW18PDAoxLdyzifuEEbLwWfh6wPg6q1wQ1gi3%2BBLb7OFjfU2eLYI9Bl2muFpXi72VUD5p7NjOUCBjIrUR1Ts8Dpz4fbkqMoCwxpxf6TtPZWg0BtEVJQdacGqlMD1XAEVEEfVAdgOQ6xaN7RIJgYxPLGIJZ%2FT2J9%2BilaKTS8IbGAZ6DqjYBqeAtiNVvgqtn8bGXzc%2BXmx8VV8wSKmTRgT08xpgZAqZqKNkU7C9GOEJey8bZZoHgBuQ3TWjUAt3k6Qn%2BjddGemOQ50B9hBmd3OtI8KeguFOT8Wx1mJjLrCbTCMdCSR2oUnx15z%2FHDOxIh7eCoQMpaWAsRkzrFCS5gvuy0c1TET%2Bz0TQ02OY7eLqFcQ5KgWjlpncNGUA7rbK%2BH%2B78wcIZh4N0Bg%2Bm9MHCHYTC9Awbg8gJs015vgMTCmYDreImWvuKMDrozwa%2BvFQ3HBLTtsB%2FG3q%2BLsX8Z44W2JdyJitNhMPmjw0R7I6fvVLAfgRR%2FMFEKi6MmnaR0zOrvSvlH1wSVOicmSJ%2FzKQnGon0PnssjlWMcqQJji%2BF4Cy%2F1vYLRkGeczXxgrDk%2B0LOGhqwq8NvQ5XHmhzplbOdd0jBBeXNwhUjh7df2ZRYE05HoNAvuRyd%2FGJ3A6HSq6KBqWV%2FgAkndKmPRX5ns2Z2ydHAdleEXpdFe7Zg3jfbN35g3DefPcu8cyLdv9nof%2FfW8Sb%2B8vkzcgZt8eM6fjh1RDqsqi3T0ujuMnkSAkkI%2BSB8yYTlaunoMwAcZ6wrtjLeSfe88F7mpTCZ4Z66aHihM8KQYlCwPVNfz0sw3blKz4BG8n4CM%2FYx6GEzhMVxLX3p%2Fgfmmom8edJzLYdwiD14k98C9NviFyO3%2B5uT2PIPcgfEJyLB3w3ftP6C22dt41DbPCoOpTcXugxo37z5Lesv%2FAA%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
## 2. Реализация программы
Программа написана на языке **C++**.

```cpp
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_CTYPE, "RUS");
	int A, B;
	printf("Введите номер команды А:");
	scanf("%d", &A);
	printf("Введите номер команды B:");
	scanf("%d", &B);

	if (A % 2 == 0 && B % 2 != 0)
	{
		printf("Право первого хода получает команда А");
	}
	else if (A % 2 != 0 && B % 2 == 0)
	{
		printf("Право первого хода получает команда B");
	}
	else
	{
		printf("Право первого хода не получает ни команда A ни команда B");
	}
	return 0;
}
```
## 3. Результаты работы программы
```text
Введите номер команды А:2
Введите номер команды B:5
Право первого хода получает команда А
```
## 4. Информация о разработчике
```text
Имя: Коноваленко Ярослав
Вариант: 13
Группа: бИЦТ-261
Подгруппа: 1
