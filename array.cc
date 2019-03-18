/*
 *        File: arrays.cc
 *      Author: AJ Stein
 *        Date: March 18, 2019
 * Description: Array example, extra credit
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

void printArray(const int numbers[], int size);
void countEven(const int numbers[], int size);  // finds only even
void AddingArray(int numbers[], int size); // adds the array
int main(int argc, char const *argv[]) {

    int numbers[8] = {3, 5, 19, 6, 7, 6, 55};
    int size = 7;
    printArray(numbers, size);

    cout << numbers[0] << endl;

    countEven(numbers, size);
    AddingArray(numbers, size);
    return 0;
}// main

void printArray(const int numbers[], int size) {
    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }
}

/*
 * Extra Credit:
 *     Add the following two functions:
 *     1. A function called countEven that counts and returns the number
 *        of evan values in the array numbers.
 *     2. A function to find and return the total of all the values in the array numbers.
 *
 *     Test your functions by calling them in the main function. These functions should work for
 *     any array size.
 *
 * To submit the extra credit, you must create a public repository on GitHub and tag me (@nasseef) when
 * you are done.  This extra credit is due at 11:59 PM Monday 3/18/2019.
 *
 */

void countEven(const int numbers[], int size){
  int even = 0;
  cout << "\nExtra Credit Part One:" << endl;
  for(int i = 0; i < size; i++){
    if (numbers[i] % 2 == 0){
      cout << numbers[i] << endl;
    }
  }
}

void AddingArray(int numbers[], int size){
  int total = 0;
  for (int i = 0; i < size; ++i){
    total += numbers[i];
  }
  cout << "\nExtra Credit Part Two:This is the total of the array:" << total << endl;
}
