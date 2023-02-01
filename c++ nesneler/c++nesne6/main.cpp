#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Dikdortgen{
	private:
		int yukseklik;
		int genislik;
		int alan;
		char ad[10];
		
    public:
    Dikdortgen(){
    	cout<<"-----------------------------------------------------"<<endl;
		cout<<"Parametresiz Cagirildim"<<endl;
        cout<<"-----------------------------------------------------"<<endl;
	}
	Dikdortgen(char p[]){
		strcpy(ad,p);
		 cout<<"-----------------------------------------------------"<<endl;
	     cout<<ad<< " Olusturuldu"<<endl;
		 cout<<"-----------------------------------------------------"<<endl;
	}
	Dikdortgen(int a,int b){
    	cout<<"-----------------------------------------------------"<<endl;
		cout<<"Parametresiz Cagirildim"<<endl;
        cout<<"-----------------------------------------------------"<<endl;
	}
	
	void verigir(){
		cout<<"Yukseklik gir";
		cin>>yukseklik;
		cout<<"Genislik gir";
		cin>>genislik;
	}
	void alanhes(){
		alan = genislik*yukseklik;
		cout<<"alan:"<<alan<<endl;
	}
	~Dikdortgen(){
		cout<<ad<<" Yok edildi"<<endl;
	}
};
int main(int argc, char** argv) 
{
	
  {
	Dikdortgen d1("d1");
	{
		Dikdortgen d2("d2");
	  { 
			Dikdortgen d3("d3");
	  }
    }
  }

	
	return 0;
}