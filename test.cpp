#include <iostream>

using namespace std;

int main(){
	int num{1};
	while(num != 0){
		cout<<"1에서 9 사이 숫자 입력";
		cin>>num;
		for (int i=1;i<10;i++){
			cout<<num<<" * "<< i <<" = "<< num*i<<endl;
		}
	}
}
