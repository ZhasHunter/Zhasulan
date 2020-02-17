#include <iostream>
using namespace std;
int main () {
    
	int x, y, x1, y1;
	cin >> x >> y >> x1 >> y1;
	if (y == y + 1 && x == x + 1){

		cout << "YES";

	}else if (y1 == y + 1 && x1 == x - 1){

		cout << "YES";

	}else if (y1 == y - 1 && x1 == x + 1){

		cout << "YES";

    }else if (y1 == y - 1 && x1 == x - 1){

		cout << "YES";

    }else if (y1 == y + 1 && x1 == x - 1){

		cout << "YES";

	}else if (y1 == y - 1 && x1 == x + 1){

		cout << "YES";

    }else if (y1 == y - 1 && x1 == x - 1){

		cout << "YES";

    }else if (y1 == y + 1 && x1 == x + 1){

		cout << "YES";

    }else if (y1 == y && x1 == x + 1){

		cout << "YES";

    }else if (y1 == y + 1 && x1 == x){

		cout << "YES";

    }else if (y1 == y && x1 == x - 1){

		cout << "YES";

    }else if (y1 == y - 1 && x1 == x){

		cout << "YES";

    }
    else{

		cout << "NO";

	}

	return 0;