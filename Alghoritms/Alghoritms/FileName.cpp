#include <iostream>
using namespace std;
int Binary(int arr[], int size, int item);
int main() {
	int a = 0, b = 0, item = 0;
	int arr[] = { 1,2,3,4,5,123,4231,12,523,31,74,38,312,72,234,756,867,234,523,34,7,9,19 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Input item - ";
	cin >> item;
	
	if (Binary(arr, size, item) == -1) cout << "Wrong Item"; else cout << Binary(arr, size, item);

}

int Binary(int arr[], int size, int item) {
	int low = 0;
	int high = size - 1;
	int guess = 0;
	int mid = 0;
	int min = 0; // ��� ������ ������������ ��������
	int buf = 0; // ��� ������ ���������� 

	/*********** ������ ���������� **************/
	for (int i = 0; i < size; i++)
	{
		min = i; // �������� ����� ������� ������, ��� ������ � ����������� ���������
		// � ����� ������ �������� ����� ������ � ����������� ���������
		for (int j = i + 1; j < size; j++)
			min = (arr[j] < arr[min]) ? j : min;
		// c������ ������������ ����� ��������, ������� ��� ������� � �������
		if (i != min)
		{
			buf = arr[i];
			arr[i] = arr[min];
			arr[min] = buf;
		}
	}
	while (low <= high)
	{
		mid = (low + high) / 2;
		guess = arr[mid];
		if (guess == item) { return mid; }
		if (guess > item) { high = mid - 1; }
		else {
			low = mid + 1;
		}
	}
	return -1;
}