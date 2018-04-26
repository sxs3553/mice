nclude <fstream>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    string info = "insert text here";
    info.append(insert text here);
    //add more text here
    ofstream writer( "filename.file-extension" , ios::app;
pFileTXT = fopen ("MyFile.txt","a");
if ( ! writer)
{
cout << "Error Opening File" << endl;
return -1;
}
writer << info << endl;
writer.close;
return 0;
}

