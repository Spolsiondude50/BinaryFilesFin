#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	fstream mFile;
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
		cout << "d) Exit" << endl;
		cin >> taskOne;
		switch (taskOne) {
		case'a':
			cout << "You have selected: Add Monster" << endl;
			cout << "Which number do you want to save the monster to" << endl;
			cout<<"These are the save numebrs(0001,0002,0003)for the monster" << endl;
			cin >> taskOneAdd;
			switch (taskOneAdd)
			{
			case '1':
				cout << "This is the save ID 0001.bin for the monster Please type that to confirm" << endl;
				cin >> MonsterID1;
				cout << "Monster name" << endl;
				cin >> MonsterName1;
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Add bio please" << endl;
				getline(cin,MonsterBio1);
				mFile.open("MonstersData/" + MonsterID1, ios::out, ios::binary);
				mFile << "Monster Name: ";
				mFile << MonsterName1;
				mFile << "\n";
				mFile << "Monster Bio: ";
				mFile << MonsterBio1;
				mFile << "\n";
				mFile.flush();
				mFile.close();
				break;
			case '2':
				cout << "This is the save ID 0002.bin for the monster Please type that to confirm" << endl;
				cin >> MonsterID2;
				cout << "Monster name" << endl;
				cin >> MonsterName2;
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Add bio please" << endl;
				getline(cin,MonsterBio2);
				mFile.open("MonstersData/" + MonsterID2, ios::out, ios::binary);
				mFile << "Monster Name: ";
				mFile << MonsterName2;
				mFile << "\n";
				mFile << "Monster Bio: ";
				mFile << MonsterBio2;
				mFile << "\n";
				mFile.flush();
				mFile.close();
				return true;
				break;
			case '3':
				cout << "This is the save ID 0003.bin for the monster Please type that to confirm" << endl;
				cin >> MonsterID3;
				cout << "Monster name" << endl;
				cin >> MonsterName3;
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "Add bio please" << endl;
				getline(cin,MonsterBio3);
				mFile.open("MonstersData/" + MonsterID3, ios::out, ios::binary);
				mFile << "Monster Name: ";
				mFile << MonsterName3;
				mFile << "\n";
				mFile << "Monster Bio: ";
				mFile << MonsterBio3;
				mFile << "\n";
				mFile.flush();
				mFile.close();
				return true;
				break;
			default:
				cout << "There is no *insert your number here* monster" << endl;
				system("pause");
				return true;
			}


		case'b':
			cout << "You have selected: Remove the monster" << endl;
			cout << "Which monster do you want to delete" << endl;
			cout << "1) 0001.bin" << endl;
			cout << "2) 0002.bin" << endl;
			cout << "3) 0003.bin" << endl;
			cout << "4)View the monster" << endl;
			cin >> taskOneRemove;
			switch (taskOneRemove)
			{
			case'1':
				remove("MonstersData/0001.bin");
				cout << "MonsterID: " << MonsterID1 << " is being deleted" << endl;
				system("pause");
				return true;
				break;
			case '2':
				remove("MonstersData/0002.bin");
				cout << "MonsterID: " << MonsterID2 << " is being deleted" << endl;
				system("pause");
				return true;
				break;
			case '3':
				remove("MonstersData/0003.bin");
				cout << "MonsterID: " << MonsterID3 << " is being deleted" << endl;
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
			cout << "Which monster do you want to delete" << endl;
			cout << "1) 0001.bin" << endl;
			cout << "2) 0002.bin" << endl;
			cout << "3) 0003.bin" << endl;
			cin >> taskOneView;
			switch (taskOneView) {
			case'1':
				cout << "The monster Data" << endl;
				cout << "Name: "<<MonsterName1 << endl;
				cout << "Bio: " << MonsterBio1<< endl;
				break;
			case'2':
				cout << "The monster Data" << endl;
				cout << "Name: " << MonsterName2 << endl;
				cout << "Bio: " << MonsterBio2 << endl;
				break;
			case'3':
				cout << "The monster Data" << endl;
				cout << "Name: " << MonsterName3 << endl;
				cout << "Bio: " << MonsterName3<< endl;
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
	system("pause");
	return 0;
}