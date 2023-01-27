#include <iostream>
using namespace std;

int show_D(int n){
	if (n==0){
		cout<<0;
		return 0;
	}
	else{
		cout<<n<<" ";
		return show_D(n-1);
	}
}



int main(){
	int a;
	cin>>a;
	show_D(a);

}
