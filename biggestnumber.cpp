//Juan Aguirre-Ayala
#include<iostream>

int main()
{
  //declare variables here
  int wn;
  int awn;
  int biggest;
   std::cout << "Please enter a whole number:\n";
  //get first input using std::cin>>
   std::cin >> wn;
   std::cout << "Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
   std::cin >> awn;
  //determine if first or second is bigger and store that in a third variable
  if (wn > awn)
   {
    biggest = wn;
   }
  else
   {
    biggest = awn;
   }
   
  std::cout << "Of those two numbers, the biggest is: " << biggest;
  //print out the variable representing the biggest number

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
