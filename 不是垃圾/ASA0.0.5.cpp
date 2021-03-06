/*
This program is written to test whether the seat arranging system
works nicely.
*/

#include<algorithm>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<queue>
#include <windows.h>
#include<string>
using namespace std;

queue<int> q;
const int TRAIL = 999;
int seat[6][8];
int Rand(int i);
int counter[1000],counter2[47];
int flag = 0;
void get_seat(int flags);
void print_seat();
string named_seat[6][8]; 
string names(int num);
void countdown();

int main(){
	srand(unsigned(time(0)));
	//countdown();
	for(int i=0; i<=TRAIL-1; i++){
		get_seat(flag);
		flag++;
	}
	for(int i = 0; i<=TRAIL-1; i++){
		counter2[counter[i]-1]++;
	}
	for(int i = 0; i<=44; i++){
		if(i>=0&&i<=8){
			cout<<i+1<<" -";
		}else{
			cout<<i+1<<"-";
		}
		
		for(int j = 0; j<=counter2[i]; j++){
			cout<<"■" ;
		}
		cout<<endl;
	}
}
void get_seat(int flags){
	int test[46];
	for(int i = 0; i <= 44; i++){
		test[i]=i+1;
	}
	random_shuffle(test,test+45);
	//因为座位排序的种子不再基于时间，每次座位刷新不需时间间隔 
	for(int i = 0; i <= 44; i++){
		q.push(test[i]);
	}
	for(int i = 0; i <= 2; i++){
		q.push(0);
	}
	int count = 1;
	while(q.front()!=22){
		count++;
		q.pop();
	}
	//cout<<count<<endl;
	while (!q.empty()) q.pop();
	counter[flag] = count;
	
}

void print_seat(){
	cout<<" ------------------------------讲台-----------------------------"<<endl;
		for(int i = 0; i <= 5; i++){
			int flag = 0;
			cout<<"| ";
			for(int j = 0; j <= 3; j++){
				for(int k = 0; k <= 1; k++){
					cout<<named_seat[i][flag]<<" ";
					flag++;
				}
				cout<<"| ";
			}
			cout<<endl;
		}
}

int Rand(int i){
	return rand()%i;
}

string names(int num){
	if(num == 1)return "曹耘阡"; 
	if(num == 2)return "陈功译"; 
	if(num == 3)return " 成旭 "; 
	if(num == 4)return "程英睿"; 
	if(num == 5)return "杜炫杰"; 
	if(num == 6)return "方舜贤"; 
	if(num == 7)return "黎祖麟"; 
	if(num == 8)return "李苇航"; 
	if(num == 9)return "李奕均"; 
	if(num == 10)return "李远哲"; 
	if(num == 11)return "廖利军"; 
	if(num == 12)return "廖锐涵"; 
	if(num == 13)return "刘子畅"; 
	if(num == 14)return "龙星州"; 
	if(num == 15)return "粟政霖"; 
	if(num == 16)return "王伯澍"; 
	if(num == 17)return "王尔卓"; 
	if(num == 18)return "王颢嘉"; 
	if(num == 19)return "王锦一"; 
	if(num == 20)return "王梓睿"; 
	if(num == 21)return "向诺涵"; 
	if(num == 22)return "杨思源"; 
	if(num == 23)return "郑仕彤"; 
	if(num == 24)return "边渝乔"; 
	if(num == 25)return "董霜枝"; 
	if(num == 26)return " 段颖 "; 
	if(num == 27)return "侯心怡"; 
	if(num == 28)return "黄康源"; 
	if(num == 29)return "黄珂瑄"; 
	if(num == 30)return "蒋欣芮"; 
	if(num == 31)return "李雪菲"; 
	if(num == 32)return "刘一苇"; 
	if(num == 33)return " 彭丹 "; 
	if(num == 34)return "石芷萩"; 
	if(num == 35)return "向思齐"; 
	if(num == 36)return "熊新妍"; 
	if(num == 37)return "杨燕西"; 
	if(num == 38)return "杨子涵"; 
	if(num == 39)return "张艺瑄"; 
	if(num == 40)return "郑清月"; 
	if(num == 41)return "钟妍雨"; 
	if(num == 42)return "朱奕祾"; 
	if(num == 43)return "赵峻霄"; 
	if(num == 44)return "杨若瑄"; 
	if(num == 45)return "蔡佳怡"; 
	if(num == 0)return "      ";
}
