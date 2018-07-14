
#include <iostream>
#include <vector>
#include <string>


using namespace std;


int main(){
	vector<string> place;


	string type;
	cin >> type;
	while (true) {
		if (type == "quit") {
			break;
		}
		if (type.length() == 1) {
			for (int i = 0; i < place.size(); i++) {
				if (type[0] == place.at(i)[0]) {
					cout << place.at(i) << endl;
				}
			}
		}
		else {
			place.push_back(type);
		}
		cin >> type;
	}
	return 0;
}

