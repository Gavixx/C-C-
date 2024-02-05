#include <iostream>
#include <cmath>
#include <algorithm>
//for (int i = 0; i < 10; i++)
//{
//	std::cout << "arr [" <<i << "] =" <<x[i]<<"\n";
//}


void TablSposterChek(int* tablespost);
void PrintTableSposter(int* tablespost, int* x, float* n, int size, int vibirka);
void Calculating(float* n, int* x, int size, int vibirka);
void Empirical(float* n, int* x, int size, float vibirka);
void BivariateSampling(float* x_2, float* y_2, float* n_2, float vibirka_2, int size_2);
//  2  2  4  6  6  6  6  8  8  8
// 10 10 10 10 12 12 12 12 12 12
// 12 12 12 12 12 12 14 14 14 16
// 16 18 18 18 18 18 20 20 20 20

//  3  6 9 12 15 18 21 24 27 30				1 2 4 5 8 11 13 17 22 25 
//	3  3 9 12 12 18 21 18 30 27				1 1 4 8 11 11 13 11 25 22
// 18 18 27 12 15 30 24 3 21 9				2 5 8 11 17 13 11 17 22 1
// 15 18 24 18 27 21 30 6 3 9				2 4 1 5 11 11 8 17 22 4 11




int main()
{
	int tablespost[40] = { 12,12, 18, 2, 12, 10, 6, 12, 12, 6, 12, 18, 2, 14, 10, 8, 18, 12, 12, 10, 20, 12, 14, 6, 8, 12, 16, 4, 20, 20, 10, 18, 6, 8, 12, 14, 18, 16, 12, 20 };
	int x[8] = { 7, 14, 21, 28, 35, 42 ,49, 56 };
	float n[8] = { 2, 3, 5,6,14,9,10,11 };
	int size = sizeof(x) / sizeof(x[0]);
	//TablSposterChek(tablespost);
	float vibirka = 0;
	for (int i = 0; i < size; i++)
	{
		vibirka += n[i];
	}
	PrintTableSposter(tablespost, x, n, size, vibirka);
	Empirical(n, x, size, vibirka);
	Calculating(n, x, size, vibirka);
	float x_2[10] = { 3, 6, 9, 12, 15, 18, 21, 24, 27 ,30 };
	float y_2[10] = { 1, 2, 4, 5, 8, 11, 13, 17, 22, 25 };
	float n_2[10] = { 4, 5, 2, 1, 3, 11, 8, 4, 3, 9 };
	//std::cout << "Size - " << size << "\n";
	float vibirka_2 = 0;
	int size_2 = sizeof(x_2) / sizeof(x_2[0]);
	for (int i = 0; i < size_2; i++)
	{
		vibirka_2 += n_2[i];
	}

	BivariateSampling(x_2, y_2, n_2, vibirka_2, size_2);
	return 0;
}





void TablSposterChek(int* tablespost)
{
	int a2 = 0;
	int a4 = 0;
	int a6 = 0;
	int a8 = 0;
	int a10 = 0;
	int a12 = 0;
	int a14 = 0;
	int a16 = 0;
	int a18 = 0;
	int a20 = 0;
	for (int i = 0; i < 40; i++)
	{
		switch (tablespost[i])
		{
		case 2: a2++; break;
		case 4: a4++; break;
		case 6: a6++; break;
		case 8: a8++; break;
		case 10: a10++; break;
		case 12: a12++; break;
		case 14: a14++; break;
		case 16: a16++; break;
		case 18: a18++; break;
		case 20: a20++; break;
		default:
			break;
		}
	}
	std::cout << "\n2 - " << a2 << "\n";
	std::cout << "4 - " << a4 << "\n";
	std::cout << "6 - " << a6 << "\n";
	std::cout << "8 - " << a8 << "\n";
	std::cout << "10 - " << a10 << "\n";
	std::cout << "12 - " << a12 << "\n";
	std::cout << "14 - " << a14 << "\n";
	std::cout << "16 - " << a16 << "\n";
	std::cout << "18 - " << a18 << "\n";
	std::cout << "20 - " << a20 << "\n";

}

void PrintTableSposter(int* tablespost, int* x, float* n, int size, int vibirka)
{
	std::cout << "Fill in the table of observations (xi value of the trait X) for the given sample size, n > 40: \n";
	for (int i = 0; i < 40; i++)
	{
		std::cout << tablespost[i] << " ";
		if (i == 9)
		{
			std::cout << " \n";
		}
		else if (i == 19)
		{
			std::cout << " \n";
		}
		else if (i == 29)
		{
			std::cout << " \n";
		}

	}
	std::cout << "\n----------------\n";
	std::sort(tablespost, tablespost + 40);

	std::cout << "Statistical distribution of the sample in the form of a variation series { ";
	for (int i = 0; i < 40; ++i) {

		std::cout << tablespost[i];
		if (i == 39)
		{
			break;
		}
		std::cout << ", ";
	}
	std::cout << "}\n";
	std::cout << "\n----------------\n";
	std::cout << "Set the statistical distribution of the sample in the form of a variation series " << std::endl;
	std::cout << "Xi: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << x[i] << " ";
	}
	std::cout << "\nNi: ";
	for (int i = 0; i < size; i++)
	{
		if (i == 5)
		{
			std::cout << " " << n[i];

		}
		else if (i == 6)
		{
			std::cout << " " << n[i] << "  ";
		}
		else if (i == 7)
		{
			std::cout << n[i] << "  ";
		}
		else if (i == 8)
		{
			std::cout << n[i] << "  ";
		}
		else
		{
			std::cout << n[i] << " ";

		}
	}
	std::cout << "\n----------------\n";

}

void Calculating(float* n, int* x, int size, int vibirka)
{

	float avg = 0; // X вибіркове середнє
	for (int i = 0; i < size; i++)
	{
		avg += (x[i] * n[i]); // має бути 484
	}
	avg /= vibirka; // avg(Xв.ср) = 12,1
	std::cout << "Xvib.ser - " << avg << "\n";

	float dispersia = 0; // Дисперсія
	for (int i = 0; i < size; i++)
	{
		dispersia += n[i] * pow((x[i] - avg), 2); // має бути 951,6
	}
	dispersia /= vibirka; // 23,79
	std::cout << "Vibirkova Dispersia - " << dispersia << "\n";
	float SampleStandardDeviation = 0; // Середнє квадратичне відхилення 
	SampleStandardDeviation = sqrt(dispersia); // 4.8775 
	std::cout << "Vubirkove seredne kvadrat vidhuleny - " << SampleStandardDeviation;
	std::cout << "\n----------------\n";

	float S2 = 0, s = 0; // Vupravlena dispersia
	float tempvibirka = vibirka - 1;
	S2 = (vibirka / tempvibirka) * dispersia; // виправлена дисперсія
	std::cout << "Vupravlena dispersia - " << S2 << "\n";
	s = round((sqrt(S2)) * 100) / 100;
	std::cout << "Vupravlena seredne kvadrat vidhileny - " << s << "\n"; // виправлене середнє квадратичне відхилення 
	std::cout << "----------------\n";

	int max = n[0];
	int temp; // для збереження і щоб взяти потрібний x з x[]
	for (int i = 1; i < size; i++) {
		if (n[i] > max) {
			max = n[i];
			temp = i;
		}
	}

	int Moda = x[temp]; // 12
	std::cout << "Moda - " << Moda << "\n";
	int Mediana = x[size / 2]; // 12
	std::cout << "Mediana - " << Mediana << "\n";
	int R = x[size - 1] - x[0];
	std::cout << "R - " << R << "\n"; // розмах вибірки
	float r = 1 + 3.322 * log(vibirka);
	r = round(r);
	std::cout << "r - " << r << "\n";
	float DeltaX = R / r;
	DeltaX = round(DeltaX);
	std::cout << "DeltaX - " << DeltaX << "\n";

	float AvgAbsoluteDeviation = 0; // Середнє абсолютне відхилення
	for (int i = 0; i < size; i++)
	{
		AvgAbsoluteDeviation += n[i] * abs(x[i] - avg);
	}
	AvgAbsoluteDeviation /= vibirka;
	std::cout << "AvgAbsoluteDeviation - " << AvgAbsoluteDeviation << std::endl;
	float CoefficientVariation = 0; // коефіцієн варіації (V)
	CoefficientVariation = SampleStandardDeviation / avg * 100;
	std::cout << "CoefficientVariation - " << CoefficientVariation << "%\n";
	std::cout << "----------------\n";


	float t = 1.96; // за таблицею значень функції Лапласа (2Ф(t) = 0.95, Ф(t) = 0.475)
	float AssessmentAccuracy = t * SampleStandardDeviation / sqrt(vibirka);// точність оцінки 
	std::cout << "AssessmentAccuracy - " << AssessmentAccuracy << "\n";
	std::cout << "ConfidenceIntervals: (" << avg << " - " << AssessmentAccuracy << "; " << avg << " + " << AssessmentAccuracy << ")\n"; // Довірчий інтервал
	std::cout << "----------------\n";


	int u[10] = { 0 };
	for (int i = 0; i < size; i++)
	{
		u[i] = (x[i] - Moda) / 2;
		std::cout << "U[" << i << "] = " << u[i] << "\n";

	}
	std::cout << "----------------\n";
	int nu[10] = { 0 };
	float SumNU = 0;
	for (int i = 0; i < size; i++)
	{
		nu[i] = n[i] * u[i];
		std::cout << "n*u[" << i << "] = " << nu[i] << std::endl;
		SumNU += nu[i];
	}
	std::cout << "Suma Ni * Ui = " << SumNU << "\n";
	std::cout << "----------------\n";
	float SumNU2 = 0;
	int nu2[10] = { 10 };
	for (int i = 0; i < size; i++)
	{
		nu2[i] = n[i] * pow(u[i], 2);
		std::cout << "n*u^2[" << i << "] = " << nu2[i] << std::endl;
		SumNU2 += nu2[i];

	}
	std::cout << "Suma Ni * Ui^2 = " << SumNU2 << "\n";
	std::cout << "----------------\n";
	float SumNiUi2 = 0;
	int niui2[10] = { 0 };
	for (int i = 0; i < size; i++)
	{
		niui2[i] = n[i] * pow((u[i] + 1), 2);
		std::cout << "n(ui+1)^2[" << i << "] = " << niui2[i] << std::endl;
		SumNiUi2 += niui2[i];

	}

	std::cout << "Suma Ni * (Ui + 1) ^2 = " << SumNiUi2 << "\n";
	std::cout << "----------------\n";

	float avg2 = 0;
	int h = 2;
	double M1 = SumNU / vibirka;
	std::cout << "M1* =" << M1 << "\n";
	float M2 = SumNU2 / vibirka;
	std::cout << "M2* =" << M2 << "\n";
	if (vibirka + SumNU * 2 + SumNU2 == SumNiUi2) std::cout << "Perevirka - true";
	else std::cout << "Perevirka - false";
	avg2 = M1 * h + Mediana;
	double dispersia2 = 0;
	dispersia2 = abs(M2 - pow(M1, 2)) * pow(h, 2);
	std::cout << "\nXvib. ser2 =" << avg2 << "\n";
	std::cout << "dispersia2 =" << dispersia2 << "\n";

	std::cout << "\n----------------\n";

	float b[10], b2[10], sumab1 = 0, sumaa1 = 0, sumab2 = 0, sumaa2 = 0;
	b[0] = n[0];
	sumab1 += b[0];
	b[9] = n[9];
	sumaa1 += b[9];
	for (int i = 1, j = 8; i < size; i++, j--) {
		if (x[i] < Mediana) {
			b[i] = b[i - 1] + n[i];
			sumab1 += b[i];
			//std::cout << "b - " << b[i] << std::endl;
		}
		else if (x[i] == Mediana) {
			b[i] = 0.0;
			//std::cout << "b - " << b[i] << std::endl;
		}

	}
	for (int i = 8; i >= 0; i--)
	{
		if (x[i] > Mediana)
		{
			b[i] = b[i + 1] + n[i];;
			sumaa1 += b[i];
		}

	}
	for (int i = 0; i < size; i++)
	{
		std::cout << "b - " << b[i] << "\n";
	}
	std::cout << "----------------\n";

	b2[0] = b[0];
	sumab2 += b[0];
	for (int i = 1, j = 8; i < size; i++, j--) {
		if (x[i] < Mediana - 2) {
			b2[i] = b2[i - 1] + b[i];
			sumab2 += b2[i];
			//std::cout << "b - " << b[i] << std::endl;
		}
		else {
			b2[i] = 0.0;
			//std::cout << "b - " << b[i] << std::endl;
		}

	}
	b2[9] = b[9];
	sumaa2 += b2[9];
	for (int i = 8; i >= 0; i--)
	{
		if (x[i] > Mediana + 2)
		{
			b2[i] = b2[i + 1] + b[i];;
			sumaa2 += b2[i];
		}

	}
	for (int i = 0; i < size; i++)
	{
		std::cout << "b2 - " << b2[i] << "\n";
	}
	std::cout << "suma b1 - " << sumab1 << "\n";
	std::cout << "suma a1 - " << sumaa1 << "\n";
	std::cout << "suma b2 - " << sumab2 << "\n";
	std::cout << "suma a2 - " << sumaa2 << "\n";

	float s2 = 0, s1 = 0, d = 0;
	d = sumaa1 - sumab1;
	std::cout << "d = " << d << "\n";
	s1 = sumaa1 + sumab1;
	std::cout << "s1 = " << s1 << "\n";
	s2 = sumaa2 + sumab2;
	std::cout << "s2 = " << s2 << "\n";
	float M1_2 = d / vibirka, M2_2 = (s1 + (2 * s2)) / vibirka;
	std::cout << "M1* = " << M1_2 << "\n";
	std::cout << "M2* = " << M2_2 << "\n";
}

void Empirical(float* n, int* x, int size, float vibirka)
{
	float  vidrizok[11] = { 0 };
	float temp = 0;
	for (int i = 0; i < 10; i++)
	{
		temp += n[i];
		vidrizok[i + 1] = temp / vibirka;
		//std::cout <<"Vidrizok ["<<i<<"] = " << vidrizok[i] << std::endl;
	}
	std::cout << "Empirical sampling distribution function:\nXi: ";

	for (int i = 0; i < size; i++)
	{
		std::cout << x[i] << " ";
	}
	std::cout << "\nF*(x): ";
	for (int i = 0; i < sizeof(vidrizok) / sizeof(vidrizok[0]); i++)
	{
		std::cout << vidrizok[i] << " ";
	}
	std::cout << "\n----------------\n";

	float RelativeFrequency[10];

	for (int i = 0; i < 10; i++)
	{

		RelativeFrequency[i] = n[i] / vibirka;
		std::cout << "RelativeFrequency [" << i << "] = " << RelativeFrequency[i] << "\n";
	}
	std::cout << "----------------\n";
}

void BivariateSampling(float* x_2, float* y_2, float* n_2, float vibirka_2, int size_2)
{
	std::cout << "\n----------------\n";
	std::cout << "Create a two-dimensional sample. for a given sample size, n > 40 " << std::endl;
	std::cout << "Xi: ";
	for (int i = 0; i < size_2; i++)
	{
		std::cout << x_2[i] << " ";
	}
	std::cout << "\nYi: ";
	for (int i = 0; i < size_2; i++)
	{
		std::cout << y_2[i] << " ";
	}
	std::cout << "\nNi: ";
	for (int i = 0; i < size_2; i++)
	{
		std::cout << n_2[i] << " ";
	}
	std::cout << "Vibirka _2 " << vibirka_2;
	std::cout << "\n----------------\n";

	float X_2[10], XY[10], sumaX = 0, sumaY = 0, sumaX2 = 0, sumaXY = 0;
	std::cout << "X^2: ";
	for (int i = 0; i < size_2; i++)
	{
		X_2[i] = pow(x_2[i], 2);
		std::cout << X_2[i] << " ";
		sumaX2 += X_2[i];
		sumaX += x_2[i];
		sumaY += y_2[i];
	}
	std::cout << " \n";
	std::cout << "X*Y: ";
	for (int i = 0; i < size_2; i++)
	{
		XY[i] = x_2[i] * y_2[i];
		std::cout << XY[i] << " ";
		sumaXY += XY[i];
	}
	std::cout << "\nSumaX = " << sumaX << "\n";
	std::cout << "SumaY = " << sumaY << "\n";
	std::cout << "SumaX^2 = " << sumaX2 << "\n";
	std::cout << "SumaX*Y = " << sumaXY << "\n";

	float ro = 0, b = 0;
	ro = (vibirka_2 * sumaXY - sumaX * sumaY) / (vibirka_2 * sumaX2 - pow(sumaX, 2));
	std::cout << "ro " << ro << "\n";
	b = ((sumaX2 * sumaY) - (sumaX * sumaXY)) / ((vibirka_2 * sumaX2) - pow(sumaX, 2));
	std::cout << "b " << b << "\n";
	std::cout << "Rivnyna regresyi Y = " << ro << "x " << b << "\n";

	float Y[10], vidhileny[10];
	std::cout << "Yi: ";

	for (int i = 0; i < size_2; i++)
	{
		Y[i] = ro * x_2[i] - b;
		std::cout << Y[i] << " ";
	}
	std::cout << "\nVidhileny: ";

	for (int i = 0; i < size_2; i++)
	{
		vidhileny[i] = Y[i] - y_2[i];
		std::cout << vidhileny[i] << " ";
	}
	std::cout << "\n----------------\n";



	float x_3[5] = { 1, 3, 4, 8, 10 }, n_3[5] = { 3,4,6,2,1 };
	float y_3[5] = { 6, 9, 12, 15, 18 }, n_4[5] = { 1,4,7,3,2 };
	int size_3 = sizeof(x_3) / sizeof(x_3[0]);
	float vibirka_3 = 0, vibirka_4 = 0;

	for (int i = 0; i < size_3; i++)
	{
		vibirka_3 += n_3[i];
	}
	for (int i = 0; i < size_3; i++)
	{
		vibirka_4 += n_4[i];
	}

	float avg_x = 0, avg_y = 0; // X, Y вибіркове середнє
	for (int i = 0; i < size_3; i++)
	{
		avg_x += (x_3[i] * n_3[i]);
	}
	for (int i = 0; i < size_3; i++)
	{
		avg_y += (y_3[i] * n_4[i]);
	}


	avg_x /= vibirka_3;
	avg_y /= vibirka_4;

	std::cout << "Xvib.ser - " << avg_x << "\n";
	std::cout << "Yvib.ser - " << avg_y << "\n";

	float dispersia_x = 0, dispersia_y = 0; // Дисперсія
	for (int i = 0; i < size_3; i++)
	{
		dispersia_x += n_3[i] * pow((x_3[i] - avg_x), 2);
	}
	for (int i = 0; i < size_3; i++)
	{
		dispersia_y += n_4[i] * pow((y_3[i] - avg_y), 2);
	}
	dispersia_x /= vibirka_3;
	dispersia_y /= vibirka_4;

	std::cout << "Vibirkova DispersiaX - " << dispersia_x << "\n";
	std::cout << "Vibirkova DispersiaY - " << dispersia_y << "\n";
	float S2_x = 0, S2_y = 0;
	float tempvibitka3 = vibirka_3 - 1, tempvibirka4 = vibirka_4 - 1;
	S2_x = (vibirka_3 / tempvibitka3) * dispersia_x; // виправлена дисперсія
	std::cout << "Vupravlena dispersiaX - " << S2_x << "\n";
	S2_y = (vibirka_4 / tempvibirka4) * dispersia_y; // виправлена дисперсія
	std::cout << "Vupravlena dispersiaY - " << S2_y << "\n";

	float F = S2_y / S2_x, a = 0.1 / 2, k1 = vibirka_3 - 1, k2 = vibirka_4 - 1;
	std::cout << "Fsposter - " << F << "\n";
	std::cout << "Alpha - " << a << "\n";
	std::cout << "K1 - " << k1 << "\n";
	std::cout << "K2 - " << k2 << "\n";
	float Kkr = 2.35; // за табл фішера
	std::cout << "Kkrut - " << Kkr << "\n";
	if (F < Kkr)
	{
		std::cout << "Priymayem 0 hipotezy";
	}
	else
	{
		std::cout << "Fspostr > Kkr";

	}

}
