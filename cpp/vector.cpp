#include <bits/stdc++.h>
using namespace std;
int main(void){
	vector<int>obj;
	for(int i=0;i<10;i++){
		obj.push_back(i);//�ƽ�i�������������
		cout<<obj[i]<<",";
	}
	for(int i=0;i<5;i++){
		obj.pop_back();//�Ƶ�5��Ԫ��
	}
	cout<<"\n"<<endl;
	for(int i=0;i<obj.size();i++){//ͳ��ʣ���Ԫ�صĸ���
		cout<<obj[i]<<",";
	}
	obj.clear();//������������е�����

	cout<<endl<<obj.empty()<<endl;//Ȼ��������ֻʣ��0��Ԫ�أ����1

	obj.push_back(100);
	obj.push_back(0);
	obj.push_back(55);

	sort(obj.begin(),obj.end());//��С�����������sort()
	for(int i=0;i<obj.size();i++){
		cout<<obj[i]<<",";
	}
	cout<<endl;
	reverse(obj.begin(),obj.end());//�Ӵ�С��������reverse()
	for(int i=0;i<obj.size();i++){
		cout<<obj[i]<<",";
	}
	cout<<endl;
	vector<int>::iterator it;//���õ�����
	for(it=obj.begin();it!=obj.end();it++){
		cout<<*it<<endl;
	}
	return 0;
}
