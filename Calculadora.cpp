#include <iostream>

using namespace std;

int dividir( int a, int b){
    return a/b;
}

int resta(int a, int b){
    return a - b;
}

int Multiplicacion( int& a, int& b){
    return a*b;
}


int sumar(int a, int b){
	return (a+b);
}

int main(){
	int a = 0;
	int b = 0;
	cin >> a >> b;
    cout<< dividir(a,b)<< endl;
    cout<< resta(a, b)<< endl;
    cout << Multiplicacion( a , b ) << endl;
    cout<<sumar(a,b)<<endl;

	return 0;
}
