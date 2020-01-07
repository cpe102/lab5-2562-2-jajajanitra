#include<iostream>
#include<string>
using namespace std;

string mixText(string A,string B){
	int La = A.size() , Lb = B.size() ,i=0;
	string L ;
	if(A.size() == B.size()){
		int i = 0;
		while(i < La){
			L = L+A[i]+B[i];
			i++;
		}
	}else{
		L = "E";
	}
	return L;
}	


int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
