#include <iostream>
using namespace std;
int main(){
 
int i,N,jumlah=0, rata=0;
i = 1;

cout << "Masukan banyak nilai : " ;
cin >> N  ;

/perulangan/
while (i < N){
	
	cout << i*7 << " + " ;
	jumlah = jumlah+(i*7);
	i++;
}
jumlah = jumlah+(i*7);
cout << i*7 <<" " ;
cout << " = " << jumlah  << endl; 
rata = jumlah/N; 
cout << "rata = " << rata ;
}
