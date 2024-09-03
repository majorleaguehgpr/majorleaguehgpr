//============================================================================
// Name        : chestpresspr.cpp
// Author      : Hans Glennford P. Romero
// Version     : September 3, 2024
// Copyright   : Copyright Hans Glennford P. Romero - 2024
// Description : Returning the highest chest press personal record (PR)
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int arr[100],values, weights,largest = 0;
	cout << "How many bench press PR values do you want to put in?: " << endl;
	cin >> values;
	cout << "Enter your bench press weights in pounds: " << endl;
	for(weights = 0; weights < values; weights++)
	{
		cin>>arr[weights];
	}
	largest=arr[0];
	       for(int weights = 0; weights < values; weights++){

	          if(arr[weights] > largest){
	              largest =arr[weights];
	          }
	    }
			cout << "Your highest bench press PR so far is: " << largest << " pounds" << endl;

	return 0;
}
