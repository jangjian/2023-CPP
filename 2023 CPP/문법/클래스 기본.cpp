#include <iostream>
#include <string>	

using namespace std;

// ���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
struct pizza
{
    string brand;
    string menu;
};
int main() {
    // �ڷ��� : struct pizza(C++������ pizza�� �ᵵ ����)
    struct pizza ���ø�������;
    ���ø�������.brand = "���ڽ���";
    ���ø�������.menu = "�޺���̼�";

    cout << "�귣�� : " << ���ø�������.brand << endl;
    cout << "�޴� : " << ���ø�������.menu << endl;

    return 0;

}


