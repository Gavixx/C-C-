#include <iostream>
#include <cmath>
int main()
{
	int arr[] = {1,1,3};
	int arrmin[sizeof(arr) / sizeof(arr[0])] = {};
	int arrmax[sizeof(arr) / sizeof(arr[0])] = {};
	int size = sizeof(arr) / sizeof(arr[0]);
	if (size == 2 && arr[0] == arr[1])
	{
		std::cout << "Polindrom";
	}
	else
	{
		for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		{

			if (i < size / 2)
			{
				arrmin[i] = arr[i];
				//std::cout << "Arrmin: " << arrmin[i]<< std::endl;
			}
			else if (i > size / 2)
			{
				arrmax[i] = arr[i];
				//std::cout << "Arrmax: " << arrmax[i] << std::endl;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Arrmax[" << i << "] - " << arrmax[i] << "\n";

	}
	std::cout << "__________________________________________\n";
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Arrmin[" << i << "] - " << arrmin[i] << "\n";

	}
	int count = 0;
	//std::cout << "__________________________________\n" << arrmax[2];
	for (int i = 0, j = sizeof(arr) / sizeof(arr[0])-1; i < sizeof(arr) / sizeof(arr[0]); i++, j--)
	{
		if (arrmin[i] == arrmax[j])
		{
			count++;
			//std::cout << " Polindrom" << "\n";
		}
		else break;
		//else std::cout << "Not Polindrom" << "\n";
			
	}
	if (count == size) std::cout << "Polindrom";
	else std::cout << "Not palindrom";

}
