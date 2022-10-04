#include <fstream>
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{	

	if (argv[1] == NULL) {
		cout << "No file found!" << endl;
		return 1;
	}

	ofstream ofs(argv[2] == NULL ? "output" : argv[2]);
	ifstream ifs(argv[1]);
	char c;

	while (true) {
		ifs.get(c);
		if (!ifs.good()) break;
		if (c == '\n') ofs << "\r\n";
		else ofs << c;
	}

	return 0;
}
