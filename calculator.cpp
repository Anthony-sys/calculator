#include <iostream>
#include <cmath>
using namespace std ;
 int main () {
 	cout << "                              ********C-calculator********" << endl ;
 	cout << "                               .............................."  << endl ;
 	cout << "                                 Written By Nwachi Anthony" << endl  ;
 	cout << "                               .............................." << endl ;
 	
 	
 	//intialize the operation
 	char operations ;
 	int A ;
 	int B ;
 	
 	 //  take input
 	 cout << "enter an operation:" << operations << endl ;
 	 cout  << "1. addition(+)" << endl ;
 	 cout << "2. subtraction(-)" << endl ;
 	 cout << "3. division(/)" << endl ;
 	 cout << "4. multiplication(*)" << endl ;
 	 cout << "5. squareroot" << endl ;
 	 cin >> operations ;
 	 
 	 
 	 //perform operations
 	  double result ;
 	  switch (operations) {
 	  	case '1':
 	  	cout << "enter a number" << A << B << endl ;
 	  	cin >> A >> B ;
 	  	result = A + B ;
 	  	cout << "your answer is: " << result ;
 	  	break ;
 	  	
 	      case '2':
 	      cout << "enter a number" << A << B << endl ;
 	      cin >> A >> B ;
 	      result = A - B ;
 	      cout << "your answer is:" << result ;
 	      break ;
 	      
 	      
 	      case '3':
 	      if (  B != 0) {
 	      cout << "enter a number" << A << B << endl ;
 	      cin >> A >> B ;
 	      result = A / B ;
 	      cout << "your answer is:" << result ;
 	      }
 	      else
 	      cout << "an error has occured!!!" ;
 	      return 1 ;
 	      break ;
 	      
 	      
 	      case '4':
 	      cout << "enter a number" << A << B << endl ;
 	      cin >> A >> B ;
 	      result = A * B ;
 	      break ;
 	      
 	      
 	      case '5':
 	      cout << "enter a number" << A << endl ;
 	      cin >> A ;
 	      result = sqrt(A) ;
 	      cout << "your answer is :"  << result ;
 	      break ;
 	      return 0;
 	  }
 }
