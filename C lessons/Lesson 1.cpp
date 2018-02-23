#include "stdafx.h"
#include "math.h"
#include "stdio.h"

#pragma warning(disable : 4996) //без этого не компилится из-за сканфа, требует сканф_с

//Evdokhin D.D.

void Menu(int num);
void Task1();
void Task2();
void Task3a();
void Task3b();
void Task8();

int main(int argc, char *argv[])
{
	//Task1();//WORK!
	//Task2();//WORK!
	//Task3a();//WORK!
	//Task3b();//WORK!
	//Task8();//WORK! 

	//здесь два гетчара потому что при одном у меня все равно закрывается приложение =(
	getchar();
	getchar();
	return 0;
}

//1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах.
void Task1()
{
	double mass;
	double height;
	
	printf("%s", "Enter mass:" );
	scanf("%lf", &mass);
	printf("%s", "Enter height: ");
	scanf("%lf", &height);

	double index = mass / (pow(height, 2));
	printf("%s%lf", "I = ", index);
}

//2. Найти максимальное из четырех чисел. Массивы не использовать.
void Task2()
{
	int n1, n2, n3, n4;
	printf("Enter 4 numbers with Space: ");
	scanf("%i%i%i%i", &n1, &n2, &n3, &n4);

	//вариант для нахождения НОМЕРА числа
	int max = n1;
	int maxn = 1;
	if (max < n2) { max = n2; maxn = 2; }
	if (max < n3) { max = n3; maxn = 3; }
	if (max < n4) { max = n4; maxn = 4; }
	printf("Max number is # %i", maxn);

	//этот вариант если нужно только число
	if (n1 < n2) n1 = n2;
	if (n1 < n3) n1 = n3;
	if (n1 < n4) n1 = n4;
	printf("Max number is: %i", n1);
}

//3. Написать программу обмена значениями двух целочисленных переменных:
//a.с использованием третьей переменной;
//b.*без использования третьей переменной.
void Task3a()
{
	int a, b, c;
	printf("Enter 2 numbers with Space: ");
	scanf("%i%i", &a, &b);
	c = b;
	b = a;
	a = c;
	printf("Num1 now is %i, Num2 now is %i", a, b);
}
void Task3b()
{
	int a, b;
	printf("Enter 2 numbers with Space: ");
	scanf("%i%i", &a, &b);
	a += b;
	b = a - b;
	a -= b;
	printf("Num1 now is %i, Num2 now is %i", a, b);
}

//8. Ввести a и b и вывести квадраты и кубы чисел от a до b.
void Task8()
{
	int a, b, temp;
	scanf("%i%i", &a, &b);
	temp = a;
	for (int i = 0; i <= abs(b - a); i++)
	{
		printf("Num: %i, Num^2: %lf, Num^3: %lf\n", temp, pow(temp, 2), pow(temp, 3));
		temp++;
	}
}






