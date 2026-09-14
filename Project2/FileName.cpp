#include<iostream>
using namespace std;
class Practice{
public:
	Practice() {
		cout << "hello"<<endl;
	}
	~Practice() {
		cout << "?";
	}
};
int main() {
	Practice stu;
	return 0;
}