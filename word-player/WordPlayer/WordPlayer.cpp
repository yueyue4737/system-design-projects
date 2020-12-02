#include <iostream>
#include <fstream>
#include <string>
using namespace std; // not a better way

// write a function to get the substring with no repetition


int main() {

	// read files from the source
	string filename;
	cout << "Enter a filename: ";
	cin >> filename;
	ifstream file(filename);

	//int N = 0;
	//if (file.is_open()) {
		//string unused;
		//while (getline(file, unused)) {
			//N++;
		//}
		//cout << "total lines" << N;
		//file.close();
	//}

	if (file.is_open()) {
		string line;
		int N = 680;
		for (int i = 0; i < N; i++) {
			getline(file, line);
			cout << line << "\n";
		}
		int n;
		cout << "Enter an integer: ";
		cin >> n;
		cout << "You enter:" << n;

		file.close();
	}

	return 0;
}