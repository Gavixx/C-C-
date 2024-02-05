#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void PrintArr(float arr[], int n); // ������� ��� ����� ������
float SumaAfterNegative(float arr[], int n); // ������� ��� ���������� ���� ���� ������� �������
void FillArr(float arr[], int n); // ���������� ������
void MinModElement(float arr[], int n); // ̳�������� �� ������� �������
void Interval(float arr[], int n); // ��������� �� ����������



int main() {
	int n; // ������� N (����� ������)
	printf("Input n (n>0) ");
	scanf("%d", &n);
	if (n <= 0) { printf("Error! Invalid N"); return -1; }; // ����� ������ �� ���� ���������� 0 � ���� ��'����� 
	float* arr = (float*)malloc(sizeof(float) * n); // �������� �������� ���'�� ��� ������
	FillArr(arr, n); // ������ ������� ��� ���������� ������
	SumaAfterNegative(arr, n); // ������ �������
	MinModElement(arr, n);// ������ �������
	Interval(arr, n);	  // ������ �������
	free(arr); // ��������� ���'��
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
		if (arr[i] < 0.0) {							// if ��� �������� �� �������� ��������, ���� ���� �� �� ���� �������������� ����
			for (int j = i + 1; j < n; j++) {
				sum += fabs(arr[j]); // ������������� fabs ��� ��������� ������ ����� �� ������� 
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
		if (fabs(arr[i]) < fabs(min)) {   // ������� ������� �������� ������ � ������ �� ����� 
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
	// ���������� �������� � ���� ������ �� ���������� ������
	int destination = a;
	for (int source = b - 1; source < n; ++source, ++destination) {
		arr[destination] = arr[source];
	}

	// ���������� ������ ���������� ����
	for (int i = destination; i < n; ++i) {
		arr[i] = 0;
	}
	printf("Array after delete: ");
	for (int i = 0; i < n; ++i) {
		printf("%f ", arr[i]);
	}
}
