#include <iostream>
#include <cmath>
#include <iomanip>
 using namespace std;
 
  int main () {
  	// calculating distance traveled by user = > Input = vehicle speed + deltaTime . with distance = speed * time .
  	float distance;
  	float vehicleSpeed;
  	int deltaTimeTraveled;
  	
  	 cout << "what is the speed of your vehicle ? " << endl;
  	 cin >> vehicleSpeed;
  	 
  	    while (vehicleSpeed <= 0){
  	    	cout << "Oops !! your car is stop, please enter a valid speed value " << endl;
  	    	cin >> vehicleSpeed;
		  }
		  
	 cout << "how many hours did you travel sir ? " << endl;
	 cin >> deltaTimeTraveled;
	 
	    while (deltaTimeTraveled < 1){
	    	cout << "please sir time must be greater than 0 " << endl;
	    	cin >> deltaTimeTraveled;
		}
		
		distance = vehicleSpeed * deltaTimeTraveled ;
		cout << "distance traveled by your car sir is " << distance << " Miles" << endl;
		
		 cout << "\nHours\t | Distance Traveled\n";
		 cout << "----------------------------\n";
		 
		   for (int i = 1 ; i <= deltaTimeTraveled ; i++){
		   	    
		   	    distance  = vehicleSpeed * i ;
		   	    cout << i << "\t\t" << distance << endl;
		   }
		   return 0;
	 
}
