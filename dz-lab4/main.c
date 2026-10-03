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
		printf("Право первого хода получает ни команда A ни команда B");
	}
	return 0;
}