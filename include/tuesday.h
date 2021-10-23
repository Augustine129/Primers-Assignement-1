int passwordChecker(std::string password) {
  //number of digits in the string
  int digits = 0;
  //number of letters in string
  int letters = 0;
  //number of special characters in a string
  int specialCharacters = 0;
  int value = 0;

//This loop goes through each character in the string for comparison
  for(int i = 0; i < password.length(); i++) {

    if(std::isdigit(password[i])) {

      digits ++; //increment the number of digit in the string 
      std::cout << "numbers" << digits;

    } else if (std::isalpha(password[i])) {

      letters++;//increment the number of letters in the string
      std::cout << "letters" << letters;

    } else {

      specialCharacters++; //increment the number of special characters in the string
       std::cout << "special" << specialCharacters;
    }
  }
 
 if( password.length() >= 4 ){
    value = 2;
  }

  if ( letters > 0 || digits > 0 ) {
    value = 1;
  }
 
  if ( password.length() >= 8 && digits >= 2 && letters >= 4){
    value = 3;    
  }

  if ( password.length() >= 8 && digits >= 2 && letters >= 4 && specialCharacters >= 1 ){
    value = 4;
  }

  return value;
}

void passwordComplexityChecker(void) {
  std::string passwords;
  int passwordStrength = -1;
	std::cout << "PLease enter a password: "; // ask the user to enter their password
  std::getline(std::cin, passwords);
  passwordStrength = passwordChecker(passwords);
  std::cout <<"\npassword strength: " << passwordStrength;
  
  switch(passwordStrength) {
    case 2: std::cout << "\nThe password \' " << passwords <<" \' is Normal"; break;
    case 3: std::cout << "\nThe password \' " << passwords <<" \' is Strong"; break;
    case 4: std::cout << "\nThe password \' " << passwords <<" \' is Very Strong"; break;
    default: std::cout << "\nThe password \' " << passwords <<" \' is Weak"; break;
  }

}

void showEmployees (std::vector<std::string> employees) {
  int employeeSize = employees.size();
  std::cout << "\nThere are " << employeeSize << " employees:\n";
   for (std::string i : employees) {
    std::cout << i << std::endl;
   }
}

void employeeListRemoval(void) {
  
  std::vector<std::string> totalEmployee = { 
    "John Smith",
    "Jaelynn Stuart",
    "Kaley Barajas",
    "Walter Collier",
    "Cale Myers",
    "John Smith" 
    };

  std::string remove;
  
  std::cout<< "There are: "<< totalEmployee.size() <<" employees\n";
  for (int i = 0; i < totalEmployee.size(); i++){
    std::cout << totalEmployee[i] << "\n";
  }
  
  std::cout<<"Enter an employee name to remove: ";
  
  std:getline(std::cin,remove);
  auto value = std::find(totalEmployee.begin(), totalEmployee.end(), remove);
  if(value != totalEmployee.end()){
    
   totalEmployee.erase(value);
    
    std::cout<< "There are: "<< totalEmployee.size() <<" employees\n";
    for (int i = 0; i < totalEmployee.size();){
      std::cout << totalEmployee[i] << "\n";
    }
  }
 
  else{
    std::cout<<"Employee not found please try again";
  }
}

