#include <iostream>
#include <string>

using namespace std;

int main()
{
    float Num1 = 0;
    float Num2 = 0;
    float Num3 = 0;
    float Num4 = 0;
    float Num5 = 0;

    cout << " \tEnter 5 numbers please \n";
    cin >> Num1;
    cin >> Num2;
    cin >> Num3;
    cin >> Num4;
    cin >> Num5;

    cout << "\tCalculating... \n";

    float Sum = (Num1 + Num2 + Num3 + Num4 + Num5);
    cout << "Sum: " << "=" << Sum << "\n\n";

    float Average = (Num1 + Num2 + Num3 + Num4 + Num5) /6;
    cout << "Average: " << "=" << Average << "\n\n";

    if (Num1 > Num2 && Num1 > Num3 && Num1 > Num4 && Num1 > Num5)
    {
        cout << "Max" << "=" << Num1 << "\n\n";
    }

    if (Num2 > Num1 && Num2 > Num3 && Num2 > Num4 && Num2 > Num5)
    {
        cout << "Max" << "=" << Num2 << "\n\n";
    }

    if (Num3 > Num1 && Num3 > Num2 && Num3 > Num4 && Num3 > Num5)
    {
        cout << "Max" << "=" << Num3 << "\n\n";
    }

    if (Num4 > Num1 && Num4 > Num2 && Num4 > Num3 && Num4 > Num5)
    {
        cout << "Max" << "=" << Num4 << "\n\n";
    }

    if (Num5 > Num1 && Num5 > Num2 && Num5 > Num3 && Num5 > Num4)
    {
        cout << "Max" << "=" << Num5 << "\n\n";
    }

    if (Num1 < Num2 && Num1 < Num3 && Num1 < Num4 && Num1 < Num5)
    { 
        cout << "Min" << "=" << Num1 << "\n\n";
    
    }
      

    if (Num2 < Num1 && Num2 < Num3 && Num2 < Num4 && Num2 < Num5)
    {
        cout << "Min" << "=" << Num2 << "\n\n";
    }

    if (Num3 < Num1 && Num3 < Num2 && Num3 < Num4 && Num3 < Num5)
    {
        cout << "Min" << "=" << Num3 << "\n\n";

    }

    if (Num4 < Num1 && Num4 < Num2 && Num4 < Num3 && Num4 < Num5)
    {
        cout << "Min" << "=" << Num4 << "\n\n";

    }

    if (Num5 < Num1 && Num5 < Num2 && Num5 < Num3 && Num5 < Num4)
    {
        cout << "Min" << "=" << Num5 << "\n\n";

    }

    system("pause");
    return 0;
}