#include <iostream> // ��������� �������. Author: Kholchev Nikita, KE-217. 2024 year

using namespace std;

int main() {
    int num1, num2;

    // ����������� ��� ����� ������� �����
    cout << "������� ������ ����� �����: ";
    cin >> num1;

    // ����������� ��� ����� ������� �����
    cout << "������� ������ ����� �����: ";
    cin >> num2;

    // ����� �������� �����
    cout << "�� ����� �����: " << num1 << " � " << num2 << endl;

    // ����� ����� �����
    cout << "����� �������� �����: " << num1 + num2 << endl;

    // ����� �������� �����
    cout << "�������� �������� �����: " << num1 - num2 << endl;

    return 0;
}