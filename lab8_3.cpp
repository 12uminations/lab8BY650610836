#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here
	char ans;
	int num;
	if(x == 'A'){
		ans = 'Z';
		return ans;
	}
	else if(x>'A' and x <='Z'){
		ans=x -1;
		return ans;
	}
	
	else{
		ans='0';
		return ans;
	}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
