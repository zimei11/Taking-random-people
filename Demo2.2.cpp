#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <ctime>
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
	CStudent stu[1000];      
    ifstream inFile("D:/students.dat",ios::in|ios::binary); //二进制读方式打开
    if(!inFile) {
        cout << "error" <<endl;
        return 0;
    }
    while(inFile.read((char *)&s, sizeof(s))) { //一直读到文件结束
		memcpy(stu[num].szName,s.szName,sizeof(s.szName));   
		stu[num].id=num+1;
		num++;
    }
    inFile.close();
    srand((unsigned)time(NULL));
	while (1)
	{
		int pp = (rand() % num) + 1;
		system("cls");
		cout << pp << " " << stu[pp - 1].szName << endl;
		system("pause");
	}
//    for(int i=0;i<num;i++)
//    {
//    	cout<<stu[i].id<<" "<<stu[i].szName<<endl; 
//    }
    return 0;
}
