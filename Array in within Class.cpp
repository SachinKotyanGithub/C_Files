#include<iostream>
using namespace std;
const int m = 50;

class ITEMS
{
	int itemcode[m];
	float itemprice[m];
	int count;
	
	public:
		void CNT(void)
		{
			count = 0;
		}
		
		void getitem(void);
		void displaysum(void);
		void removeitem(void);
		void displayitems(void);
};

void ITEMS::getitem(void)
{
	cout<<"Enter the itemcode :";
	cin>> itemcode[count];
	
	cout<<"Enter the item cost :";
	cin>> itemprice[count];
	count++;
}

void ITEMS :: displaysum(void)
{
	float sum = 0;
	for(int i=0;i<count;i++)
	{
		sum = sum + itemprice[i];
	}
	cout<< "\nTotal Cost :"<<sum<<"\n";
}

void ITEMS :: removeitem(void)
{
	int a;
	cout<<"Enter the itemcode :";
	cin>>a;
	for(int i=0;i<count;i++)
	{
		if(itemcode[i]==a)
		{
			itemprice[i]=0;	
		}
		
	}
	
}

void ITEMS :: displayitems(void)
{
	cout<<"\nItemcode     Itemcost\n";
	for(int i=0; i<count; i++)
	{
		cout<<"\n"<<itemcode[i];
		cout<<"     "<<itemprice[i];
	}
	cout<<"\n";
}

int main()
{
	ITEMS Order;
	Order.CNT();
	int x;
	do
	{
		cout<<"\nYou can do following activity"<<" Enter appropriate number\n";
		cout<<"\n1 : Add an item";
		cout<<"\n2 : Display total cost";
		cout<<"\n3 : Delete an item";
		cout<<"\n4 : Display all items";
		cout<<"\n5 : Quit";
		cout<<"\n\n What is your Option? : ";
		
		cin>> x;
		
		switch(x)
		{
			case 1 : Order.getitem(); break;
			case 2 : Order.displaysum(); break;
			case 3 : Order.removeitem(); break;
			case 4 : Order.displayitems(); break;
			case 5 : break;
			default : cout<<"Error in input ; try again \n";		
		}
	} while(x!=5);
	return 0;
}

