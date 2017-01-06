#include <iostream>
using namespace std;
double long lungime[10] = {0, 0.01, 0.3048, 0.0254, 1000, 1, 1609.344, 0.001, 1852, 0.9144002494 }, arie[11] = { 0, 100, 4046.8564224, 0.0001, 0.0929, 10000, 0.0006452, 1000000, 1, 0.000001, 0.836127816 }, volum[13] = { 0, 0.00001, 0.000001, 0.0001, 0.001, 0.02832, 0.004546, 0.003785, 0.000016387064, 0.001, 1, 0.000001, 0.76456 }, timp[33] = { 0, 0.019178082191780823, 0.0027397260273972603, 0.00011415525114155251, 0.000001902587519025875, 3.170979198376459e-9, 3.1709791983764586e-10, 3.1709791983764586e-11, 3.1709791983764584e-14, 3.170979198376459e-17, 3.1709791983764586e-20, 3.170979198376459e-23, 3.170979198376459e-26, 0.16666666666666666, 0.25, 0.3333333333333333, 0.5, 2, 3, 4, 5, 6, 7, 10, 50, 999.2897006595637, 9992.897006595636, 9992897.006595638, 0.0410958904109589, 9992897.006595638, 0.08333333333333333, 1, 3.1709791983764586e-8}, viteza[24] = { 0, 0.0001666667, 0.01, 0.000084667, 0.00508, 0.3048, 0.000084667, 0.3048, 0.0254, 0.0254, 0.27777778, 16.666667, 1000, 0.000277778, 0.016666667, 1609.344, 26.8224, 0.44704, 1, 0.5144, 0.000254, 0.015240004, 0.9144002494, 1 }, masa[9] = { 0, 0.001, 1, 0.453592, 0.000001, 0.0283495, 0.0311035, 14.593903, 1000 }, energie[19] = { 0, 1055.06, 4.1868, 1e-7, 1.3558179483314, 0.11298482902, 1, 4186.8, 1000, 3600000, 1055060000000000000, 29307600000, 29307600000, 29307600000, 41868000000, 41868000000, 4186800, 3600, 1 }, presiune[27] = { 0, 98066.5, 101325.2738, 98000, 248.84, 3386.38815789, 98000, 1000, 47.88, 6894.75729317, 98, 9800, 9800, 9.8, 9.8, 133.322368421, 9.8, 1000000, 9800, 1000000, 6894.75729317, 133.322368421, 9800, 9.8, 9.8, 9800, 1 }, densitate[21]= { 0, 1000, 1, 0.001, 1000, 1000000, 1000000, 1000, 1, 16.017940092904052, 27679.89858, 119.8264273, 99.77637266, 1, 0.001, 0.000001, 6.236023291, 7.489150094, 1.001153961, 1729.994044, 1000 };
void temperatura()
{
	int unitate1, unitate2;
	double long n,m,cantitate;
	cout<<"|||||||||||||||||||| Temperatura ||||||||||||||||||||\n\nCe unitate de masura vrei sa convertesti? \n\n1) Fahrenheit\t2) Celsius\t3) Kelvin\t4) Rankine\n\nAlege unitate de masura apasand tasta corespunzatoare: ";
	cin>>unitate1; cout<<"Ce cantitate vrei sa convertesti? ";
	cin>>cantitate;
	switch(unitate1)
	{
	case 1: { m=((cantitate-32)*5)/9; } break;//Fahrenheit
	case 2: { m=cantitate; } break;//Celsius
	case 3: { m=cantitate-273.15; } break;//Kelvin
	case 4: { m=((cantitate-491.67)*5)/9; } break;//Rankine
	}
	cout<<"In ce unitate de masura vrei sa convertesti cantitatea aleasa?\n\n1) Fahrenheit\t2) Celsius\t3) Kelvin\t4) Rankine\n\nAlege unitate de masura apasand tasta corespunzatoare: ";
	cin>>unitate2;
	switch(unitate2)
	{
	case 1: { n=(((m*9)/5)+32); } break;//Fahrenheit
	case 2: { n=m; } break;//Celsius
	case 3: { n=m+273.15; } break;//Kelvin
	case 4: { n=((m+273.15)*9)/5; } break;//Rankine
	}
	cout<<"Convertire: "<<unitate1<<"("<<cantitate<<")"<<" ---> "<<unitate2<<" = "<<fixed<<n<<endl;
}
void convertor()
{
	double long cantitate, v[35], cantafisare;
	int optiune, unitate1, unitate2;
	cin>>optiune;
	if(optiune!=6)
	{
		switch(optiune)
		{
		case 1:
			cout << "|||||||||||||||||||| Lungime ||||||||||||||||||||\n\nCe unitate de masura vrei sa convertesti? \n\n1) cm\t2) ft\t3) in\n4) km\t5) m\t6) mi\n7) mm\t8) nmi\t9) yd\n\nAlege unitate de masura apasand tasta corespunzatoare: ";
			cin>>unitate1; v[unitate1]=lungime[unitate1];
			cout << "Ce cantitate vrei sa convertesti? ";
			cin>>cantitate;
			cout << "In ce unitate de masura vrei sa convertesti cantitatea aleasa?\n\n1) cm\t2) ft\t3) in\n4) km\t5) m\t6) mi\n7) mm\t8) nmi\t9) yd\n\nAlege unitate de masura apasand tasta corespunzatoare: ";
			cin>>unitate2; v[unitate2]=lungime[unitate2]; break;
