#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {
	map<string, string> idol;

	idol["EXO"] = "3����";
	idol["ATEEZ"] = "4����";
	idol["BOYNEXTDOOR"] = "5����";

	map<string, string>::iterator iter;
	for (iter = idol.begin(); iter != idol.end(); iter++)
		cout << iter->first << " " << iter->second << "\n";

	return 0;
}
