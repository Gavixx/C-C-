#include <iostream>
#include <cmath>
#include <algorithm>

void Calculating(float* numbers, float P, int size, float Kt, float Tnp, std::string vel);

int main()
{
    float numbers[] = { 273.6, 274.2, 273.0, 271.5, 271.2, 271.7, 272.3, 274.3, 275.6, 274.6, 274.8, 275.1, 275.6 };
    float P = 0.99; // довірча ймомірність
    int size = sizeof(numbers) / sizeof(numbers[0]);
    float Kt = 1.5;
    std::string vel= "mB";
    float Tnp = 3.06;
    Calculating(numbers, P, size, Kt, Tnp, vel);
}

void Calculating(float* numbers, float P, int size, float Kt, float Tnp, std::string vel)
{
    int n = size;
    std::cout << "n = " << n << "\n";
    std::cout << "Tnp za tabl = " << Tnp << "\n";
    float avg = 0; // середнє арифметичне значення виправлених результатів спостережень(оцінку дійсного значення вимірюваної величини) :
    for (int i = 0; i < size; i++)
    {
        avg += numbers[i] / size;
    }
    avg = round(avg * 100) / 100; 
    std::cout << "Avg = " << avg << std::endl; // 273.631


    float S = 0; // (оцінку середнього квадратичного відхилення
    float* v = new float[size];
    float v2 = 0;
    for (int i = 0; i < size; i++)
    {
        v[i] = pow(numbers[i] - avg, 2);
        v[i] = round(v[i] * 10000) / 10000;
        v2 += v[i];
    }
    /*for (int  i = 0; i < size; i++)
    {
        std::cout << "v [i] = " << v[i] << "\n";
    }*/
    v2 = round(v2 * 100) / 100;
    
  //  std::cout << "suma " << v2 << "\n";
    S = v2 / (n-1);
    S = round(S * 100) / 100;

//    std::cout << "S (v2 / n-1) " << S << "\n";
    S = sqrt(S);
    S = round(S * 100) / 100;

    std::cout << "S (sqrt) " << S << "\n";









    std::cout << "Dilenny \n";
    float* customNumbers2 = new float[size];
    for (int i = 0; i < size; i++)
    {
        customNumbers2[i] = fabs(numbers[i] - avg) / S;
        customNumbers2[i] = round(customNumbers2[i] * 100) / 100;

    }

   // std::sort(customNumbers2, customNumbers2 + size);

    std::cout << "________________________________ \n";

    for (int i = 0; i < size; i++)
    {
        std::cout << customNumbers2[i] << "\n";
    }
    std::cout << "________________________________ \n";
    float V = customNumbers2[size - 1];

    std::cout << "V = " << V << "\n";


    float Savg = S / sqrt(n); // середнього квадратичного відхилення результату вимірювання :
    Savg = round(Savg * 100) / 100;

    std::cout << "Savg = " << Savg << "\n";

   
    float E = Tnp * Savg; // Довірчі границі випадкових похибок
    E = round(E * 100) / 100;

    std::cout << "E = +/- " << E << "\n";


    float delta = avg * Kt / 100;
    delta= round(delta * 100) / 100;

    std::cout << "DELTAc = +/- " << delta << "\n";



    float Sdelta = fabs(delta) / sqrt(3);
    Sdelta = round(Sdelta * 100) / 100;

    std::cout << "Sdeltac = " << Sdelta << "\n";

    float Tp = (fabs(E) + fabs(delta)) / (Sdelta + Savg);
    Tp = round(Tp * 100) / 100;
    std::cout << "Tp = " << Tp << "\n";

    float Ssuma = sqrt(pow(Sdelta, 2) + pow(Savg, 2));
    Ssuma = round(Ssuma * 100) / 100;
    std::cout << "Ssuma = " << Ssuma << "\n";

    float deltasuma = Tp * Ssuma;
    deltasuma = round(deltasuma * 100) / 100;
    std::cout << "DeltaSuma =  +/- " << deltasuma << "\n";



    std::cout << "Result: X = (" << avg << " +/- " << deltasuma << ")"<<vel<<", Pb = " << P;
}

