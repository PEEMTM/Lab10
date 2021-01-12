#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int r;
	string get;
	srand(time(0));
	r=rand()%9+1;
    if(r==1) get="A";
	else if(r==2) get="B+";
	else if(r==3) get="B";
	else if(r==4) get="C+";
	else if(r==5) get="C";
	else if(r==6) get="D+";
	else if(r==7) get="D";
	else if(r==8) get="F";
	else get="W";
	cout<<"Press Enter 3 times to reveal your future.";
	cin.get();
	cin.get();
	cin.get();
	cout<<"You will get "<<get<<" in this 261102.";
	return 0;
}