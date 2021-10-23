int passwordChecker(std::string password) {
  int digits = 0;
  int letters = 0;
  int specialCharacters = 0;
  int value = 0;

  for(int i = 0; i < password.length(); i++) {

    if(std::isdigit(password[i])) {

      digits ++;
      std::cout << "numbers" << digits;

    } else if (std::isalpha(password[i])) {

      letters++;
      std::cout << "letters" << letters;

    } else {

      specialCharacters++;
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
	std::cout << "PLease enter a password: ";
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

void employeeListRemoval(void) {
	std::cout << " - employeeListRemoval: not yet implemented\n\n";
}
