#include <iostream>
using namespace std;

#include <list>
#include <string>
#include <vector>
#include <algorithm>

int main(){
	string s("wlrbbmqbhcdarzowkkyhiddqscdxrjmowfrxsjybldbefsarcbynecdyggxxpklorellnmpapqfwkhopkmco");
	string szigzag("");
	int numRows = 61;

	int numSplit = s.size()/numRows+1;
	for (unsigned j=0;j<numRows;++j) {
		int delt1 = 2*(numRows-1)-2*j;	// fixed index delta
		int delt2 = 2*j;	// fixed index delta
		int index1 = j+delt1;	// init index1 
		int index2 = index1+delt2;	// init index2
		for (unsigned i=0;i<numSplit;++i) {
			if (j==0 || j==numRows-1) {	// first and last row
				if (i*2*(numRows-1) + j<s.size()) {
					szigzag.push_back(s[i*2*(numRows-1) + j]);
				}
			}
			else {
				if (i==0) {	//first element for rows expect first and last row
					szigzag.push_back(s[j]);
				}
				else {
						if (index1 < s.size()) {
							szigzag.push_back(s[index1]);
						}
						if (index2 < s.size()) {
							szigzag.push_back(s[index2]);
						}
						index1 = index2+delt1;
						index2 = index1+delt2;
				}
			}
		}
	}
	cout<<szigzag<<endl;
	system("pause");
	return 0;
}