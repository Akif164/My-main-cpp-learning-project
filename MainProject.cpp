#include <iostream>
#include <clocale>
#include <math.h>

using namespace std;

//Made by StarLith.


void Sorting()
{
    cout << "Lütfen 3 adet sayı giriniz: \n";
    int x, y, z, MinSayi, MaxSayi;
    cin >> x >> y >> z;
    if (x > y && x > z)
    {
        MaxSayi = x;
        MinSayi = (y < z) ? y : z;
    }
    else if (y > x && y > z)
    {
        MaxSayi = y;
        MinSayi = (x < z) ? x : z;
    }
    else
    {
        MaxSayi = z;
        MinSayi = (x < y) ? x : y;
    }
    cout << "Girdiğiniz sayılar arasından en büyüğü: " << MaxSayi << " En küçüğü ise: " << MinSayi;
}
void SwitchCase()
{
    int MonthNum;
    cout << "Lütfen kaçıncı ayda olduğunuzu yazın: \n";
    cin >> MonthNum;
    string Month;
    switch (MonthNum)
    {
    case 1: Month = "Ay:Ocak"; break;
    case 2: Month = "Ay:Şubat"; break;
    case 3: Month = "Ay:Mart"; break;
    case 4: Month = "Ay:Nisan"; break;
    case 5: Month = "Ay:Mayıs"; break;
    case 6: Month = "Ay:Haziran"; break;
    case 7: Month = "Ay:Temmuz"; break;
    case 8: Month = "Ay:Ağustos"; break;
    case 9: Month = "Ay:Eylül"; break;
    case 10: Month = "Ay:Ekim"; break;
    case 11: Month = "Ay:Kasım"; break;
    case 12: Month = "Ay:Aralık"; break;
    default: Month = "Lütfen 1-12 arasında bir tam sayı değeri girin.\n";
    }
    cout << Month << "\n";
}
void MultiplierFind()
{
    int sayi;
    int carpansayisi = 0;
    cout << "Bir sayı girin: ";
    cin >> sayi;

    if (sayi > 0)
    {
        cout << sayi << " sayısının çarpanları:" << endl;
        for (int i = 1; i <= sayi; ++i) {
            if (sayi % i == 0 && i < sayi)
            {
                carpansayisi++;
                cout << i << " x " << sayi / i << endl;
            }
        }
        (carpansayisi != 1) ? cout << "Sayının " << carpansayisi << " adet carpanı var.\n" : cout << "Bu sayı asal.\n";
    }
    else {
        cout << "Lütfen pozitif bir sayı girin." << endl;
    }
}
void CountToHundredThousand()
{
    for (int i = 0; i <= 100000; ++i)
    {
        cout << i << endl;
    }
}
void NumbersEquation()
{
    cout << "3 basamaklı sayılar arasında \"Rakamlar Toplamı = Sayı / Rakamlar Çarpımı\" denklemini sağlayanlar:" << endl;

    for (int num = 100; num <= 999; ++num) {
        // Sayıyı rakamlarına ayır
        int a = (num / 100) % 10;    // Yüzler basamağı
        int b = (num / 10) % 10;     // Onlar basamağı
        int c = num % 10;            // Birler basamağı

        // Rakamlar toplamı ve çarpımı
        int sum = a + b + c;
        int product = a * b * c;

        // Çarpım sıfır ise bölme işlemi tanımsız olacağı için kontrol edilir
        if (product != 0 && sum * product == num)
        {
            cout << num << endl;
        }
    }
}
void Sub_FirstDegreeEquation()
{

}
void Sub_SecondDegreeEquation()
{
    int a, b, c;
    int discriminant;
    double single_result, result1, result2;
    cout << "Lütfen denklemin ilk teriminin katsayısını yazınız: ";
    cin >> a;
    cout << "Lütfen denklemin ikinci teriminin katsayısını yazınız: ";
    cin >> b;
    cout << "Lütfen denklemin üçüncü terimini yazınız: ";
    cin >> c;
    cout << "Denklem : " << a << "x^2 + " << b << "x + " << c << endl;
    discriminant = (b * b) - (4 * a * c);
    if (discriminant < 0)
    {
        cout << "Bu denklemin gerçel bir kökü bulunmuyor.\n";
    }
    else if (discriminant == 0)
    {
        single_result = (-1 * b + sqrt(discriminant)) / 2 * a;
        cout << "Bu denklemde diskriminant 0 olduğundan bu denklemin tek bir kökü vardır.\n";
        cout << "Bu denklemin kökü: " << single_result;
    }
    else
    {
        result1 = (-1 * b + sqrt(discriminant)) / 2 * a;
        result2 = (-1 * b - sqrt(discriminant)) / 2 * a;
        cout << "Bu denklemin kökleri: " << result1 << "," << result2;
    }
}
void EquationCalculator()
{
    cout << "Lütfen çözümlemek istediğiniz denklemin derecesini yazınız: ";
    int derece;
    cin >> derece;
    switch (derece)
    {
    case 1: Sub_FirstDegreeEquation(); break;
    case 2: Sub_SecondDegreeEquation(); break;
    default: cout << "Lütfen 1-5 arasında bir tam sayı değeri giriniz." << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Turkish"); //Türkçe harfler için yerelleştirme
    Sorting();
    return 0;
}