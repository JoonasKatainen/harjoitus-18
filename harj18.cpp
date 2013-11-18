#include <iostream> // b-kohta
#include <cstring>
using namespace std;
struct TIEDOT
{
	char nimi[50];
	int ika;
}koira0, koira1, koira2, koira3, koira4;
int main()
{
	int maara;
	cout << "Montako koiraa?"<<endl;
	cin >> maara;
	TIEDOT koira[5];
	for (int i = 0; i < maara; i++)
	{
		cout<<"Anna koiran nimi ja ika"<<endl;
		cin>>koira[i].nimi>>ws>>koira[i].ika;
	}
	for(int x = 0; x < maara-1; x++)
	{
		for(int j = x+1; j < maara; j++)
		{
			if (strcmp(koira[j].nimi, koira[x].nimi)<0)
			{
				TIEDOT apu = koira[x];
				koira[x] = koira[j];
				koira[j] = apu;
			}
		}
	}
	cout << "Koirien nimet"<<endl<<koira[0].nimi<<" "<<koira[1].nimi<<" "<<koira[2].nimi<<" "<<koira[3].nimi<<" "<<koira[4].nimi<<endl;
return 0;
}
/*#include <iostream> // a-kohta
using namespace std;
struct TIEDOT
{
	char nimi[50];
	int ika;
}koira0, koira1, koira2, koira3, koira4;
int main()
{
	int maara;
	cout << "Montako koiraa?"<<endl;
	cin >> maara;
	TIEDOT koira[5];
	for (int i = 0; i < maara; i++)
	{
		cout<<"Anna koiran nimi ja ika"<<endl;
		cin>>koira[i].nimi>>ws>>koira[i].ika;
//		if (i == 0)
//		cin>>koira0.nimi>>ws>>koira0.ika;
//		if (i == 1)
//		cin>>koira1.nimi>>ws>>koira1.ika;
//		if (i == 2)
//		cin>>koira2.nimi>>ws>>koira2.ika;
//		if (i == 3)
//		cin>>koira3.nimi>>ws>>koira3.ika;
//		if (i == 4)
//		cin>>koira4.nimi>>ws>>koira4.ika;
	}
	for(int x = 0; x < maara-1; x++)
	{
		for(int j = x+1; j < maara; j++)
		{
			if (koira[j].ika<koira[x].ika)
			{
				TIEDOT apu = koira[x];
				koira[x] = koira[j];
				koira[j] = apu;
			}
		}
	}
	cout << "Koirien iat"<<endl<<taulu[0]<<" "<<taulu[1]<<" "<<taulu[2]<<" "<<taulu[3]<<" "<<taulu[4]<<endl;121
return 0;
}*/