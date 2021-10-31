#include<iostream>

using namespace std;
int main()
{
  int i,j, side, gap;
  //cout << "Enter the side length: " << endl;
  cin>> side;

  gap = 2*side;
  for(i = 0; i < side; i++)
  {
	  for(j=0; j<gap-2; j++)
	  cout<< " ";
	  gap-=2;
	  for(j=0; j<(2*i + 1); j++)
	  cout << "*"<< " ";
	  cout << endl;

  }
  gap = 2;
  for(i = 0; i<(side-1);i++)
  {
	  for(j=0; j<gap; j++)
	  cout<< " ";
	  gap+=2;
	  for(j =0 ; j<(2*(side- 1 - i)-1); j++)
	  cout<< "*"<< " ";
	  cout<< endl;
  }
  cout<< endl;
  return 0;
}
