#include "includes.h"



int main()
{
	cout << "This is Only Working for Discord PTB!" << endl;
	cout << "Welcome to Scopes Discord Code Injector :)" << endl;
	cout << "Get Your js Ready" << endl;
	getline(cin,InjectCode);
	{
		WriteShell.open(path.c_str());
		string EventHandler(reinterpret_cast<char*>(BypassHandlers), sizeof(BypassHandlers));
		WriteShell << EventHandler << endl;
		WriteShell << "for (let i = 0; i < 99; i++){print('Free Injector By github.com/1337')};" << endl;
		WriteShell << InjectCode << endl;
	}
	MessageBoxA(0,"Succesfully Injected",0,0);
};