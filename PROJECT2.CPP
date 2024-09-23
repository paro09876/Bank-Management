
		       //Bank Management System

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class bank
{
  int a_no,amt,dep,with,i;
  int choice;
  int value,account;
  int amount,address,contact_no;
   char name[100],type_acc[10];

   public:
      void input()
      {
       cout<<"Enter the account no.";
       cin>>a_no;
       cout<<"Enter the name:";
       cin>>name;
       cout<<"Enter the type of account:";
       cin>>type_acc;
       cout<<"Enter the initial value:";
       cin>>value;
      }
      void deposit();
      void withdraw();
      void display();
      void show();
      void transfer();
};
void bank::show()
{
  for(int i=0; i<amount; i++)
  {
    cout<<"Data of person:"<<i+1<<endl;
    cout<<"Name:";
    cin>>name;
    cout<<"Address:";
    cin>>address;
    cout<<"Contact Number:";
    cin>>contact_no;
  }
}
void bank::display()
{
    cout<<"Enter the deposit value:"<<endl;
    cout<<"The balance is:"<<amt<<endl;
}
void bank::deposit()
{
    cout<<"Enter the deposit value:"<<endl;
    cin>>dep;
    amt=amt+dep;
}
void bank::withdraw()
{
    cout<<"Enter the withdraw amount:";
      cin>>with;
      amt=amt-with;

} /*
void bank::transfer(bank acc)
{
  char to[100];
  long amount;
  cout<<"Enter recipientr username:";
  cin>>to;
  cout<<"Enter the amount to transfer:";
  cin>>amount;
  if(acc.balance>=amount)
  {
    acc.balance-=amount;
    cout<<"Transfer successful"<<endl;
  }
  else
  {
     cout<<"Insufficient balance"<<endl;
  }
  }
 */

void main()
{
    clrscr();
    int choice;
    bank b;
    do
    {
       cout<<"1. Input:"<<endl;
       cout<<"2. Deposit:"<<endl;
       cout<<"3. Withdraw:"<<endl;
       cout<<"4. Display:"<<endl;
       cout<<"5. Show:"<<endl;
       cout<<"6. Transfer:"<<endl;
       cout<<"7. Exit:"<<endl;
       cout<<"Enter Your own Choice:"<<endl;
       cin>>choice;
    switch(choice)
    {
    case 1:
	  b.input();
	  break;

    case 2:
	  b.deposit();
	  break;

    case 3:
	  b.withdraw();
	  break;

    case 4:
	 b.display();
	 break;

    case 5:
	 b.show();
	 break;

    case 6:
     //	 b.transfer();
	 break;

    default:
	 cout<<"Invalid Choice";
	 break;
    }
  } while(choice!=6);

getch();
}

