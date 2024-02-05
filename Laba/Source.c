#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void PrintArr(float arr[], int n); // функція для друку масиву
float SumaAfterNegative(float arr[], int n); // функція для обчислення суми після першого відємного
void FillArr(float arr[], int n); // заповнення масиву
void MinModElement(float arr[], int n); // Мінімальний за модулем елемент
void Interval(float arr[], int n); // Обрухунок за інтервалом



int main() {
	int n; // задання N (розмір масиву)
	printf("Input n (n>0) ");
	scanf("%d", &n);
	if (n <= 0) { printf("Error! Invalid N"); return -1; }; // розмір масиву не може дорівнювати 0 і бути вд'ємним 
	float* arr = (float*)malloc(sizeof(float) * n); // виділення динамічної пам'яті для масиву
	FillArr(arr, n); // виклик функції для заповнення масиву
	SumaAfterNegative(arr, n); // виклик функції
	MinModElement(arr, n);// виклик функції
	Interval(arr, n);	  // виклик функції
	free(arr); // звільнення пам'яті
	return 0;
}

void PrintArr(float arr[], int n)
{
	printf("Array : ");
	for (int i = 0; i < n; ++i) {
		printf("%f ", arr[i]);
	}
	printf("\n");
}

float SumaAfterNegative(float arr[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0.0) {							// if для перевірки на негативні елементи, якщо нема то не буде обраховуватися сума
			for (int j = i + 1; j < n; j++) {
				sum += fabs(arr[j]); // використовуємо fabs для отримання дійсних чисел за модулем 
			}
			break;
		}
		else printf("Not negative elements array\n"); break;
	}
	printf("Sum -  %f\n", sum);
	return sum;
}

void FillArr(float arr[], int n)
{
	printf("Input %d float number: ", n);
	for (int i = 0; i < n; i++) {
		scanf("%f", &arr[i]);
	}
}

void MinModElement(float arr[], int n)
{
	float min = arr[0]; 
	for (int i = 0; i < n; i++) {
		if (fabs(arr[i]) < fabs(min)) {   // порівння першого елементу масиву з рештою по модулі 
			min = (arr[i]);
		}
	}
	min = fabs(min);
	printf("Min mod element -  %f\n", min);
}

void Interval(float arr[], int n)
{
	int a = 0, b = 0;
	printf("Input interval\na-");
	scanf("%d", &a);
	printf("Input interval (a<b)\n b-");
	scanf("%d", &b);
	printf("Our A - %d B - %d\n", a, b);
	// Переміщення елементів в кінці масиву та заповнення нулями
	int destination = a;
	for (int source = b - 1; source < n; ++source, ++destination) {
		arr[destination] = arr[source];
	}

	// Заповнення нулями вивільнених місць
	for (int i = destination; i < n; ++i) {
		arr[i] = 0;
	}
	printf("Array after delete: ");
	for (int i = 0; i < n; ++i) {
		printf("%f ", arr[i]);
	}
}
