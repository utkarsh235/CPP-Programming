using namespace std; 
#include<iostream>   
int main()    
{   int i=4, j=-1, k=0, w, x, y, z;   
w = i || j || k;  
 x = i && j && k;   
 y = i || j &&k; 
   z = i && j || k; 
    cout<<"w="<<w<<" x="<<x; 
	  cout<<" y="<<y<<" z="<<z;  
	   return 0;  }
