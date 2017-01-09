#include <iostream>
using namespace std;
double long lungime[10] = {0, 0.01, 0.3048, 0.0254, 1000, 1, 1609.344, 0.001, 1852, 0.9144002494 },
arie[11] = { 0, 100, 4046.8564224, 0.0001, 0.0929, 10000, 0.0006452, 1000000, 1, 0.000001, 0.836127816 },
volum[13] = { 0, 0.00001, 0.000001, 0.0001, 0.001, 0.02832, 0.004546, 0.003785, 0.000016387064, 0.001, 1, 0.000001, 0.76456 },
timp[33] = { 0, 0.019178082191780823, 0.0027397260273972603, 0.00011415525114155251, 0.000001902587519025875, 3.170979198376459e-9, 3.1709791983764586e-10, 3.1709791983764586e-11, 3.1709791983764584e-14, 3.170979198376459e-17, 3.1709791983764586e-20, 3.170979198376459e-23, 3.170979198376459e-26, 0.16666666666666666, 0.25, 0.3333333333333333, 0.5, 2, 3, 4, 5, 6, 7, 10, 50, 999.2897006595637, 9992.897006595636, 9992897.006595638, 0.0410958904109589, 9992897.006595638, 0.08333333333333333, 1, 3.1709791983764586e-8},
viteza[24] = { 0, 0.0001666667, 0.01, 0.000084667, 0.00508, 0.3048, 0.000084667, 0.3048, 0.0254, 0.0254, 0.27777778, 16.666667, 1000, 0.000277778, 0.016666667, 1609.344, 26.8224, 0.44704, 1, 0.5144, 0.000254, 0.015240004, 0.9144002494, 1 },
masa[9] = { 0, 0.001, 1, 0.453592, 0.000001, 0.0283495, 0.0311035, 14.593903, 1000 },
energie[19] = { 0, 1055.06, 4.1868, 1e-7, 1.3558179483314, 0.11298482902, 1, 4186.8, 1000, 3600000, 1055060000000000000, 29307600000, 29307600000, 29307600000, 41868000000, 41868000000, 4186800, 3600, 1 },
presiune[27] = { 0, 98066.5, 101325.2738, 98000, 248.84, 3386.38815789, 98000, 1000, 47.88, 6894.75729317, 98, 9800, 9800, 9.8, 9.8, 133.322368421, 9.8, 1000000, 9800, 1000000, 6894.75729317, 133.322368421, 9800, 9.8, 9.8, 9800, 1 },
densitate[21]= { 0, 1000, 1, 0.001, 1000, 1000000, 1000000, 1000, 1, 16.017940092904052, 27679.89858, 119.8264273, 99.77637266, 1, 0.001, 0.000001, 6.236023291, 7.489150094, 1.001153961, 1729.994044, 1000 };
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
        case 2:
			cout<<"|||||||||||||||||||| Arie ||||||||||||||||||||\n\nCe unitate de masura vrei sa convertesti? \n\n1) a\t\t2) ac\t\t3) cm^2\n4) ft^2\t\t5) ha\t\t6) in^2\n7) km^2\t\t8) m^2\t\t9) mm^2\t\t10) yd^2\n\nAlege unitate de masura apasand tasta corespunzatoare: ";
			cin >> unitate1; v[unitate1]=arie[unitate1];
			cout << "Ce cantitate vrei sa convertesti? ";
			cin >> cantitate;
			cout<<"In ce unitate de masura vrei sa convertesti cantitatea aleasa?\n\n1) a\t\t2) ac\t\t3) cm^2\n4) ft^2\t\t5) ha\t\t6) in^2\n7) km^2\t\t8) m^2\t\t9) mm^2\t\t10) yd^2\n\nAlege unitate de masura apasand tasta corespunzatoare: ";
			cin >> unitate2; v[unitate2]=arie[unitate2]; break;
		case 3:
			cout<<"|||||||||||||||||||| Volum ||||||||||||||||||||\n\nCe unitate de masura vrei sa convertesti? \n\n1) cl\t\t2) cm^3\t\t3) dl\n4) dm^3\t\t5) ft^3\t\t6) galon(UK)\n7) galon(US)\t8) in^3\t\t9) l\n10) m^3\t\t11) ml\t\t12) yd^3\n\nAlege unitate de masura apasand tasta corespunzatoare: ";
			cin>>unitate1; v[unitate1]=volum[unitate1];
			cout << "Ce cantitate vrei sa convertesti? ";
			cin>>cantitate;
			cout<<"In ce unitate de masura vrei sa convertesti cantitatea aleasa?\n\n1) cl\t\t2) cm^3\t\t3) dl\n4) dm^3\t\t5) ft^3\t\t6) galon(UK)\n7) galon(US)\t8) in^3\t\t9) l\n10) m^3\t\t11) ml^3\t12) yd^3\n\nAlege unitate de masura apasand tasta corespunzatoare: ";
			cin>>unitate2; v[unitate2]=volum[unitate2]; break;
        case 4:
			cout<<"|||||||||||||||||||| Timp ||||||||||||||||||||\n\nCe unitate de masura vrei sa convertesti? \n\n1) saptamana\t2) zi\t\t3) ora\t\t4) minute\n5) decisecunda\t6) centisecunda\t7) milisecunda\t8) microsecunda\n9) nanosecunda\t10) picosecunda\t11) femtosecunda 12) attosecunda\n13) bimester\t14) trimestru\t15) patru luni\t16) semestru\n17) biennium\t18) triennium\t19) quadrennium\t20) lustru\n21) sexennium\t22) septennium\t23) deceniu\t24) decalustro\n25) seculol\t26) mileniu\t27) megaannum\t28) 15 zile\n29) cron\t30) luna\t31) an\t\t32) secunda\n\nAlege unitate de masura apasand tasta corespunzatoare: ";
			cin>>unitate1; v[unitate1]=timp[unitate1];
			cout << "Ce cantitate vrei sa convertesti? ";
			cin>>cantitate;
			cout<<"In ce unitate de masura vrei sa convertesti cantitatea aleasa?\n\n1) saptamana\t2) zi\t\t3) ora\t\t4) minute\n5) decisecunda\t6) centisecunda\t7) milisecunda\t8) microsecunda\n9) nanosecunda\t10) picosecunda\t11) femtosecunda 12) attosecunda\n13) bimester\t14) trimestru\t15) patru luni\t16) semestru\n17) biennium\t18) triennium\t19) quadrennium\t20) lustru\n21) sexennium\t22) septennium\t23) deceniu\t24) decalustro\n25) seculol\t26) mileniu\t27) megaannum\t28) 15 zile\n29) cron\t30) luna\t31) an\t\t32) secunda\n\nAlege unitate de masura apasand tasta corespunzatoare: ";
			cin>>unitate2; v[unitate2]=timp[unitate2]; break;
        case 5:
			cout<<"|||||||||||||||||||| Viteza ||||||||||||||||||||\n\nCe unitate de masura vrei sa convertesti? \n\n1) cm/min\t2) cm/s\t\t3) ft/h\t\t4) ft/min\t5) ft/s\n6) fph\t\t7) fps\t\t8) in/s\t\t9) ips\t\t10) km/h\n11) km/min\t12) km/s\t13) m/h\t\t14) m/min\t15) mi/s\n16) mi/min\t17) mph\t\t18) mps\t\t19) nmi/h\t20) yd/h\n21) yd/min\t22) yd/s\t23) m/s\n\nAlege unitate de masura apasand tasta corespunzatoare: ";
			cin>>unitate1; v[unitate1]=viteza[unitate1];
			cout << "Ce cantitate vrei sa convertesti? ";
			cin>>cantitate;
			cout<<"In ce unitate de masura vrei sa convertesti cantitatea aleasa?\n\n1) cm/min\t2) cm/s\t\t3) ft/h\t\t4) ft/min\t5) ft/s\n6) fph\t\t7) fps\t\t8) in/s\t\t9) ips\t\t10) km/h\n11) km/min\t12) km/s\t13) m/h\t\t14) m/min\t15) mi/s\n16) mi/min\t17) mph\t\t18) mps\t\t19) nmi/h\t20) yd/h\n21) yd/min\t22) yd/s\t23) m/s\n\nAlege unitate de masura apasand tasta corespunzatoare: ";
			cin>>unitate2; v[unitate2]=viteza[unitate2]; break;
        case 7:
            cout<<"|||||||||||||||||||| Masa ||||||||||||||||||||\n\nCe unitate de masura vrei sa convertesti? \n\n1) grame\t2) kilograme\t3) lb(pound)\t4) miligrame\n5) oz(AV)\t6) oz(TROY)\t7) slug\t\t8) tone\n\nAlege unitate de masura apasand tasta corespunzatoare: ";
			cin>>unitate1; v[unitate1]=masa[unitate1];
			cout << "Ce cantitate vrei sa convertesti? ";
			cin>>cantitate;
			cout<<"In ce unitate de masura vrei sa convertesti cantitatea aleasa?\n\n1) grame\t2) kilograme\t3) lb(pound)\t4) miligrame\n5) oz(AV)\t6) oz(TROY)\t7) slug\t\t8) tone\n\nAlege unitate de masura apasand tasta corespunzatoare: ";
			cin>>unitate2; v[unitate2]=masa[unitate2]; break;
