#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	char ch;
	scanf("%d",&n);//总次数
	getchar();//scanf遗留下来的\n会被下面作为字符读取读取
	while(n--)
	{
		stack<char>s;
		while(true)
		{
			ch = getchar();
			if(ch == ' '||ch == '\n'||ch == EOF){//如果读入结尾字符，则开始进行输出，否则继续读入新字符
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
