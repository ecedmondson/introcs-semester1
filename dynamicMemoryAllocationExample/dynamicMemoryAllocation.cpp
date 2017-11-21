/******************************************************************************

The point of this code is to test dynamic memory allocation. It creates three 
random numbers between 1 and 15 that are unknown to the programmer before compile
time and then it also dynamically allocated three arrays of with the sizes of the
random numbers. A void function called checkLength assigns the int value 7 (my
favorite number) to each data member of the array, and thus the number of 7s 
in the array is the length of the array and also the random number created with 
rand(). The point of this script is to show how dynamic memory allocation can be 
used when a programmer does not know ahead of time the size or length of an array. 

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std; 

void checkLength(int *array, int size)
{
    for(int count = 0; count < size; count++)
    {
        array[count] = 7;
    }
}

int main()
{
    int v1 = rand() % 15 + 1; 
    int v2 = rand() % 15 + 1;
    int v3 = rand() % 15 + 1;
    
    int *array1 = new int[v1];
    int *array2 = new int[v2];
    int *array3 = new int[v3];
    checkLength(array1, v1);
    checkLength(array2, v2);
    checkLength(array3, v3);
    cout << "In order I am outputting array1, array2, and array3. Let's check the lengths!" << endl;
    for (int count = 0; count < v1; count++)
        cout << array1[count];
    cout << endl;
    cout << "v1 is " << v1; 
    cout << endl; 
    for (int count = 0; count < v2; count++)
        cout << array2[count];
    cout << endl;
    cout << "v2 is " << v2;
    cout << endl; 
    for (int count = 0; count < v3; count++)
        cout << array3[count];
    cout << endl;
    cout << "v3 is " << v3;
  
    delete [] array1;
    delete [] array2;
    delete [] array3;
    array1 = nullptr;
    array2 = nullptr;
    array3 = nullptr; 
    
}
