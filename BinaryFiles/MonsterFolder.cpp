#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	string Mfile1 = "MonstersData/1.bin";
	string Mfile2 = "MonstersData/2.bin";
	string Mfile3 = "MonstersData/3.bin";
	fstream mFile;
	fstream File1;
	fstream File2;
	fstream File3;
	string MonsterID1;
	string MonsterBio1;
	string MonsterName1;
	string MonsterID2;
	string MonsterBio2;
	string MonsterName2;
	string MonsterID3;
	string MonsterBio3;
	string MonsterName3;
	char taskOne;
	char taskOneAdd;
	char taskOneRemove;
	char taskOneView;
	char taskOnep2;
	while (true) {
		cout << "Welcome to the Monster Dictionary" << endl;
		cout << "What would you like to do" << endl;
		cout << "a) Add a Monster" << endl;
		cout << "b) Remove Monster by name" << endl;
		cout << "c) View Monster Data" << endl;
		cin >> taskOne;
		switch (taskOne) {
		case'a':
			cout << "You have selected: Add Monster" << endl;
			cout << "Which number do you want to save the monster to" << endl;
			cout << "These are the Save number for Monster 1 or 2 or 3 Choose one of those numbers" << endl;
			cin >> taskOneAdd;
			switch (taskOneAdd)
			{
			case '1':
				cout << "This is the save ID 1.bin for the monster Please type that to confirm " << endl;
				cin >> MonsterID1;
				cout << "Monster name" << endl;
				cin >> MonsterName1;
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Add bio please" << endl;
				getline(cin, MonsterBio1);
				mFile.open("MonstersData/" + MonsterID1, ios::out, ios::binary);
				mFile << MonsterName1;
				mFile << "\n";
				mFile << MonsterBio1;
				mFile << "\n";
				mFile.flush();
				mFile.close();
				break;
			case '2':
				cout << "This is the save ID 2.bin for the monster Please type that to confirm" << endl;
				cin >> MonsterID2;
				cout << "Monster name" << endl;
				cin >> MonsterName2;
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Add bio please" << endl;
				getline(cin, MonsterBio2);
				mFile.open("MonstersData/" + MonsterID2, ios::out, ios::binary);
				mFile << MonsterName2;
				mFile << "\n";
				mFile << MonsterBio2;
				mFile << "\n";
				mFile.flush();
				mFile.close();
				break;
			case '3':
				cout << "This is the save ID 3.bin for the monster Please type that to confirm" << endl;
				cin >> MonsterID3;
				cout << "Monster name" << endl;
				cin >> MonsterName3;
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Add bio please" << endl;
				getline(cin, MonsterBio3);
				mFile.open("MonstersData/" + MonsterID3, ios::out, ios::binary);
				mFile << MonsterName3;
				mFile << "\n";
				mFile << MonsterBio3;
				mFile << "\n";
				mFile.flush();
				mFile.close();
				break;
			default:
				cout << "There is no *insert your number here* monster" << endl;
				system("pause");
				return true;
			}


		case'b':
			cout << "You have selected: Remove the monster" << endl;
			cout << "Which monster do you want to delete" << endl;
			cout << "1) 1.bin" << endl;
			cout << "2) 2.bin" << endl;
			cout << "3) 3.bin" << endl;
			cout << "4)View the monster" << endl;
			cin >> taskOneRemove;
			switch (taskOneRemove)
			{
			case'1':
				remove("MonstersData/1.bin");
				cout << "MonsterID: " <<"1.bin" << " is being deleted" << endl;
				system("pause");
				return true;
				break;
			case '2':
				remove("MonstersData/2.bin");
				cout << "MonsterID: " << "2.bin" << " is being deleted" << endl;
				system("pause");
				return true;
				break;
			case '3':
				remove("MonstersData/3.bin");
				cout << "MonsterID: " << "3.bin" << " is being deleted" << endl;
				system("pause");
				return true;
				break;
			case'4':
				break;
			default:
				cout << "There is no *insert your number here*for a monster" << endl;
				system("pause");
				return true;
			}
		case 'c':

			cout << "You have selected: View Monster" << endl;
			cout << "Which monster do you want to View" << endl;
			cout << "1) 1.bin" << endl;
			cout << "2) 2.bin" << endl;
			cout << "3) 3.bin" << endl;
			cin >> taskOneView;
			switch (taskOneView) {
			case'1':
			{
				string buffer1;
				File1.open("MonstersData/1.bin", ios::in | ios::binary);
				cout << "The monster Data" << endl;
				getline(File1, buffer1);
				cout << "Monster Name: " << buffer1 << endl;
				getline(File1, buffer1);
				cout << "Monster Bio: " << buffer1 << endl;
				File1.flush();
				File1.close();
				break;
			}
			case'2':
			{
				string buffer2;
				File2.open("MonstersData/2.bin", ios::in | ios::binary);
				cout << "The monster Data" << endl;
				getline(File2, buffer2);
				cout << "Monster Name: " << buffer2 << endl;
				getline(File2, buffer2);
				cout << "Monster Bio: " << buffer2 << endl;
				File2.flush();
				File2.close();
				break;
			}
			case'3':
			{
				string buffer3;
				File3.open("MonstersData/3.bin", ios::in | ios::binary);
				cout << "The monster Data" << endl;
				getline(File3, buffer3);
				cout << "Monster Name: " << buffer3 << endl;
				getline(File3, buffer3);
				cout << "Monster Bio: " << buffer3 << endl;
				File3.flush();
				File3.close();
				break;
			}
			case'4':
				cout << "There is no *insert your number here*for a monster" << endl;
				system("pause");
				return true;

			case'd':
				cout << "good bye for now:-)" << endl;
				system("pause");
				return false;
			case'e':
				cout << "This is the secret letter good job" << endl;
				system("pause");
				return false;
			default:
				cout << "There is no *insert your number here* option for that I will close" << endl;
				system("pause");
				return false;
			}
		}
	}
	system("pause");
	return 0;
}