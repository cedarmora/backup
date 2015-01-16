#include "std_lib_facilities.h"

int main()
{
	for (string word; cin >> word; ) {
		if (word == "birch"
		    || word == "duck"
		    || word == "spit"
		    || word == "punt"
		    || word == "sass"
		    || word == "golf"
		   )
			cout << "BLEEP ";
		else
			cout << word << " ";
	}
}
