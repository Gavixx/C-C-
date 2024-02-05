#include <iostream>
//																										Гілка
// Номер гілки: 1 2 3 4 5 6 7 8				-1,2,5,4;													В  1 1 0 0 0 0 1 0
//        Vпоч: 1 1 2 3 4 2 1 3				-2,1,5,3;													е  0 1 1 0 0 1 0 0
//        Vкін: 4 2 3 5 5 5 5 4             -3,2,5,4;                                                   р  0 0 1 1 0 0 0 1
//											-4,1,5,3;													ш  1 0 0 0 1 0 0 1
//											-5,1,2,3,4;													и  0 0 0 1 1 1 1 0

int Mlist(int** MI) {
	std::cout << "Gilka   |";
	for (int i = 1; i <= 8; i++)
	{
		std::cout << i<<"\t";
	}
	std::cout << "\n-----------------------------------------------------------------\n";
	//std::cout << "\n";
	for (int i = 0, l=1; i < 5; i++, l++)
	{
		std::cout << "V"<<l<<"\t|";
		for (int j = 0; j < 8; j++)
		{
			std::cout << MI[i][j]<<"\t";
		}
		std::cout << "\n";
	}
	return 0;
}



int main()
{
	int list[30];
	int** MI = new int* [5];
	for (int i = 0; i < 5; i++) {
		MI[i] = new int[8];
		for (int j = 0; j < 8; j++) {
			MI[i][j] = 0;
		}
	}
	int Arr[2][8] = {
		{1,1,2,3,4,2,1,3}, // V поч
		{4,2,3,5,5,5,5,4}  // V кін
	};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			int b = 0;
			b = Arr[i][j];
			MI[b-1][j] = 1;
		}
		
		std::cout << "\n";
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 8; j++)
		{

		}
	}
	/*for (int i = 0; i < 5;i++)
	{
			int k = 1;
		for (int j = 0; j < 8; j++)
		{	
			MI[0][j] = k;
		}
	}*/
	Mlist(MI);
	return 0;
}
