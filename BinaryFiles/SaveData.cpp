//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//int main() {
//	string saveFile;
//	fstream sFile;
//	string SaveName;
//	string Output;
//	string deathCounter;
//	string charLevel;
//	string timePlayed;
//	cout << "What would you like to call your save file"<<endl;
//	cout << "Name Character Level Deaths Time in Seconds please" << endl;
//	cin >> saveFile;
//	cin >> SaveName;
//	cin >> charLevel;
//	cin >> deathCounter;
//	cin >> timePlayed;
//	sFile.open(saveFile.c_str(), ios::out | ios::binary);
//	sFile.clear();
//	sFile.seekp(0, std::ios_base::end);
//	sFile << "Name: "<<SaveName << endl;
//	sFile << "Character Level: "<<charLevel << endl;
//	sFile << "Deaths: "<<deathCounter << endl;
//	sFile << "Time in Seconds: "<<timePlayed << endl;
//	sFile.flush();
//	sFile.close();
//	cout<<"Name: "<<SaveName << endl;
//	cout << "Character Level: " << charLevel << endl;
//	cout << "Deaths: " << deathCounter << endl;
//	cout << "Time in Seconds: " << timePlayed << endl;
//	system("pause");
//	return 0;
//}