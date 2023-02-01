#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Dikdortgen{
	private:
		int yukseklik;
		int genislik;
		int alan;
		
    public:
    Dikdortgen(){
    	cout<<"-----------------------------------------------------"<<endl;
		cout<<"Parametresiz Cagirildim"<<endl;
        cout<<"-----------------------------------------------------"<<endl;
	}
	Dikdortgen(string p){
			cout<<"-----------------------------------------------------"<<endl;
		cout<<"Parametre ile cagirildim"<<endl;
		cout<<"Parametre :"<<p<<endl;
		cout<<"-----------------------------------------------------"<<endl;
	}
	void verigir(){
		cout<<"Yukseklik gir";
		cin>>yukseklik;
		do{
			cout<< "KUCUK OMAZ"<<endl;
			
		}while(yukseklik<=0);
		
			
		
		cout<<"Genislik gir";
		cin>>genislik;
	}
	void alanhes(){
		alan = genislik*yukseklik;
		cout<<"alan:"<<alan<<endl;
	}
};
int main(int argc, char** argv) {
	
	Dikdortgen d1,d2("Naber");// d1 nesnesi parametresiz d2 parametreli cagirildi
	d1.

	
	return 0;
}