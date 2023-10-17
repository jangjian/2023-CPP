#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {
	map<string, string> idol;

	idol["EXO"] = "3세대";
	idol["ATEEZ"] = "4세대";
	idol["BOYNEXTDOOR"] = "5세대";

	map<string, string>::iterator iter;
	for (iter = idol.begin(); iter != idol.end(); iter++)
		cout << iter->first << " " << iter->second << "\n";

	return 0;
}
