class Car {
  private:
  std::string carColour;
  std::string carMake;
  bool engineOn;
  bool carLocked = false;

  public:
  Car() {
    std::cout <<"\ncreated";
    setMake();
    engineOff();
    setColour();
  }

  Car(std::string colour, std::string make) {
    setMake(make);
    setColour(colour);
  }
  ~Car() {
    std::cout <<"\nDestroyed";
  }

  void setColour(std::string colour = "Pink") {//This is a method to set the colour
    carColour = colour;
  }

  std::string get_colour(void) {//This method gets the colour 
    return carColour;
  }

  void setMake(std::string make = "Range Rover") {//This method set the make
    carMake = make;
  }

  std::string get_make(void) {//Thia method gets the make
    return carMake;
  }

  void enginesOn(void) {//Thsi method to turn engine on
    if(engineOn) {
      std::cout << "\nSorry the engine is already on\n";
    } else {
      engineOn = true;
      std::cout << "\nTurning the engine on\n";
    }    
  }

  void engineOff(void) {//This method to switch engine off
    if(engineOn) {
      engineOn = false;
    } else {
      std::cout << "\nSorry the engine is already off\n";
    }
  }

  void locked(bool is_locked) {//This method to lock or unlock car
    if(is_locked && !carLocked) { 
      carLocked = true;
      std::cout << "\nThe car is locked\n";
    } else if(is_locked && carLocked) { 
      std::cout << "\nSorry,the car is alreay locked\n";
    } else if(!is_locked && carLocked) { 
      carLocked = false;
      std::cout << "\nThe car is unlocked\n";
    } else {
      std::cout << "\nSorry, the car is already unlocked\n";
    }

  }

  void status(void) {
    std::string engineStatus = "Off";
    std::string lockStatus = "Unlocked";

    if(engineOn){
      engineStatus = "On";
    }

    if(carLocked) {
      lockStatus = "locked";
    }
    std::cout <<"\nCar Status: color: " << carColour << " , make: " << carMake << " , engine : " << engineStatus << " , " << lockStatus;
  }
  
};
void carClass(void) {
  std::string options;
  int option = -1; 

  Car newCar("Pink","Ford"); 

  do {
    newCar.status(); //Display status 
    std::cout << "\n1. Turn Engine On";
    std::cout << "\n2. Turn Engine Off";
    std::cout << "\n3. Lock Car";
    std::cout << "\n4. Unlock Car";
    std::cout << "\nPlease selet an option(or 0 to finish): ";
    std::cin >> options; 

    option = stoi(options);

    switch(option) {
      case 1: newCar.enginesOn(); break;
      case 2: newCar.engineOff(); break;
      case 3: newCar.locked(true); break;
      case 4: newCar.locked(false); break;
      default:
			std::cout << "\n'" << option << "' is an invalid option  - selected.";
			break;
    }

  } while (option != 0);
}

class AreaOfShape {
  public:
  AreaOfShape(){
    std::cout << "\nCreated.";
  }
  ~AreaOfShape(){
    std::cout << "\nDestroyed";
  }

  float size(float w, float l) {//This method calculate the are of a rectangle
    return w * l;
  }

  float size(float b,float h,float a) {
    float result = 0.5 * (a * b);
    return result;
  }

  float size(float a) {// This method calculate the are of a square
    return a * a;
  }  
};

void areaOf(void) {
  AreaOfShape area;
  
	std::cout << "\nArea of Square (a = 6.1) : " << area.size(10.67);  
  std::cout << "\nArea of Rectangle (w = 14, l = 3.5) : " << area.size(14,3.5);
  cout<<"\nArea of triangle (b = 12, h = 2): "<<area.size(12,2)<<endl;
}