# Домашнее задание к работе 4

## Условие задачи
### Жеребьевка

Двум командам (A и B) выпали номера. Право первого хода получает та команда, для которой выполняется условие: только один из выпавших номеров четный. Запишите условие для получения права первого хода.


## 1. Алгоритм и блок-схема

### Алгоритм

1. Начало.
2. Ввод номера команды `А`.
3. Ввод номера команды `B`.
4. Проверка условия: Если хотя бы одно из чисел четное (или оба четные), то:
	• Присвоить `res` = 1.

6. Иначе (если оба числа нечетные):
	
	• Присвоить `res` = 0.
7. Вывести значение res.
8. Конец.

### Блок-схема

<img width="448" height="586" alt="{3B9405D0-D84E-49E0-B721-1E0FD1D2F851}" src="https://github.com/user-attachments/assets/dddf4d53-314d-4d07-8096-6ce5dfc9d687" />


[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22MRa68XCcG7Xl5ODcYUcD%22%3E3ZhLc9sgEMc%2FjWaSQzt6WHZ89CvppScf2h6JhSUmSOvBKJb76bsI9HYaj2xrWns0GJZFwO8PaCXLW8TZiyC76DsElFuuHWSWt7Rc1%2FGnNv4py1FbnjxPG0LBAuNUGdbsNzVG0y5MWUD3DUcJwCXbNY0bSBK6kQ0bEQIOTbct8GavOxLSjmG9Ibxr%2FcECGZlZuJPK%2Fo2yMCp6dsZTXROTwtnMZB%2BRAA41k7eyvIUAkDoXZwvKFbyCi273%2FEFtOTBBE3lOg70kQnYbmfvs5bGYMjZDuliYHyIm6XpHNqrmgAKjLZIxx5KDWbLfaeRbllHsZb5lnC%2BAg0AbV1C%2BBES8PViu95z%2FLHdR5h%2BVPyTytL%2Bd%2F7S%2Fzit%2FPdR3wlMzVGtpW9OlSue2hWN6mhR5TOd5ujKNqJA0q03ZQHqhEFMpjugS1XT0jWiHSnOnENLcxfNM2azsokjMigvLO1eiYMboclojluzSszTCWsI55RAKEn%2Bu1ODCzHIPe94L%2FvgE%2FFELvtuEX4pzCX08QwImGSTnKCAiiF%2FT%2FefsUaGA0YpnAgn9qyR1xFeU5AE1QS8fU1WTG1UzvMYkVoPWaaeoVKw3XLnW09SaqabYExomC3W5druHumOPfvQAH3stIefEBvZaa8htraGr7OAjPqzOWT2QJoE6M%2FGI%2Bvd2r1CTMAI4tzo%2FHbuJfzS6Av4E7ou%2BfSv6%2FvgG9CGVd%2FL8EsU2vv2jy59cgTxNgnsM7WYmhFOpDvP8PMwbDxXUTexriGOEoEHnXaMrFqRiQzsRe11DvMvaFEHICEJICF9V1nnzeKupiqtkpt6JsPjKYfNWcseOQipbMWgXpqCcSPbenMRFZNx%2BZGpx8oBkGvHhEHS8fnRacezNCNGMyZ%2FGU%2BV%2FqfxX35SWWa1qeTSFLtUyYmpv%2FpF5lxsI9uj%2FgO1cBLuIj06%2FQ%2BvD1R2KuN%2BPeLlgBtz6VWQzBJhxPzCFuHfLZdKPSz0sHZCNicmuDwaL1WfDvK728dVb%2FQE%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

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

	res =((A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0));
	printf("Доступ разрешен (1 - да, 0 - нет): %d\n", res);
	return 0;
	
	
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
