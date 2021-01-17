#include<iostream>
using namespace std ;
class books
{
  int a,b,c,i,n,time,money_to_customer,price,key,value; 
  char name_book_FH[50],name_author_FH[50],name_customer[50],condition[50],name_book_SH[50],name_author_SH[50];
  double phone_number;
  
  public : 
     
     void getbook(); // for name of the book and its author 
     void details(); // for details of the customer 
     void sellbookcustomer(); // for selling book to customer 
     void sellbookretailer(); // for selling book to retailer
};
void books ::getbook()
{
  cout << "\nenter the name of the book you wanna purchase";
  cin.getline(name_book_FH,50);
  cout << "\nenter the name of the author of the book";
  cin.getline(name_author_FH,50);
  cout << "\n enter the price of the book";
  cin >> price ;
}
void books ::details()
{
  cout << "\nenter your name";
  cin.getline(name_customer,50);
  cout << "\nplease enter your phone number";
  cin >> phone_number;
}
void books ::sellbookretailer()
{
  cout << "\nenter the name of the book you wanna sell";
  cin.getline(name_book_SH,50);
  cout << "\nenter the name of the author of the book you wanna sell";
  cin.getline(name_author_SH,50);
  cout << "\nenter time in years you have used this book";
  cin >> time ;
  money_to_customer = (price*2)/(time*3);
  cout << "\nthe money that will be given to the customer will be " << money_to_customer;
}
void books ::sellbookcustomer()
{
  cout << "\nenter the condition of the book that is it first hand or second hand";
  cout << "\npress '1' for first hand and '2' for second hand";
  cin >> key;
  if(key == 1)
  {
    cout << "\nthe price that has to be payed by the customer is " << price; 
  }
  else if(key == 2)
  {
    cout << "\nthe price that has to be payed by the customer is" << price*(2/3);
  }
}
int main()
{
  int value;
  books b1;
  do{
  cout << "how can we help you :";
  cout << "\nenter 1 for purchasing the book";
  cout << "\nenter 2 for selling the book";
  cout << "\nenter 3 to exit the store";
  cin >> value;
  switch (value)
  {
  case /* constant-expression */1:
  b1.getbook();
  b1.details();
  b1.sellbookcustomer();
    /* code */
    break;
  case 2:
  b1.sellbookretailer();
  break;
  case 3:
  cout << "Thank you for visiting our store. May u have a nice day ahead";
  default:
  cout << "GET LOST FROM OUR STORE";
    exit;
  }
  }while(value != 3);
    return 0;
    
}

