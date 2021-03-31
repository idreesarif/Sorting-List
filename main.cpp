#include <iostream>

using namespace std;

 

#define maxsize 100

 

int main(void)

{

int temp, i, j, n, list[maxsize];

 


// enter the list's size

cout<<"\nEnter your list size: ";



cin>>n;

//  data from user store in the list

for(i=0; i<n; i++)

{

cout<<"Enter list's element #"<<i<<"-->";

cin>>list[i];

}

 

// do the sorting...

for(i=0; i<n-1; i++)

for(j=i+1; j<n; j++)

if(list[i] > list[j])

{

// These three lines swap the elements

// list[i] and list[j].

temp = list[i];

list[i] = list[j];

list[j] = temp;

}

cout<<"\nSorted list, ascending: ";

for(i=0; i<n; i++)

cout<<" "<<list[i];

cout<<endl;

return 0;

}

 