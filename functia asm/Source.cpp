#include <iostream>//something wrong
using namespace std;

void main(void){
	cout << "Pe punctul de a emite sunet..\n";

	_asm
	{
		MOV EAX, 0x200
		MOV DL, 7
		INT 0x21
	};
	cout << "Gata...\n";

	system("pause");
}