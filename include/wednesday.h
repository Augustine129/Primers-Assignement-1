#include <iostream>
#include <sys/stat.h>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

void phoneCollegeDirectory(){

string searchInput;

cout<<"\nPlease enter a name or number to search: ";
getline(cin,searchInput);


string informationRow;
bool parsed = false;
string peopleName;
string homeTelephone;

ifstream ip("contact.csv");

while(ip.good()){
getline(ip, informationRow);
stringstream rowss(informationRow);
getline(rowss, peopleName,',');
getline(rowss,homeTelephone,',');
  
homeTelephone.erase(remove(homeTelephone.begin(), homeTelephone.end(), ' '), homeTelephone.end());
  
  if(searchInput == peopleName || searchInput == homeTelephone){
  parsed = true;
  cout<<"\n\nContact details: "<<endl;
  cout<<peopleName << ", T: "<<homeTelephone;

}
 
}
ip.close();
if(parsed == false){
 cout<<"\nSorry, no contact details found please try again";
}}


void phoneDirectory(void) {
	
phoneCollegeDirectory();

}

#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <sstream>
#include <vector>
#include <iomanip>
using namespace std;


void controlSalry()
{
    ifstream ip("salary.csv");
    string informationRow;
    string firstName;
    string lastName;
    string salary;
    string initial;
    
    int len_column_1 = 7;
    int len_column_2 = 9;
    int len_column_3 = 6;
    
    
    cout<<"Initial"<<string(1,' ')
    <<"Last"<<string(len_column_2-3,' ')
    <<"Salary"<<endl;

   
    cout<<string(len_column_1,'-');
    cout<<' '<<
    string(len_column_2,'-');
    cout<<' '<<
    string(len_column_3,'-')
    <<endl;


    while(ip.good()){
        getline(ip,informationRow);
        stringstream ssrow(informationRow);
        getline(ssrow,firstName,',');
        getline(ssrow,lastName,',');
        getline(ssrow,salary,',');
      
        initial = firstName[0];
        salary  =  "£"+salary;

        cout<<initial+'.'<<string(len_column_1-1,' ')
        <<lastName<<
        string(len_column_2 - lastName.length()+1,' ')<<
        salary<<"\n";

    }
    
}

void dataFileParser(void) {
	controlSalry();

}