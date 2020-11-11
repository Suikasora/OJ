#include <iostream>
#include <fstream>

using namespace std;
////////////////////////QWQ

int main(void)
{
	char ch;
	fstream temp;
	temp.open("out.txt",ios::in);
	temp.seekg(3L,ios::beg);
	temp.get(ch);
	cout << ch << endl;
	temp.close();
	return 0;
}
