
#include <iostream>

using namespace std;

void poleprostokata(int skladnik1, int skladnik2);
void poletrapezu(double skladnik1, double skladnik2, double skladnik3, double skladnik4);
void poletrojkata(double skladnik1, double skladnik2, double skladnik3);

int main()
{
	poleprostokata(4, 4);
	poletrapezu(3, 5, 6, 2);
	poletrojkata(3, 7, 2);
}

void poleprostokata(int skladnik1, int skladnik2) {
	cout << skladnik1 * skladnik2 << endl;
}
void poletrapezu(double skladnik1, double skladnik2, double skladnik3, double skladnik4) {
	cout << (skladnik1 + skladnik2) * skladnik3 / skladnik4 << endl;
}
void poletrojkata(double skladnik1, double skladnik2, double skladnik3) {
	cout << skladnik1 * skladnik2 / skladnik3 << endl;
}
	