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
	//ÒòÎª×ùÎ»ÅÅÐòµÄÖÖ×Ó²»ÔÙ»ùÓÚÊ±¼ä£¬Ã¿´Î×ùÎ»Ë¢ÐÂ²»ÐèÊ±¼ä¼ä¸ô 
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
	cout<<" ------------------------------½²Ì¨-----------------------------"<<endl;
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
	if(num == 1)return "²ÜÔÅÚä"; 
	if(num == 2)return "³Â¹¦Òë"; 
	if(num == 3)return " ³ÉÐñ "; 
	if(num == 4)return "³ÌÓ¢î£"; 
	if(num == 5)return "¶ÅìÅ½Ü"; 
	if(num == 6)return "·½Ë´ÏÍ"; 
	if(num == 7)return "Àè×æ÷ë"; 
	if(num == 8)return "ÀîÎ­º½"; 
	if(num == 9)return "ÀîÞÈ¾ù"; 
	if(num == 10)return "ÀîÔ¶ÕÜ"; 
	if(num == 11)return "ÁÎÀû¾ü"; 
	if(num == 12)return "ÁÎÈñº­"; 
	if(num == 13)return "Áõ×Ó³©"; 
	if(num == 14)return "ÁúÐÇÖÝ"; 
	if(num == 15)return "ËÚÕþÁØ"; 
	if(num == 16)return "Íõ²®äø"; 
	if(num == 17)return "Íõ¶û×¿"; 
	if(num == 18)return "Íõò«¼Î"; 
	if(num == 19)return "Íõ½õÒ»"; 
	if(num == 20)return "Íõè÷î£"; 
	if(num == 21)return "ÏòÅµº­"; 
	if(num == 22)return "ÑîË¼Ô´"; 
	if(num == 23)return "Ö£ÊËÍ®"; 
	if(num == 24)return "±ßÓåÇÇ"; 
	if(num == 25)return "¶­ËªÖ¦"; 
	if(num == 26)return " ¶ÎÓ± "; 
	if(num == 27)return "ºîÐÄâù"; 
	if(num == 28)return "»Æ¿µÔ´"; 
	if(num == 29)return "»Æçæ¬u"; 
	if(num == 30)return "½¯ÐÀÜÇ"; 
	if(num == 31)return "ÀîÑ©·Æ"; 
	if(num == 32)return "ÁõÒ»Î­"; 
	if(num == 33)return " Åíµ¤ "; 
	if(num == 34)return "Ê¯ÜÆÈc"; 
	if(num == 35)return "ÏòË¼Æë"; 
	if(num == 36)return "ÐÜÐÂåû"; 
	if(num == 37)return "ÑîÑàÎ÷"; 
	if(num == 38)return "Ñî×Óº­"; 
	if(num == 39)return "ÕÅÒÕ¬u"; 
	if(num == 40)return "Ö£ÇåÔÂ"; 
	if(num == 41)return "ÖÓåûÓê"; 
	if(num == 42)return "ÖìÞÈµ’"; 
	if(num == 43)return "ÕÔ¾þÏö"; 
	if(num == 44)return "ÑîÈô¬u"; 
	if(num == 45)return "²Ì¼Ñâù"; 
	if(num == 0)return "      ";
}
