#include<iostream>
#include<time.h>      // time
#include<stdlib.h>   //srand rand
#include<stdio.h>  //printf,scanf,NULL
using namespace std;
int main(){
	int num,inum;
	num = rand()%6+1;
	cout<<"roll of dice 1 : "<<num;
	cout<<"\n";
	srand((unsigned) time(NULL));
	inum = 1+(rand()%6);
	cout<<"the roll of the second dice : "<<inum<<endl;
	int sum = num+inum;
	cout<<num<<"+"<<inum<<"="<<sum;
	if(sum==7||sum==11){
		cout<<"player wins:";
	}
	else if(sum==2||sum==3||sum==12){
		cout<<"the player lose:";
	}
	else if(sum==4||sum==5||sum==6||sum==8||sum==9||sum==10){
		int i;
		cout<<"\n point is "<<sum<<" the game continues \n";
			while(i=1)
			{
			int innernum1 = rand()%6+1;
			srand((unsigned) time(NULL));
			int innernum2 = 1+(rand()%6);
 cout<<"player rolled "<<innernum1<<" + "<<innernum2<<" = "<<innernum1+innernum2<<endl;
 i++;					 
			 if((innernum1+innernum2)==7){
				cout<<"the player loses:";
				break;
			}
		}
	}
	
	return 0;
}
