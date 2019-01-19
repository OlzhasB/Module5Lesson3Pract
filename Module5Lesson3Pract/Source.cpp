#include<stdio.h> 
#include<locale.h> 
#include<iostream> 

void task1()
{

	int i, A[10] = { 0 }, B[10] = { 0 }, C[10] = { 0 };

	printf("First array\n");
	for (i = 0; i < 10; i++)
	{
		A[i] = 0 + rand() % 50;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\nSecond array\n");
	for (i = 0; i < 10; i++)
	{
		B[i] = 0 + rand() % 50;
		printf("B[%d] = %d\n", i, B[i]);
	}

	int j = 1;
	printf("\nNew array\n");
	for (i = 0; i < 10; i += 2)
	{
		C[i] = A[j];
		j += 2;
	}

	j = 0;
	for (i = 1; i < 10; i += 2)
	{
		C[i] = B[j];
		j += 2;
	}

	for (i = 0; i < 10; i++)
	{
		printf("C[%d] = %d\n", i, C[i]);
	}
	system("pause");
}


void task2()

{
	int i, A[17] = { 0 }, sum = 0;

	printf("Given array: \n");
	for (i = 0; i < 17; i++)
	{
		A[i] = 10 + rand() % 90;
		printf("A[%d] = %d\n", i, A[i]);
		sum += A[i];
	}
	printf("\nSum of these numbers is %d\n", sum);
	system("pause");
}

void task3()
{

	int X[10] = { 0 }, Y[10] = { 0 }, S[10] = { 0 }, i;

	printf("First array:\n");
	for (i = 0; i < 10; i++)
	{
		X[i] = 0 + rand() % 20;
		printf("A[%d] = %d\n", i, X[i]);
	}

	printf("Second array:\n");
	for (i = 0; i < 10; i++)
	{
		Y[i] = 0 + rand() % 20;
		printf("A[%d] = %d\n", i, Y[i]);
	}

	int j, c = 0, s;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (X[i] == Y[j])
			{
				S[c++] = Y[j];
				break;
			}
		}
	}
	printf("\nNew array:\n");
	for (i = 0; i < c; i++)
	{
		printf("S[%d] = %d\n", i, S[i]);
	}
	system("pause");
}



void task4()
{
	int A[15] = { 0 }, i, sumEven = 0, sumThree = 0;

	for (i = 0; i < 15; i++)
	{
		A[i] = 0 + rand() % 45;
		printf("A[%d] = %d\n", i, A[i]);
	}


	printf("\nNumbers with even indexes\n");
	for (i = 1; i < 15; i++)
	{
		if (i % 2 == 0)
		{
			sumEven += A[i];
			printf("A[%d] = %d\n", i, A[i]);
		}
	}

	printf("\nNumbers with indexes multiple of three\n");
	for (i = 1; i < 15; i++)
	{
		if (i % 3 == 0)
		{
			sumThree += A[i];
			printf("A[%d] = %d\n", i, A[i]);
		}
	}

	printf("\nSum of the numbers with even indexes is %d\n", sumEven);
	printf("Sum of the numbers with indexes multiple of three is %d\n", sumThree);

	if (sumEven > sumThree)
		printf("\nSum of the numbers with even indexes is more\n");

	else if (sumEven < sumThree)
		printf("\nSum of the numbers with even indexes is less\n");

	else
		printf("The sums are equal\n");
	system("pause");
}


void task5()
{
	int A[12] = { 0 }, i, count = 0;


	for (i = 0; i < 12; i++)
	{
		A[i] = 0 + rand() % 20;
		printf("A[%d] = %d\n", i, A[i]);
	}

	int c, j;
	for  (i = 0; i < 11; i++)
	{
		for (j = 10; j >= i; j--)
		{
			if (A[j] < A[j + 1])
			{
				count++;
				c = A[j];
				A[j] = A[j + 1];
				A[j + 1] = c;
			}
		}
	}

	printf("\nSorted array:\n");
	for (i = 0; i < 12; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("Amount of changes is %d\n", count);
	system("pause");
}

void task6()
{
	int A[11] = { 0 }, i, sum = 0;

	printf("Given array:\n");
	for (i = 0; i < 11; i++)
	{
		A[i] = -10 + rand() % 20;
		printf("A[%d] = %d\n", i, A[i]);

	}

	printf("\nOdd negative numbers:\n");
	for (i = 0; i < 11; i++)
	{
		if (A[i] % 2 != 0 && A[i] < 0)
		{
			printf("A[%d] = %d\n", i, A[i]);
			sum += A[i];
		}
	}

	printf("\nNumbers multiple of 3:\n");
	for (i = 0; i < 11; i++)
	{
		if ((A[i] % 3 == 0) && (A[i] != 0))
		{
			printf("A[%d] = %d\n", i, A[i]);
			A[i] = sum;
		}
	}

	printf("Sum of the odd negative numbers is %d\n", sum);

	printf("\nChanged array:\n");
	for (i = 0; i < 11; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);

	}

	system("pause");
}

void task7()
{
	int i, A[15] = { 0 }, S, num = 0;

	printf("Given array:\n");
	for (i = 0; i < 15; i++)
	{
		A[i] = 0 + rand() % 20;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("Write S:");
	scanf_s("%d", &S);

	int max = 0, ind;
	for (i = 0; i < 15; i++)
	{
		if (abs(S-A[i]) > max)
		{
			max = abs(S - A[i]);
			num = A[i];
			ind = i;
		}
	}

	printf("The most number away from %d is A[%d] = %d\n", S, ind, num);
	system("pause");
}

void task8()
{
	int i, A[10] = { 0 };

	printf("Given array:\n");
	for (i = 0; i < 10; i++)
	{
		A[i] = -1 + rand() % 20;
		printf("A[%d] = %d\n", i, A[i]);
	}

	int count = 0, sum = 0, neg = 0, j = -1, neg1, negInd;
	do
	{
		j++;
		if (A[j] < 0)
		{
			neg++;
			neg1 = A[j];
			negInd = j;
		}
		
	} while (neg == 0 && j < 9);

	if (neg > 0)
	{
		printf("\nFirst negative number is A[%d] = %d\n", negInd, neg1);
		printf("Numbers  before %d:\n", neg1);

		for (i = 0; i < negInd; i++)
		{
			printf("A[%d] = %d\n", i, A[i]);
			count++;
			sum += A[i];
		}
		printf("\nAmount of numbers before %d is %d\n", neg1, count);
		printf("Sum of numbers before %d is %d\n", neg1, sum);
	}

	else
		printf("There is no negative numbers\n");
	system("pause");
}


void task9()
{
	int i, A[12] = { 0 }, min = 0;

	printf("Given array:\n");
	for (i = 0; i < 12; i++)
	{
		A[i] = 1 + rand() % 15;
		printf("A[%d] = %d\n", i, A[i]);
	}
	
	
	printf("\nLocal minimums\n");
	for (i = 1; i < 11; i++)
	{
		if ((A[i] < A[i - 1]) && (A[i] < A[i + 1]))
		{
			min++;
			printf("A[%d] = %d\n", i, A[i]);
		}
	}
	printf("The amount of local minimums is %d\n", min);

	system("pause");
}

void task10()
{
	/* 10. В заданном целочисленном массиве Z(15) положительных, отрицательных и нулевых чисел определить сумму
	и вывести последовательность значений элементов, которые расположены между первым отрицательным и нулевым элементами..*/

	int A[15] = { 0 }, i, neg1 = 0, zero1 = 0, negInd, zeroInd;

	printf("Given array:\n");
	for (i = 0; i < 20; i++)
	{
		A[i] = -5 + rand() % 10;
		printf("A[%d] = %d\n", i, A[i]);
	}

	i = 0;
	do
	{
		if (A[i] < 0)
		{
			neg1++;
			negInd = i;
		}
		i++;
	} while (i <= 20 && neg1 == 0);

	i = 0;
	do
	{
		if (A[i] == 0)
		{
			zero1++;
			zeroInd = i;
		}
		i++;
	} while (i <= 20 && zero1 == 0);

	if (zero1 == 0 || neg1 == 0)
		printf("There is no negative or null numbers\n");

	else
	{
		printf("\nNumbers between A[%d] = %d and A[%d] = %d are:\n", zeroInd, A[zeroInd], negInd, A[negInd]);
		if (zeroInd > negInd && zeroInd - negInd != 1)
		{
			for (i = negInd + 1; i < zeroInd; i++)
			{
				printf("A[%d] = %d\n", i, A[i]);
			}
		}

		else if (zeroInd < negInd && negInd - zeroInd != 1)
		{
			for (i = zeroInd + 1; i < negInd; i++)
			{
				printf("A[%d] = %d\n", i, A[i]);
			}
		}

		else
			printf("First negative number and first null number are neighbour numbers\n");
	}


	system("pause");
}


void task12()
{
	/*12. Ввести массив, состоящий из 10-ти элементов целого типа. Сформировать новый,
	расположив сначала все отрицательные элементы и нули, после чего - положительные, сохраняя порядок их следования.*/

	int A[10] = { 0 }, B[10] = { 0 }, i, j;

	printf("First array:\n");
	for (i = 0; i < 12; i++)
	{
		A[i] = -10 + rand() % 25;
		printf("A[%d] = %d\n", i, A[i]);
	}


	int n = 0;
	printf("\nNew array:\n");
	for (i = 0; i < 12; i++)
	{
		if (A[i] < 0 || A[i] == 0)
		{
			B[n] = A[i];
			printf("B[%d] = %d\n", n, B[n]);
			n++;
		}
	}

	for (i = 0; i < 12; i++)
	{
		if (A[i] > 0)
		{
			B[n] = A[i];
			printf("B[%d] = %d\n", n, B[n]);
			n++;
		}
	}

	system("pause");
}



void task13()
{
	/*13. Ввести массив, состоящий из 15 элементов целого типа.
	Упорядочить массив так, чтобы все отрицательные числа были расположены
	вначале по возрастанию, а все положительные – в конце по убыванию*/

	int A[15] = { 0 }, i, j;

	printf("First array:\n");
	for (i = 0; i < 15; i++)
	{
		A[i] = -10 + rand() % 25;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\nNegative numbers:\n");
	for (i = 0; i < 15; i++)
	{
		if (A[i] < 0)
		{
			printf("A[%d] = %d\n", i, A[i]);
		}
	}


	printf("\nPositive numbers:\n");
	for (i = 0; i < 15; i++)
	{
		if (A[i] > 0)
		{
			printf("A[%d] = %d\n", i, A[i]);
		}
	}

	int c;
	printf("\nSorted array:\n");
	for (i = 0; i < 14; i++)
	{
		if (A[i] < 0)
		{
			for (j = 13; j >= i; j--)
			{
				if (A[j] > A[j + 1])
				{
					c = A[j + 1];
					A[j + 1] = A[j];
					A[j] = c;
				}
			}
		}
	}

	int n = 0;
	for (i = 0; i < 14; i++)
	{
		if (A[i] < 0)
		{
			A[n] = A[i];
			printf("A[%d] = %d\n", n, A[n]);
			n++;
		}
	}

	for (i = 0; i < 14; i++)
	{
		if (A[i] > 0)
		{
			for (j = 13; j >= i; j--)
			{
				if (A[j] < A[j + 1])
				{
					c = A[j + 1];
					A[j + 1] = A[j];
					A[j] = c;
				}
			}

		}
	}

	for (i = 0; i < 15; i++)
	{
		if (A[i] > 0)
		{
			A[n] = A[i];
			printf("A[%d] = %d\n", n, A[n]);
			n++;
		}
	}

	system("pause");
}



void task14()
{
	/*14. Даны два массива действительных чисел по 12 элементов в каждом.
	Заменить нулями те элементы первого массива, которые есть во втором*/

	int A[12] = { 0 }, B[12] = { 0 }, i, j;

	printf("First array:\n");
	for (i = 0; i < 12; i++)
	{
		A[i] = 1 + rand() % 39;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\nSecond array:\n");
	for (i = 0; i < 12; i++)
	{
		B[i] = 1 + rand() % 39;
		printf("B[%d] = %d\n", i, B[i]);
	}


	printf("\nSimilar numbers in two arrays:\n");
	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (A[j] == B[i])
			{

				printf("%d\n", B[i]);
				A[j] = 0;
			}
		}
	}

	printf("\nNew array:\n");
	for (i = 0; i < 12; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}



	system("pause");
}

void task15()
{
	/*15. Задан целочисленный массив. Определить процентное содержание элементов,
	превышающих среднеарифметическое всех элементов массива*/

	int A[20] = { 0 }, n = 0, sum = 0, proc;
	float av;

	for (size_t i = 0; i < 20; i++)
	{
		A[i] = 1 + rand() % 39;
		sum += A[i];
		printf("A[%d] = %d\n", i, A[i]);
	}

	av = float(sum) / float(20);
	printf("\nThe sum of all elements is %d\n", sum);
	printf("\nThe average of all elements is %.2f\n", av);

	printf("\nNumbers more than average are:\n");
	for (size_t i = 0; i < 20; i++)
	{
		if (A[i] > av)
		{
			n++;
			printf("A[%d] = %d\n", i, A[i]);
		}
	}

	printf("\nAmount of numbers more than average is %d\n", n);
	proc = (n * 100) / 20;
	printf("Numbers more than average make up %d%% of all numbers\n", proc);

	system("pause");
}


void task16()
{
	/*16. (!!!) Перевести целое положительное число, которое вмещается в 4 байта, в двоичную систему,
	не используя битовых операций, а используя только стандартные встроенные типы*/

	int A[100] = { 0 }, i = 0, num, ost, j;


	printf("Write number in decimal system\n");
	scanf_s("%d", &num);

	printf("Number in binary is \n");

	do
	{
		ost = num % 2;
		num /= 2;
		A[i] = ost;
		i++;

	} while (num > 0);

	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", A[j]);
	}

	printf("\n");

	system("pause");
}



int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("Введите номер задания: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();

		break;
	}
	case 2:
	{
		task2();

		break;
	}
	case 3:
	{
		task3();

		break;
	}
	case 4:
	{
		task4();
	}
	case 5:
	{
		task5();

		break;
	}
	case 6:
	{
		task6();

		break;
	}
	case 7:
	{
		task7();

		break;
	}
	case 8:
	{
		task8();

		break;
	}
	case 9:
	{
		task9();

		break;
	}
	case 10:
	{
		task10();

		break;
	}
	case 11:
	{
		task10();

		break;
	}
	case 12:
	{
		task12();

		break;
	}
	case 13:
	{
		task13();

		break;
	}
	case 14:
	{
		task14();

		break;
	}
	case 15:
	{
		task15();

		break;
	}
	case 16:
	{
		task16();

		break;
	}
	}

	printf("Хотите продолжить 1 или 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}