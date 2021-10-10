#include<algorithm>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<queue>
#include<windows.h>
#include<string>
using namespace std;

queue<int> q;
int seat[6][8];
int Rand(int i);
void get_seat();
void print_seat();
string named_seat[6][8]; 
string names(int num);
void countdown();

int main(){
	srand(unsigned(time(0)));
	SetConsoleTitle("Automatic_Seat_Arranger");
	countdown(); 
}

void countdown(){
	cout<<"-------------------准备好接受命运的制裁了吗？---------------------";
	Sleep(1000);
	for(int i = 0; i<=9; i++){
		system("cls");
		cout<<"-------------------------------"<<10-i<<"---------------------------------"; 
		Beep(988,400);
		Sleep(1000);
	}
	for(int i = 0; i <= 9; i++){
		system("cls");
		get_seat();
		Beep(523,400);
	}
	for(int i = 0; i <= 4; i++){
		system("cls");
		get_seat();
		Beep(523,400);
		Sleep(300);
	}
	for(int i = 0; i <= 2; i++){
		system("cls");
		get_seat();
		Beep(523,400);
		Sleep(1000);
	}
	Beep(1000,400);
	cout<<" ------------分座位结束(programmed by 陈那谁&杨那谁)------------"; 
	getchar();
}

void get_seat(){
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
	for(int i = 0; i <= 5; i++){
		for(int j = 0; j <= 7; j++){
			seat[i][j] = q.front();
			q.pop();
		}
	}
	for(int i = 0; i <= 5; i++){
		for(int j = 0; j <= 7; j++){
			named_seat[i][j] = names(seat[i][j]);
		}
	}
	print_seat();
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
	if(num == 1)return "曹那谁"; 
	if(num == 2)return "陈那谁"; 
	if(num == 3)return "成那谁"; 
	if(num == 4)return "程那谁"; 
	if(num == 5)return "杜那谁"; 
	if(num == 6)return "方那谁"; 
	if(num == 7)return "黎那谁"; 
	if(num == 8)return "李那谁"; 
	if(num == 9)return "李那谁"; 
	if(num == 10)return "李那谁"; 
	if(num == 11)return "廖那谁"; 
	if(num == 12)return "廖那谁"; 
	if(num == 13)return "刘那谁"; 
	if(num == 14)return "龙那谁"; 
	if(num == 15)return "粟那谁"; 
	if(num == 16)return "王那谁"; 
	if(num == 17)return "王那谁"; 
	if(num == 18)return "王那谁"; 
	if(num == 19)return "王那谁"; 
	if(num == 20)return "王那谁"; 
	if(num == 21)return "向那谁"; 
	if(num == 22)return "杨那谁"; 
	if(num == 23)return "郑那谁"; 
	if(num == 24)return "边那谁"; 
	if(num == 25)return "董那谁"; 
	if(num == 26)return "段那谁"; 
	if(num == 27)return "侯那谁"; 
	if(num == 28)return "黄那谁"; 
	if(num == 29)return "黄那谁"; 
	if(num == 30)return "蒋那谁"; 
	if(num == 31)return "李那谁"; 
	if(num == 32)return "刘那谁"; 
	if(num == 33)return "彭那谁"; 
	if(num == 34)return "石那谁"; 
	if(num == 35)return "向那谁"; 
	if(num == 36)return "熊那谁"; 
	if(num == 37)return "杨那谁"; 
	if(num == 38)return "杨那谁"; 
	if(num == 39)return "张那谁"; 
	if(num == 40)return "郑那谁"; 
	if(num == 41)return "钟那谁"; 
	if(num == 42)return "朱那谁"; 
	if(num == 43)return "赵那谁"; 
	if(num == 44)return "杨那谁"; 
	if(num == 45)return "蔡那谁"; 
	if(num == 0)return "      ";
}
