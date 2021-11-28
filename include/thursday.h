#include<thread>

//times are declared globally in seconds
const int t1 = 5;
const int t2 = 10;

void sleepNow(int seconds = 10){
  std::this_thread::sleep_for(std::chrono::milliseconds(seconds * 1000));
}

void sleepTime(int seconds = 10) {
  cout << "\nStarting sleep timer\n";
  sleepNow(seconds); 
  cout << "sleep - thread: " << this_thread::get_id() << " end\n";
}  

void sleepTimer(void) {
 sleepTime(); 
}


void timer1(){
  std::cout << "timer 1 - thread: " << std::this_thread::get_id() << " started\n";
  std::this_thread::sleep_for(std::chrono::seconds(t1)); 
  std::cout << "timer 1 - thread: " << std::this_thread::get_id() << " ended\n";
}

void timer2(){
  std::cout << "timer 2 - thread: " << std::this_thread::get_id() << " started\n";
  std::this_thread::sleep_for(std::chrono::seconds(t2));
  std::cout << "timer 2 - thread: " << std::this_thread::get_id() << " ended\n";
}

int joinThreads(void) {
  
  std::cout << "Main thread: " << this_thread::get_id() << " started"<<endl; 
  thread thread1(timer1); 
  thread thread2(timer2); 

  thread1.join();
  thread2.join(); 

  std::cout << "Main thread: " << this_thread::get_id() << " ended"<<endl; 
};

int detachThreads(void) {
  std::cout << "\nDetach Threads"<<endl;
  std::cout << "Main thread: " << this_thread::get_id() << " started"<<endl;

  thread thread1(timer1); 
  thread thread2(timer2); 
  thread2.detach(); 
  sleepTime(11);

  cout << "Main thread: " << this_thread::get_id() << " ended"<<endl;

}

void joinDetachThreads(void) {
joinThreads();
detachThreads();
}