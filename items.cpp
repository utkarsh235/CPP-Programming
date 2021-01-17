#include<iostream>
using namespace std;
const int m = 50;
class items 
{
	int itemprice[m];
	int itemcode[m];
    int count , i;
	public :
		void CNT()
		{
		 count = 0;
		}
		void getitem();
		void displaysum();
		void removeitem();
		void displayitem();
};
void items :: getitem()
{
	cout << "enter the price and the code of the item you want to purchase";
	cin >> itemprice[0]  >> itemcode[0];
	count++;
}
void items :: displaysum()
{
	int sum = 0;
	
	for (i = 0 ; i<=count ;i++)
	{
		if (count == 0)
	{
		cout << "you haven't made any transactions yet ";
	}
		
	sum = sum + itemprice[i];
    }
    cout << "the total amount of your transactions are " << sum;
}
void items :: removeitem()
{

	int a ;
	cout << "enter the code of the item you want to delete";
	cin >> a;
	for (i=0 ; i<=count ; i++)
	{
			if (count == 0)
     	{
		    cout << "there is no item in your list to be deleted";
		     break;
	    } 
		
		if (itemcode[i] == a)
		{
			itemprice[i] = 0;
		}
	}
}
void items :: displayitem()
{

	for (i=0 ; i<=count ; i++)
	{
			if (count == 0)
      	{
		cout << "there is no item in your list";
		break;
	    }  
		
		cout << "item" << i;
		cout << "\n" << "itemcode :" <<itemcode[i];
		cout << "\t itemprice :" << itemprice[i];
	}
}
int main ()
{
	items n;
	int c;
	n.CNT();
    do 
    {
	
        cout << "\nenter an appropriate option :\n";
        cout << 1. <<"to purchase an item\n";
        cout << 2. <<"to overall total of your transactions\n";
        cout << 3. <<"to remove an item\n";
        cout << 4. <<"to display all the items that you purchase\n";
        
        cin >> c;
        
        switch(c)
       {
		 
        case 1:
        {
        	n.getitem();
        	break;
		}
		case 2: 
		{
			n.displaysum();
			break;
		}
		case 3:
		{
		    n.removeitem();
			break;		
		}
		case 4:
			{
				n.displayitem();
				break;
			}
			case 5:
				{
					break;
				}
			  } 
    }while (c != 5);
return 0 ;
}





