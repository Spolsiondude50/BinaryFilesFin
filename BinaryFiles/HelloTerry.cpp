//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//int main() {
//	string fileName;
//	fstream hFile;
//	string textInput;
//	cout << "Where would you like to store the Binary file to Make sure to put.bin at the end";
//	cin >> fileName;
//	cout << "It's being saved as " << fileName<<endl;
//	hFile.open(fileName.c_str(), std::ios::out | std::ios::binary);
//	if (hFile.fail())
//			{
//				std::cerr << "File not found." << std::endl;
//				return false;
//			}
//		hFile.clear();
//	
//		hFile.seekp(0, std::ios_base::end);
//	
//		hFile << "Hello World" << "\n" << endl;
//		hFile << "Hello there This is the .bin File talking";
//		hFile.flush();
//		hFile.close();
//	
//	
//	
//	
//	
//	
//	
//	
//	system("pause");
//	return 0;
//}