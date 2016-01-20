#include<iostream>
#include<vector>
using namespace std;

int add(int a, int b){
	return a+b;
}

template<class T> void  print(vector<T> v){
	cout<<"{"<<endl;
	for(T t: v)
		cout<<t<<endl;
	cout<<"}"<<endl;
}

int main(){
	cout<<"Hello World!"<<endl;
	return 0;
}

