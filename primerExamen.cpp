#include <iostream>
using namespace std;
int main(){
    int *arr = new int [5];

	for(int i=0;i<5;i++){
		cout<<"Digite el primer valor de : ["<<i+1<<"]: ";
		cin>>*(arr+i);
	}
    cout << endl;
	for(int i=0;i<5;i++){
		cout << "valor:    ";
		cout << *(arr+i) << endl;
		cout << "posicion: " << (arr+i)<< endl;
	}

    delete [] arr;
	return 0;
}
