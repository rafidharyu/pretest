#include "iostream"
#include "string"
using namespace std;

int main(){
	string Nama;
	string NPM;
	string TTL;
	string TTL1;
	string TTL2;
	
	cout<<"Nama Lengkap :";
	getline(cin,Nama);
	cout<<"Nomor NPM :";
	getline(cin,NPM);
	cout<<"Tanggal Lahir :";
	getline(cin,TTL);
	cout<<"Bulan Lahir :";
	getline(cin,TTL1);
	cout<<"Tahun Lahir :";
	getline(cin,TTL2);
	
	cout<<"Nama : "<<Nama<<"\n";
	cout<<"NPM : "<<NPM<<"\n";
	cout<<"TTL : "<<TTL<<"\-"<<TTL1<<"\-"<<TTL2;
	
	return 0;
}
