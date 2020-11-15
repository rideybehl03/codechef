#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int withdraw; //x is an integer
	float bal; //y is a decimal
	cin>>withdraw>>bal;
	if(withdraw%5==0  && withdraw+0.5<=bal)//if true transaction is successful
	{
	    float balance=bal-withdraw-0.5;
	    cout<<setprecision(2)<<fixed<<balance;
	}
	else{cout<<setprecision(2)<<fixed<<bal;}//unsuccessful transaction
}
