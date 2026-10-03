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

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%91%D0%BB%D0%BE%D0%BA-%D1%81%D1%85%D0%B5%D0%BC%D0%B0%22%20id%3D%220%22%3E3Vlbb5swFP4te0BaH1JxNfDY9LZpqjQpk7Y9OuACKsHMOLf9%2BtmxHbBJupSRaKpUEfv4HPv483cOx9TybhebRwLr%2FAmnqLRcO91Y3p3luq4T2uyHS7ZCAmJHCDJSpELUEcyK30gKpV22LFLUaIoU45IWtS5McFWhhGoySAhe62rPuNRXrWGGeoJZAsu%2B9HuR0lxIo8Bu5Z9QkeVqZWDLkQVUylLQ5DDF647Iu7e8W4IxFa3F5haVHDyFi7B7ODK6d4ygip5i4PYN5BwN3artErysUsQtHMubrvOColkNEz66ZgfMZDldlHJYWK9guZTW1p1txXf8ObUtphKFqs2e093zXhohQtGm44X0%2BRHhBaJky1TyDqwK7nV7BI7CVc7iKeAl0dQwlATI9jO3GLGGhOkwZN4pkLFzrXmTacGyRCXOCFwwdGpECrYiIubY13bg7Qi7oGSeTNNixZoZ3ekIUVPDSvMM%2FFpybk3nMHnJdgc7SXCJ2bI3PIoIrBq1s%2BkugvZjJUd%2BkkLy8pFk848MSQaVrX6uxC8fcYNAdLqNqyvhlVxe%2BXkjFPb%2BMvCFy%2Fo2mFjb3AC2gANsATpb3Ehni2OPQBf%2FpAjL8WK%2BbAacPT8Zyw04yLzFZFzMHWd%2FAC5qgaJqcKQ7%2Bh%2BUtvcwCNQ9Qh1UXd9A1TdQjUZANTgF1QFYjkMslnc0CCYGsbwxiAUuSawPb6JVh4ZnJFbgGaj6I6AanYNYk3MRKzJiC4wRW%2FGFaoIb%2Be7nT1EfBLv6AJyrGpiotCHRisAIaKmaFKW9mrGPH16SBGmVVwdSPsNMdjGhOc5wBcv7VjpFVXrDy1emMC9x8nIIZQpJhminVOnDRlAJabHS3f0nDJxhGHgXwMC%2FFAbuMAz8C2AQHA5AXxbipwMkA2cSHMdLzvQVF2zTrQp%2Bfm6YOyag%2BwVPw9j7fzEGhzHuJjb3UlT0h8EERoeJrUa2P1jHvg5U9yfvqs7dRuttVW9T0B%2Bd9s92CtZrjXhH2fSPJByL9ifwXNUkjlGThMYrRuAtrboXc2MizyhuQGDEnNhob6IhURW8G7pcxyDSKWM7r5KGdzpX7yNEis4f24dZEPoj0SkOL0cnMIxOweh0atimqBqvcIWU7KHg3h857PhCWTo8jsrwm8Zo30bMm8b%2B09mYNw3nc71y1uTbN3u2Sr7czvOn58eJO%2FAlH%2FX507IjKWHTFImOXnuH0ZNI0Ekhf0kfKmE5Wrq6DoO%2FZKwjtDM%2B65165znIzc5hBq%2Bc1W4FBhPcdhRqngea43kpDvSbVGwbn5nN1yKw36QPnFf1WUN4fCzZ6d6F3sCs6RhuRHF4tqx5MBQGvpnD%2FygU3HceCp5nfFQI30JV03o8qpqVwmCqsm77%2Fyih3v5Xz7v%2FAw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
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
