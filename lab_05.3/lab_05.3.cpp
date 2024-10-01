#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double h(double x);

int main()
{
	double q, qp, qk, res;
	int n;
	cout << "qp = "; cin >> qp;
	cout << "qk = "; cin >> qk;
	cout << "n = "; cin >> n;
	
	double dq = (qk - qp) / n;

	cout << fixed;
	cout << "------------------\n";
	cout << setw(5) <<  "q" << setw(4) << "|" << setw(6) << "res" << setw(4) << "|\n";
	cout << "------------------\n";
	q = qp;
	while (q <= qk) {
		res = h(q + 1) + h(pow(q, 2) + 1) + pow( h(pow(q, 2)) , 2);
		cout << q << "|" << res << "|" << endl;
		q += dq;
	}

}

double h(double x){
	if (abs(x) >= 1) {
		return (cos(x) + 1) / (pow(cos(x), 2) + 1);
	}
	double S = 0;
	int i = 0;
	double a = 1;
	S = a;
	do
	{
		i++;
		double R = x*x / (4*i*i - 2*i);
		a *= R;
		S += a;
	} while (i < 7);
	return (1 / cos(x)) * S;
 }