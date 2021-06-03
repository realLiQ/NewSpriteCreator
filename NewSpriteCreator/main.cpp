#include "includes.h"

string wholecode;
void copyToClipboard()
{
	const size_t len = strlen(wholecode.c_str()) + 1;
	HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
	memcpy(GlobalLock(hMem), wholecode.c_str(), len);
	GlobalUnlock(hMem);
	OpenClipboard(0);
	EmptyClipboard();
	SetClipboardData(CF_TEXT, hMem);
	CloseClipboard();
}


int main()
{
	string name;
	string profileid;
	string spriteid;
	string classname;
	string arcnamelistname;


	cout << "NewSpriteCreator v0.1\n\n";
	cout << "Enter Name: ";
	cin >> name;
	cout << "Enter ProfileID: ";
	cin >> profileid;
	cout << "Enter SpriteID: ";
	cin >> spriteid;
	cout << "Enter Classname: ";
	cin >> classname;
	cout << "Enter ArcNameList Name: ";
	cin >> arcnamelistname;

	system("cls");
	cout << "NewSpriteCreator v0.1\n\n";

	//cout << "\nGenerated Build Function:\n";
	wholecode = "dActor_c* " + classname + "::build() {\nvoid *buffer = AllocFromGameHeap1(sizeof(" + classname + "));\nreturn new(buffer) " + classname + ";\n}\n\n" + "const SpriteData " + name + "SpriteData = \n{ ProfileId::" + profileid + ", 0, 0 , 0 , 0, 0x100, 0x100, 0, 0, 0, 0, 0 };\n\n" + "Profile " + name + "Profile(&" + classname + "::build, SpriteId::" + spriteid + ", " + name + "SpriteData, ProfileId::" + profileid + ", ProfileId::" + profileid + ", \"" + name + "\", " + arcnamelistname + ");\n\n\n";
	//cout << "\nGenerated NewSprites Code:\n";



	cout << "dActor_c* " << classname << "::build() {\nvoid *buffer = AllocFromGameHeap1(sizeof(" << classname << "));\nreturn new(buffer) " << classname << ";\n}\n\n";
	cout << "const SpriteData " << name << "SpriteData = \n{ ProfileId::" << profileid << ", 0, 0 , 0 , 0, 0x100, 0x100, 0, 0, 0, 0, 0 };\n\n";
	cout << "Profile " << name << "Profile(&" << classname << "::build, SpriteId::" << spriteid << ", " << name << "SpriteData, ProfileId::" << profileid << ", ProfileId::" << profileid << ", \"" << name << "\", " << arcnamelistname << ");\n\n\n";
	copyToClipboard();
	cout << "Code copied to clipboard!\n\n";
	system("pause");
	return 0;
}
