#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class sekil
{
	public:
		int alan;
		string birim;
		string Sekilturu;
		sekil(){
			cout<<"Sekil() cagrildi"<<endl;
			birim="cm'2";
		}
		~sekil(){
			cout<<"~sekil() cagrildi"<<endl;
		}
		
		sekil(int alan,string birim):alan(alan),birim(birim){
			
		cout<<"sekil(int alan,string birim) cagirildi"<<endl;
		}
		
	void alanyazdir(){
		cout<<Sekilturu<<"  "<<alan<<"  "<<birim<<" Alana sahiptir"<<endl;
	}	
}; 
class ucgen:public sekil {
	public:
		int yukseklik;
		int taban;
		ucgen():sekil(5,"m")
		{
			cout<<"Ucgen() cagirilidi"<<endl;
			Sekilturu="Ucgen";
		
			
		}
	~ucgen()
	{
		cout<<"~ucgen() cagrildi"<<endl;
		
	}
	ucgen(int yukseklik,int taban):yukseklik(yukseklik),taban(taban) {
		cout<<"ucgen(int yukseklik,int taban) cagirildi"<<endl;
	}
	
};

class Dortgen:public sekil
{  public:
	int en;
	int boy;
	Dortgen(){
		cout<<"Dortgen() cagrildi"<<endl;
		Sekilturu="Dikdortgen";
	}
};

class Daire : public sekil{
	public:
	 int yaricap;
	 Daire(){
	 	cout<<"Daire() cagrildi"<<endl;
	 	Sekilturu="Daire";
	 }
};

class kare:public sekil
{ 
 public:
 int kenar;
 kare(){
 	cout<<"kare() cagrildi"<<endl;
 	Sekilturu="Kare";
 	
 }
};
class EskenarUcgen :public ucgen{
public:
	EskenarUcgen(){
	cout<<"EskenarUcgen() cagrildi"<<endl;
	Sekilturu ="Eskenar Ucgen";	
	}
	~EskenarUcgen(){
		cout<<"~EskenarUcgen() cagrildi"<<endl;
		
		
	}
};
int main(int argc, char** argv) {

{
ucgen e1;
	puts("-------------------------");
}
	cout <<endl<<endl;
	ucgen e2(15,20);
	puts("-------------------------");
	
	
	//EskenarUcgen e1;
	
	return 0;
}