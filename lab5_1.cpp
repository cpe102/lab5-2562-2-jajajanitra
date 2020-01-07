#include<iostream>
#include<string>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	
	int A =0;
	string name[N];
	int age[N];
	while(A < N){
	cout << "Name of student = ";
	cin >> name[A];
	cout << "Age of student = ";
	cin >> age[A];
	A++;
	}

	int key;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";
	
	int i=0;
	while(i<N){
		if(key == age[i]){
			cout << name[i] << "\n";
		}
		i++;
	}

	
	cout << "--------------------------------------\n";
	
	return 0;
}
