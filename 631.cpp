#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
string ciag;
class zadanie631
{
                vector <string> ciag;
        public:
                void wprowadz();
                void wypisz();
                bool boolcheck(string ciag);
                int obliczanie();
                int sprawdzenie(int x, int y);
                int zapiszDoPliku(const char *);             
};

void zadanie631::wprowadz()
{

		fstream plik;  
        string wprowadzany;
        plik.open("B:\\Programowanie z Panem Fulaa\\Zadanie Mat. 63.1&2\\ciagi.txt", ios::in); 
         if(plik.good()) 
            while(!plik.eof()) 
                  {
                	plik >> wprowadzany;
                	ciag.push_back(wprowadzany);
                   }
                   plik.close();     
        			
}


void zadanie631::wypisz()
{
		for (int i = 0; i < ciag.size(); i++)
		{
			boolcheck(ciag[i]);
		}
}


bool zadanie631::boolcheck(string ciag)
{
        if(ciag.length()%2==0)
        {
	
	        for(int i=0; i<=(ciag.length()/2)-1;i++)
	        {
	            if(ciag[i]!=ciag[ciag.length()/2+i])
	            {
	                return false;
	            }
	        }
	
	        for(int i=0; i<=ciag.length()-1;i++)
	        {
	        	cout<<ciag[i];
	        }
	        cout<<endl;
        }
}




//Eryk Kucharski
int zadanie631::obliczanie()
{

}


zadanie631::zapiszDoPliku(const char *nazwa)
{	
        ofstream plik;
        plik.open(nazwa);
		
        plik.close();
        
}



int main()
{
//Eryk Kucharski
	zadanie631 x;
    x.wprowadz();
    x.wypisz();
//	x.boolcheck(ciag);
//  x.obliczanie();
    x.zapiszDoPliku("B:\\Programowanie z Panem Fulaa\\Zadanie Mat. 63.1&2\\wyniki.txt");
    return 0;
}
