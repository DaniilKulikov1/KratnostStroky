#include<iostream>
#include<string>
using namespace std;


//cделаем проверку на префикс, через неё будем искать кратность
bool isPrefix(string str, int len, int i, int k)
{
    
    if (i + k > len)
        return false;
    for (int j = 0; j < k; j++)
    {
        if (str[i] != str[j])
            return false;
        i++;
    }
    return true;
}

// Функция ищущая кратность
bool isKPeriodic(string str, int len, int k)
{
   
    for (int i = k; i < len; i += k)
        if (!isPrefix(str, len, i, k))
            return false;
    return true;
}


int main()
{
    setlocale(LC_ALL, "ru"); // cделаем русскую раскладку для сout
    string str; //зададим строку которую должны ввести
    cout << "Введите на английском слово. Например abracadabra" << endl;
    cin >> str;
    int len = str.length();

    int k; // зададим переменную числа которое должны ввести
    cout << "Введите число" << endl;
    cin>>k;// вводим число которое проверит кратность строки

    if (isKPeriodic(str, len, k))
        cout << ("Данная строка является кратной числу которое вы ввели");
    else
        cout << ("Данная строка не является кратной числу которое вы ввели");

    return 0;
}