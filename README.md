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

<img width="777" height="799" alt="{07993255-FD76-4A13-B8CD-8BEE1D011DE2}" src="https://github.com/user-attachments/assets/d47dd748-6959-4266-84f4-90e470b89e77" />


[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22MRa68XCcG7Xl5ODcYUcD%22%3E7ZlLc9owEIB%2FjWeSQzt%2BYEyOGEh66YlD26NiC1uDbDGyHEx%2FfVeWjF90QhxgSoFhhHa1kqz9FmkFhjNLiheONvF3FmJq2GZYGM7csG1r5FrwITU7pfHcJ6WIOAm1Ua1Ykt9YK02tzUmIs5ahYIwKsmkrA5amOBAtHeKcbdtmK0bbs25QhHuKZYBoX%2FuDhCJW2ont1fpvmERxNbM11utLUGWsV5LFKGTbhspZGM6MMyZULSlmmErnVX5R%2FZ7%2F0rp%2FMI5TcUyHTCAu%2Bp30OJnYVUuGbuBdEPxtTAReblAgW7YAGHSxSChIFlRRtlEuX5ECwyz%2BilA6Y5Rx0FHplC8h4usHw3aey5dhz%2Fb1R2nPUnHY3ixfyl7Vpb3AhVhWbpRPkAnO1vgjQ6jVviGa69Uac9N4msvSNw0YdOJVdSj9slzoTpjDAzS8pv38glmCBd%2BBSdwIBVdz39ZhY1WxoEdxHC3rL0clIh200X7kmitUNNrDmEm6yY%2FCDK2IUkxZxFHyPuxrZDstLUx%2FEL%2FxAX6jDj%2B7zW%2FP9zMAYScLiSAsPQYij1nymmfv4wPIIcE1kpSl%2BEqpPgBWsHKhlC2lUnaD9xglct2q7IkyEJodF7YxeTKmsivMBApvJt%2B22Z2haThgHvWAj4Oi0DqwjTidMLQ7YXiSfWQHp%2B4xAcjyNJSbP2yU%2F%2BUewqUfNEPrXAeBZbYJjkYnIJiyO8AOQPNcAN3xGQCyXNzP8hbGyxzjrncCeDgN78n2wWR7qpNqWarE2y0T7%2FGl0mzPPAVfzRKHvQtknzfLeYB717BmGMAoSy0yLmIWsRTRRa312%2Ft0IzAg0KbyogviK2XBGlQUvWLqo2Adlb26Od8HA2Eod1hohEXnVtKHyTFFgry1nfgpMvYwMo2b0w2RaV03LkHHGUancy06GyFcEPFTW8r6L1n%2F6mppXjSa5jst%2FHtU99l7d%2FMd6V83LgR7dB2wrauGXSX6h3%2FVUoerfSni7jDi%2B4C9oa23zu8vAWY8DEwVXHcuZ%2BLiDePSvBzeEBt9rTo9GBDr%2F2LKtsY%2FWs7iDw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

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
