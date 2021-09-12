//guide gfg https://www.geeksforgeeks.org/manipulators-in-c-with-examples/#

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
              //print address
        cout<<hex<<left<<showbase<<nouppercase<<(long long)A<<endl;
      //second output
      cout<<dec<<right<<setw(15)<<setfill('_')<<setprecision(2)<<fixed<<showpos<<B<<endl;
      //scientific uppercase
      cout<<scientific<<setprecision(9)<<noshowpos<<uppercase<<C;

	}
	return 0;

}