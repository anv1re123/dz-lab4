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
5. Иначе (если оба числа нечетные):
	• Присвоить `res` = 0.
5. Вывод: Вывести значение res.
5. Конец.

### Блок-схема

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22MRa68XCcG7Xl5ODcYUcD%22%3E7Vhbb5swFP4tfYi0PmwytxAec9u6aZUqRVqf3eACncHMOE3SX79jbAKGNjfRqA%2BVIsf%2BfHywv3M%2BGzNwpunmB8d5fMtCQgc2CjcDZzaw7ZHnQimBrQJc31FAxJNQQVYNLJIXokGk0VUSksIwFIxRkeQmuGRZRpbCwDDnbG2aPTJqPjXHEekAiyWmXfQ%2BCUWsl2X7NX5DkiiunmwNA9WT4spYr6SIccjWDciZD5wpZ0yoWrqZEiq5q3hR476%2F0bubGCeZOGbAn9nT3xvujjw2TfN%2Ft7nz8gt9HSkvJOywULvVUMFWfEn2%2BKrsxLYiT7pd6CbjImYRyzCd1%2BiEs1UWEjlDBK3a5jdjOYAWgE9EiK1ODLwSDKBYpFT36pTAPCJiz9x00j1jutJz20UAMpewlAi%2BBQNOKBbJs0kG1jkU7exqmqGimT6B9T0kN8ijFJJckrSOE0EWOS7ZX4PMTAogsXLyMytAKAYpzcUCvcFMlhM0AJORX9WhnJTlXA8iXJBNY05djuJGvvs6ude1NiykMe3F8XRb7wAj9E6s2ifkcoPmLBzLfQJaS4qLIlma7JoZ2nO6NamsaHo1BRv8env400%2B4YwksuI5AEHzzjBhYbSdK3HpccxM56Mp2Wq4UOR1XZUh3Sz8%2Fys4xQS0lAVWwwpQSyiKOUwhfTngCEyC83XdXd5wut8dkQ6qj6235AU3Tqus0kVnWKyoLWipDB8LSm8zci8nsw8rHcc%2BUj4vMvdC1Lyse75hQ8ZilD6uil4OHw7sbrNGZfRnLfxsmgGyFlAaSD%2FgNcSp9q7LTRBNj7JUeeS1Rfyp%2FNmr5vzrbez2z651p9lDk9epOE%2B%2FuvGvkoNM6Im3vQFr0Jt7hp3h91JN4%2FfabzDuL1z8mVB%2Fs5Cv1f6EjrxOP3lQTfKpmFPSkmsC%2FrGqqRLrwZWusL1WyVBcvr7x4Dc%2BSwxnXrA7PR6gBmvX3CBWA%2BqOOM%2F8P%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
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
