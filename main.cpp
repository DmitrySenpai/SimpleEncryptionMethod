#include <iostream> 
#include <fstream>
 
using namespace std;
 
int main() 
{ 
	system("title [Abstergo] - Encryption");
	int select, key,i;
	char load[100], save[100];
	cout << "               #%          " << endl;
	cout << "              ####         " << endl;
	cout << "             ######        " << endl;
	cout << "            ######         " << endl;
	cout << "          -#####+          " << endl;
	cout << "         %#####. ##-       " << endl;
	cout << "        ###### :####%                 Abstergo" << endl;
	cout << "                ######                   Industries" << endl;
	cout << "   ############@ ######    " << endl;
	cout << "  ############### ######   " << endl;
	cout << ":################# @#####  " << endl;
	cout << "                    *#####-" << endl;
MENU:
	cout << endl;
	cout << "MENU:" << endl << endl;
	cout << "1. Encryption." << endl;
	cout << "2. Decrypt" << endl << endl;
	cout << ">"; cin >> select;
	if (select >= 3) {
		cout << endl;
		cout << "ERROR!" << endl;
		goto MENU;
	}
	if (select <= 0) {
		cout << endl;
		cout << "ERROR!" << endl;
		goto MENU;
	}
	//END ÏĞÎÂÅĞÊÈ
	//ÇÀÃĞÓÇÊÀ ÔÀÉËÀ
	cout << endl;
	cout << "LOAD FILES>"; cin >> load;
	//ÑÎÕĞÀÍÈÅ ÔÀÉËÀ
	cout << endl;
	cout << "SAVE FILES>"; cin >> save;
    //ÂÂÎÄ ÊËŞ×À
	cout << endl;
	cout << "KEY>"; cin >> key;
	cout << endl;
	//ÍÀ×ÀËÎ
	std::ifstream in(load, std::ifstream::in | std::ifstream::binary);
    std::ofstream out(save, std::ifstream::out | std::ifstream::binary);
    char data;
    data=in.get();
	//ØÈÔĞÎÂÀÍÈÅ
	if (select == 1)
	{
    	cout << "[Abstergo] Encryption in progress ..." << endl;
    	while (in.good()) 
    	{   
			out<<(char)((int)(data+key)); 
        	data=in.get(); 
    	};
    	in.close();
    	out.close();
    	cout << "[Abstergo] Encryption is complete!" << endl;
	}
	//Ğàñøèôğîâàòü
	if (select == 2)
	{
    	cout << "[Abstergo] Decrypt in progress ..." << endl;
    	while (in.good()) 
    	{   
        	out<<(char)((int)(data-key)); 
        	data=in.get(); 
    	};
    	in.close();
    	out.close();
    	cout << "[Abstergo] Decrypt is complete!" << endl;
	}
    system("pause");
}
