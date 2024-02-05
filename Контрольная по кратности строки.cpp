#include<iostream>
#include<string>
using namespace std;


//c������ �������� �� �������, ����� �� ����� ������ ���������
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

// ������� ������ ���������
bool isKPeriodic(string str, int len, int k)
{
   
    for (int i = k; i < len; i += k)
        if (!isPrefix(str, len, i, k))
            return false;
    return true;
}


int main()
{
    setlocale(LC_ALL, "ru"); // c������ ������� ��������� ��� �out
    string str; //������� ������ ������� ������ ������
    cout << "������� �� ���������� �����. �������� abracadabra" << endl;
    cin >> str;
    int len = str.length();

    int k; // ������� ���������� ����� ������� ������ ������
    cout << "������� �����" << endl;
    cin>>k;// ������ ����� ������� �������� ��������� ������

    if (isKPeriodic(str, len, k))
        cout << ("������ ������ �������� ������� ����� ������� �� �����");
    else
        cout << ("������ ������ �� �������� ������� ����� ������� �� �����");

    return 0;
}