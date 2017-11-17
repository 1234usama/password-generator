#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	string lowercase="abcdefghijklmnopqrstuvwxyz";
	string uppercase="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string password;
	int len;
	cout<<"enter the length of your password (7-14) : ";
	cin>>len;
	srand(time(NULL));
	for(int i=0;i<len;i++){
		password=password+lowercase[rand()%25]+uppercase[rand()%25];
	}
	cout<<"first password is : "<<password<<endl;
	return 0;
}
