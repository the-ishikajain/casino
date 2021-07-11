#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"                   ------------------------------------------------------------"<<endl;
	cout<<"                   ------------------------------------------------------------"<<endl;
	cout<<"                                        WELCOME TO CASINO                      "<<endl;
	cout<<"                   ------------------------------------------------------------"<<endl;
	cout<<"                   ------------------------------------------------------------"<<endl;
    float amt,bid_amt;
    int number,anumber;
    char ch;
    srand(time(0));
    cout<<"ENTER TOTAL AMOUNT YOU HAVE"<<endl;
    cin>>amt;
    do
    {
    cout<<"ENTER AMOUNT YOU WANT TO PLAY WITH"<<endl;
    cin>>bid_amt;
    while(bid_amt>amt)
    {
    	cout<<"YOU HAVE NOT THIS MUCH OF AMOUNT "<<endl;
    	cout<<"ENTER BID AMOUNT AGAIN";
    	cin>>bid_amt;
	}
    if(amt<=0)
    {
    cout<<"YOU HAVE 0 MONEY"<<endl;
	break;	
	}  
    cout<<"ENTER NUMBER YOU WANT TO BID ON BETWEEN 1 TO 10"<<endl;
    cin>>number;
    if(number<=1 && number>=10)
    {
    	cout<<"PLEASE ENTER VALID NUMBER BETWEEN 1 TO 10"<<endl;
        cin>>number;
	} 
	cout<<"YOUR NUMBER IS="<<number<<endl;
    anumber=(rand()%10)+ 1;
    cout<<"   ---------------------   "<<endl;
    cout<<"WINNING NUMBER IS = "<<anumber<<endl;
    cout<<"   ---------------------   "<<endl;
	if(number==anumber)  
	{
		 cout<<"   ---------------------   "<<endl;
		cout<<"HEY YOU WON THIS ROUND"<<endl;
		 cout<<"   ---------------------   "<<endl;
		amt=amt*10;
		cout<<"YOUR AMOUNT GET 10 TIMES"<<endl;
		cout<<"YOU HAVE "<<amt<<" RIGHT NOW"<<endl;
	}
	else
	{
		amt=amt-bid_amt;
		cout<<"OUCHHH....YOU LOSE......TRY AGAIN.."<<endl;
		cout<<"   ---------------------   "<<endl;
		cout<<"   ---------------------   "<<endl;
			cout<<"YOU HAVE "<<amt<<" AMOUNT RIGHT NOW"<<endl;
			cout<<"   ---------------------   "<<endl;
			cout<<"   ---------------------   "<<endl;
	}

    cout<<"DO YOU WANT TO CONTINUE IF YES THEN PRESS Y"<<endl;
    cin>>ch;
}while(ch=='y' || ch=='Y');

}
