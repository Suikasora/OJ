#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	char ch;
	scanf("%d",&n);//�ܴ���
	getchar();//scanf����������\n�ᱻ������Ϊ�ַ���ȡ��ȡ
	while(n--)
	{
		stack<char>s;
		while(true)
		{
			ch = getchar();
			if(ch == ' '||ch == '\n'||ch == EOF){//��������β�ַ�����ʼ�����������������������ַ�
				while(!s.empty()){
					printf("%c",s.top());
					s.pop();
					
				}
				if(ch == '\n'|| ch == EOF)
					break;//break while(true)
			}
			else s.push(ch);
		}
	}
	return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//int main(void){
	//int n;
	//char ch;
	//scanf("%d",&n);
	//while(n--){
		//stack<char>s;
		//while(true){
			//ch=getchar();
			//while(ch==' '|| ch == '\n'|| ch == EOF){
				//printf("%c",s.top());
				//s.pop();
			//}
			//s.push(ch);
		//}
	//}
	//return 0;
/*}*/
