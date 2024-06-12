#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main{
srand((int)time(NULL));
  int random_number = 1+(rand()%1000);
  int your_number =0;
  do{
    cout<<"Guess a number(1-1000): ";
    cin>>your_number;
     if (your_number > random_number)
      cout << "Guess lower!" << endl;
    else if (your_number < random_number)
      cout << "Guess higher!" << endl;
    else
      cout << "You won!" << endl;
  } while (guess!= random_number);

  return 0;
}
