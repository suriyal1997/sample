	#include<iostream.h>
	 #include<conio.h>
	 #include<string.h>
	 class customer
	 {
	 private:
	 int price[100];
	 int n;
	 char name[10];
	 public:

	 void getdetails(char name[])          //FUNCTION OVERLOADING AND PASSING ARRAY
	 {
	 cout<<"The customer's name is "<<endl;
	 cout<<name<<endl;
	 }
	 void getdetails(int &phone)           //CALL BY REFERENCE
	 {
	 cout<<"The phone number is"<<endl;
	 cout<<phone<<endl;
	 }

	 void getdetails(char city[100],char nationality[100],char dateoforder[100])            //CALL BY VALUE
	 {
	 cout<<"The city is"<<endl;
	 cout<<city<<endl;
	 cout<<"The nationality is "<<endl;
	 cout<<nationality<<endl;
	 cout<<"The date of Order"<<endl;
	 cout<<dateoforder<<endl;
	 }
	 customer()
	 {
	 n=100;
	 }

	 void getprice()
	 {
	 int i,j;char item[100];
	  cout<<"Enter the number of items"<<endl;
	  cin>>n;
	  cout<<"Enter the items"<<endl;
	  for(j=0;j<n;j++)
	   cin>>item;

	 cout<<"Enter the price"<<endl;
	 for(i=0;i<n;i++)
	 {
	 cin>>price[i];
	 }
	 }
	 void checkprice()
	 {
	 int i;
	 getprice();
	 for(i=0;i<n;i++)
	 {
	 if(price[i]<=1000)
	 cout<<"2 Days for delivery"<<endl;
	 else if(price[i]>1000&&price[i]<=5000)
	 cout<<"4 Days for delivery"<<endl;
	 else
	 cout<<"6 Days for delivery"<<endl;
	 }
	 }
	 void availquantity()
	 {
	 if(n<=2)
	 cout<<"15 Quantities are available"<<endl;
	 else if(n>2&&n<6)
	 cout<<"10 Quantities are available"<<endl;
	 else
	 cout<<"No quantity"<<endl;
	 }
	 };
	 void main()
	 {
	 customer c;
	 int ph;int no,i;
	 clrscr();
	 char ch[10],n[10],d[10];
	 cout<<"Enter the name"<<endl;
	 cin>>n;
	c.getdetails(n);
	 cout<<"Enter phone number"<<endl;
	 cin>>ph;
	 c.getdetails(ph);
	 cout<<"Enter City,Nationality,Date of Order"<<endl;
	 cin>>ch>>n>>d;
	 c.getdetails(ch,n,d);
	  c.getprice();
	 c.checkprice();
	 c.availquantity();
	 cout<<"------------------------------------"<<endl;
	 cout<<"Thanks for purchasing in our company"<<endl;
	 cout<<"------------------------------------"<<endl;
	 getch();
	 }
