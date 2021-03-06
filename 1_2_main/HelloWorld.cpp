#include <iostream>

int main ()
{
	// 1.3
	std::cout << "Hello World\n" << std::endl;
	/*
	Learned that cpp files with cpp headers must be compiled with g++ 		bla.cpp -o bla instead of gcc bla.cpp -o bla
	*/

	// 1.4-5
	int v1 = 0, v2 = 0;
	std::cout << "Enter two numbers to take the product of: \n" << std::endl;
	std::cin >> v1 >> v2;  // cin does not have a buffer to be flushed to the shell like cout.  std::endl is not needed.
	std::cout << "The product of " << v1;
	std::cout << " and " << v2;
	std::cout << " is " << v1*v2 << "\n" << std::endl;
	
	// 1.6
	/*
	std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;
  
  This fragment is not legal because the << operator on lines 2 and 3 is trying to refer back to an object, but no object is input on that line.
	*/
	
	return 0;
}

