#include <iostream>
#include <fstream>
using namespace std;
class CStudent
{
public:
    char szName[20];
    int id;
};
int main()
{
	int num=0;
    CStudent s;
   	cout<<"������ѧ����������󰴡�Ctrl+Z��������̨��ʾ^Z���ûس�������" <<endl;
    ofstream outFile("D:/students.dat", ios::out | ios::binary);
    while (cin >> s.szName)
    {
    	s.id=++num;
        outFile.write((char*)&s, sizeof(s));
    }
    outFile.close();
    return 0;
}
