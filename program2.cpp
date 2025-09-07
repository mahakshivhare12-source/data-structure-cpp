
// Write a program to create an array1 of 10 elements. Array1 has all the value input by the user.//
// Now create an array2 having all the value twice of the array1#include<iostream>
using namespace std;
int main()
{int ar[5] = {2,3,4,5,8};
	int sum = 0;
	for(int i = 0;i<5;i++)
		sum+=ar[i];
	cout<<sum<<endl;
	return 0;}