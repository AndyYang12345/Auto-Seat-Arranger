#include<algorithm>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<queue>
#include<string>
using namespace std;

queue<int> q;
int seat[6][8];
int Rand(int i);
void get_seat();
void print_seat();
string named_seat[6][8]; 
string names(int num);

int main(){
	srand(unsigned(time(0)));
	while(1){
		get_seat();
		getchar();
		system("cls");
	}
}

void get_seat(){
	int test[46];
	for(int i = 0; i <= 44; i++){
		test[i]=i+1;
	}
	random_shuffle(test,test+45);
	//��Ϊ��λ��������Ӳ��ٻ���ʱ�䣬ÿ����λˢ�²���ʱ���� 
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
	cout<<" ------------------------------��̨-----------------------------"<<endl;
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
	if(num == 1)return "������"; 
	if(num == 2)return "�¹���"; 
	if(num == 3)return " ���� "; 
	if(num == 4)return "��Ӣ�"; 
	if(num == 5)return "���Ž�"; 
	if(num == 6)return "��˴��"; 
	if(num == 7)return "������"; 
	if(num == 8)return "��έ��"; 
	if(num == 9)return "���Ⱦ�"; 
	if(num == 10)return "��Զ��"; 
	if(num == 11)return "������"; 
	if(num == 12)return "����"; 
	if(num == 13)return "���ӳ�"; 
	if(num == 14)return "������"; 
	if(num == 15)return "������"; 
	if(num == 16)return "������"; 
	if(num == 17)return "����׿"; 
	if(num == 18)return "����"; 
	if(num == 19)return "����һ"; 
	if(num == 20)return "�����"; 
	if(num == 21)return "��ŵ��"; 
	if(num == 22)return "��˼Դ"; 
	if(num == 23)return "֣��ͮ"; 
	if(num == 24)return "������"; 
	if(num == 25)return "��˪֦"; 
	if(num == 26)return " ��ӱ "; 
	if(num == 27)return "������"; 
	if(num == 28)return "�ƿ�Դ"; 
	if(num == 29)return "����u"; 
	if(num == 30)return "������"; 
	if(num == 31)return "��ѩ��"; 
	if(num == 32)return "��һέ"; 
	if(num == 33)return " �� "; 
	if(num == 34)return "ʯ���c"; 
	if(num == 35)return "��˼��"; 
	if(num == 36)return "������"; 
	if(num == 37)return "������"; 
	if(num == 38)return "���Ӻ�"; 
	if(num == 39)return "���լu"; 
	if(num == 40)return "֣����"; 
	if(num == 41)return "������"; 
	if(num == 42)return "���ȵ�"; 
	if(num == 43)return "�Ծ���"; 
	if(num == 44)return "�����u"; 
	if(num == 45)return "�̼���"; 
	if(num == 0)return "      ";
}
