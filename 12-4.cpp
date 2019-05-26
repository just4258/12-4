#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
double cAve[3] = {};

void stuAve(vector<vector<double>> vec) {
	double ave = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			cout << vec[i][j] << ", ";
			ave += vec[i][j];
		}
		cout << ave / 3 << endl;;
		ave = 0;
	}
}

double* courseAve(vector<vector<double>> vec) {

	for (int i = 0; i < 3; i++) {
	    cAve[i] = 0;
		for (int j = 0; j < 5; j++) {
			cAve[i] += vec[j][i] / 5.0;
		}
	}
	return cAve;
}

int main()
{
	vector<vector<double>> vec(5);

	for (int i = 0; i < 4; i++) {
		vec[i] = vector<double>(4);
	}

	vec =
	{ {80.0, 70.0, 90.0},
	 {85.0, 77.0, 95.0},
	 {83.0, 75.0, 70.0},
	 {73.0, 95.0, 67.0},
	 {88.0, 79.0, 71.0} };

	cout << fixed << setprecision(1);
	stuAve(vec);
	cout << "Average: " << *(courseAve(vec)) << "," << *(courseAve(vec) + 1) << "," << *(courseAve(vec) + 2);
	return 0;
}
