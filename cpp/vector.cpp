#include <bits/stdc++.h>
using namespace std;
int main(void){
	vector<int>obj;
	for(int i=0;i<10;i++){
		obj.push_back(i);//推进i到数组的最上面
		cout<<obj[i]<<",";
	}
	for(int i=0;i<5;i++){
		obj.pop_back();//推掉5个元素
	}
	cout<<"\n"<<endl;
	for(int i=0;i<obj.size();i++){//统计剩余的元素的个数
		cout<<obj[i]<<",";
	}
	obj.clear();//清除数组中所有的数据

	cout<<endl<<obj.empty()<<endl;//然后数组中只剩下0个元素，输出1

	obj.push_back(100);
	obj.push_back(0);
	obj.push_back(55);

	sort(obj.begin(),obj.end());//从小到打进行排序sort()
	for(int i=0;i<obj.size();i++){
		cout<<obj[i]<<",";
	}
	cout<<endl;
	reverse(obj.begin(),obj.end());//从大到小进行排序reverse()
	for(int i=0;i<obj.size();i++){
		cout<<obj[i]<<",";
	}
	cout<<endl;
	vector<int>::iterator it;//利用迭代器
	for(it=obj.begin();it!=obj.end();it++){
		cout<<*it<<endl;
	}
	return 0;
}
