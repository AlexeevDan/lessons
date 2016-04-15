#include <stdio.h>
#include <Windows.h>
#include <time.h>

void output(int A[], int N);

void f1()
{
	int a;
	scanf_s("%d", &a);
	switch (a)
	{
	case 0:
		printf("NUll");
		break;
	case 1:
		printf("Odin");
		break;
	case 2:
		printf("Dva");
		break;
	default:
		printf("Ne opredelen");
		break;
	}
}

void input(int A[], int N)
{
	for (int i = 0; i < N; i++)
		scanf_s("%d", &A[i]);
}
void input2(int A[], int N)
{
	//srand(time(0));
	for (int i = 0; i < N; i++)
		A[i] = rand() % 100;
}

int sum(int A[], int N)
{
	int S = 0;
	for (int i = 0; i < N; i++)
		S += A[i];
	return S;
}

void f2()
{
	const int N = 10;
	int A[N];
	input2(&A[0], N);
	output(A, N);
	printf("Summa = %d\n", sum(A, N));

}
void output(int A[], int N)
{
	for (int i = 0; i < N; i++)
		printf("%d ", A[i]);
	printf("\n");
}
int sum2(int a, int b)
{
	int c = a + b;
	return c;

}

void f3()
{
	int x1, x2, Res;
	scanf_s("%d %d", &x1, &x2);
	Res = sum2(x1, x2);
	printf("Res=%d\n", Res);

}

void main()
{
	f2();
}