#include <iostream>
using namespace std;
int main() {
   int arr[4] = {1,2,3,4};
   int *ptr = &arr[2];
   cout<<"The value in the second index of the array is: "<< *ptr;
   return 0;
}


