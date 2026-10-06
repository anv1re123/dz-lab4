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

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22MRa68XCcG7Xl5ODcYUcD%22%3E7Vhdb5swFP0tfUDaHjaZrwCPSZqtm1apUqTt2Qsu0BnMjNMk%2FfW7jk3A0OZrNOpDJeTg4%2Btr%2B9x77BjLnebrrxyX6S2LCbUcFK8t99pyHNuzPfiRyEYhQegrIOFZrI0aYJ49EQ0ijS6zmFSGoWCMiqw0wQUrCrIQBoY5ZyvT7J5Rc9QSJ6QHzBeY9tFfWSxShYZO0OA3JEvSemR7FKmWHNfGeiVVimO2akHuzHKnnDGh3vL1lFBJXs2L6vflhdbdxDgpxDEdfl4%2F%2FLnhXuizaV7%2BvS3dp%2B%2FoU6i8kLjHQuNWQxVb8gXZ46u2E5uaPOl2rquMi5QlrMB01qATzpZFTOQMEdQamx%2BMlQDaAD4QITY6MfBSMIBSkVPdqlMC84SIPXNzld0jpks9t10EIHUJy4ngGzDghGKRPZpkYJ1Dyc6uoRleNNMnsL6H5BZ5lEKSS5JWaSbIvMRb9legM5MCSKySfCsqEIpBSnuxQG90LcsJssAkDOp3KCfbcqY7ES7IujWnPkdpK98DndyrRhs20pj24vq6rneAEL0Sq84JudyiuYjHcp%2BA2oLiqsoWJrtmhg6cbm0qa5qeTcEWv%2F4e%2FvQIdyyDBTcRiKLPvhEDu%2BtEiVv3a28iB105bseVIqfnahvS3dLPj7J7TFC3koBXsMKUEsoSjnMIX0l4BhMgvNt21zScLrf7bE3qo%2Btl%2BQFN07rpNJHZ9jMqizoqQwfCMpjMvIvJ7M3Kx%2FXOlI%2BHzL3Qcy4rHv%2BYUPGU5b%2BX1SAHz4exJZcI4yLZIkGJSxrgGeFculRlr4omRt8r3fOjRIOpfBzU8X91tvdmZvv8%2F8%2F8jRHO2AV2B2crmd3OWev4B%2FJrsF1g9L4LBGigXSDo%2FiV65V0gOCZUb%2BwI5XAJvNTZ2YvHYKqJ3lUTRgOpJgouq5o6kS58axvr25ks1Q3O397gRmfJ4Yz7Wo%2FnI9QA1ebDhgpA83nInf0D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
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

	res =((A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0) || (A % 2 == 0 && B % 2 == 0));
	printf("Доступ разрешен (1 - да, 0 - нет): %d\n", res);
	
	
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
