#include<iostream>
using namespace std;


string mixText(string x,string y){
	int i=0;
	string e="E",full;
	if(x.size()!=y.size()){
		return e;
	}else{
	while(i<x.size()){
		 full=full+x[i]+y[i];
	i++;}
	return full;}

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
