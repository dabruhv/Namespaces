#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

namespace mongus {


	void printMongus() {
		float x = 7.34;
		float y = 2.56;
		float ans = pow(x, y);
		cout << fixed << setprecision(3) << ans;

	}

}
using namespace mongus;

int main() {

	printMongus();







}
