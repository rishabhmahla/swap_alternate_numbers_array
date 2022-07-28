#include <iostream>
//PROGRAM TO REVERSE ALTERNATE NUMBERS IN AN ARRAY

using namespace std;

int swapalt(int arr[],int size){
	
		for(int i=0;i<size;i+=2){
		if(i+1<size){
		   swap(arr[i],arr[i+1]);
		}
	}	
}
int printalt(int arr[],int size){
	cout<<"The alternate reverse of the given array is [ ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"]";
	cout<<endl;
}

int main()
{
 int size;
 cout<<"Enter the size of the array : ";
 cin>>size;
 int array[size];
 for(int i=0;i<size;i++){
 	cout<<"Enter the element "<<i+1<<endl;
 	cin>>array[i];
 }
 
 swapalt(array,size);
 printalt(array,size);
 
 return 0;
}


