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

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22MRa68XCcG7Xl5ODcYUcD%22%3E7Vhdb5swFP0tfYi0PWwyGAI85mvrplWqFGl79oILdAYz4zRJf%2F0u2AQMbZpkNOpDpcjBx9cX%2B9x7ruOM8CzdfhUkj294SNnIRuF2hOcj27Ycy4GvEtkpxPNdBUQiCbVRAyyTR6pBpNF1EtLCMJScM5nkJrjiWUZX0sCIEHxjmt1xZr41JxHtAcsVYX30VxLKWKG%2B7TX4NU2iuH6zNQ7USEpqY72TIiYh37QgvBjhmeBcqqd0O6OsJK%2FmRc378szofmGCZvKYCT%2Fn93%2BuheO7fJbmf29y%2FPgdffKVFxr2WGjcaqjga7GiB3zVdnJXk1e6XeouFzLmEc8IWzToVPB1FtJyhQh6jc0PznMALQDvqZQ7nRhkLTlAsUyZHtUpQURE5YG1YWX3QNhar20fAUhdylMqxQ4MBGVEJg8mGUTnULS3a2iGB830CawfILlFHmOQ5CVJmziRdJmTiv0N6MykABIrp9%2ByAoRikNLeLNAbzMt2ikZg4nv1M7TTql3oSVRIum2tqc9R3Mp3Tyf3ptGGhTSmvWBX93UF8NErsWqfkMstmrNwUtYJ6K0YKYpkZbJrZujA6damsqbpyRRs8ese4E%2B%2F4ZYnsOEmAkHw2TViYHWdKHHree0i8qIrG3dcKXJ6rqqQ7rd%2BfpTxMUGtJAGPYEUYo4xHgqQQvpyKBBZARXfsthk4XW53yZbWR9fz8gOaZvXQaSKzrCdUFnRUhl4Iy2Aycy4mszcrH%2BycKR8HmbXQsS8rHveYUImYp7%2FXxSAHj4DfbrBHPP8wKb9tWACyFVIZlHzAZ0zS0rdqe100NeZe6ZkfS9SblR8bdfxfne29Wdkh%2F%2F%2BzfuMNZ5SD%2FQnaymrcOXRt94VEG6wcjN%2FLgYcGKgde97fRK5cD75hQvbGztKooFzpEe%2FEYTDXBu2r8YCDVBN5lVVMn0oWvbxN9TStbdZVzq6vc%2BCw5nHFx6%2FF8hBqg2%2FzDoQLQ%2FE%2BEF%2F8A%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
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
