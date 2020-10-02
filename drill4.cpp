#include "std_lib_facilities.h"

int main()
{
	double szam, osszeg=0, max=0, min=0;
	int i;
	string egyseg;
	vector<double> vektor;

	cout<<"Admissible formats are: cm, in, ft, m."<<endl;
	cout<<"To exit type in '|'.To continue press any letter."<<endl;

	while(egyseg!="|")
	{
		cin>>egyseg;
			if (egyseg=="|")
				break;
		cout<<"Please give a number.\n";
		cin>>szam;	
		cout<<"Plese give a unit (cm,m,ft,in).\n";
		cin>>egyseg;
		while (egyseg!="cm" && egyseg!="m" && egyseg!="ft" && egyseg!="in" && egyseg!="|")
			{
				cout<<"Illegal format. Please write admissible (m,cm,ft,in) formats.\n";
				cin>>egyseg;
			}
			 if (egyseg=="m")
		{
			szam=szam;
		}
		else
			if (egyseg=="cm")
		{
				szam=szam/100;
		}
		else
			if (egyseg=="ft")
		{
				szam=szam*0.254;
		}
		else
			if (egyseg=="in")
		{
				szam=szam*0.3048;
		}
		vektor.push_back(szam);
		osszeg+=szam;
	}

	for (i=1;i<vektor.size();i++)
	{
		if(vektor[i]<vektor[min])
			{
				min=i;
			}
	}

for (i=1;i<vektor.size();i++)
	{
		if(vektor[i]>vektor[max])
			{
				max=i;
			}
	}

sort(vektor);
cout<<"Sorted vector: "<<endl;
for(i=0;i<vektor.size();i++)
	cout<<vektor[i]<<"\n";
cout<<"Sum of the value is: "<<osszeg<<endl;
cout<<"The largest value is: "<<vektor[max]<<endl;
cout<<"The smallest value is:"<<vektor[min]<<endl;
cout<<"You gave "<<vektor.size()<<" numbers";
return 0;
}