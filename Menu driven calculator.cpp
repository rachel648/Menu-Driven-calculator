#include <iostream>

using namespace std;

int main() {
	char yes ='y';

	int k,j;
	int sum;
	int sub;
	int mul;
	int div;
	int mod;
	cout<<"Type a number:\n";
	cin>>k;
	cout<<"Type another number:\n";
	cin>>j;

	/*switch(type)
	{
	    case 1:
	    cout<< "Addition"<<sum<<"\n";
	    break;
	    case 2:
	    cout<< "subtraction"<<sub<<"\n";
	     break;
	    case 3:
	    cout<<"multiplication"<<mul<<"\n";
	     break;
	    case 4:
	    cout<<"division"<<div<<"\n";
	     break;
	    case 5:
	    cout<< "modulus"<<mod<<"\n";
	     break;
	}*/

	sum=k+j;

	sub=k-j;

	mul=k*j;

	div=k/j;

	mod=k%j;

	char inp;
	do{
		
	cout<<"What operation do you want to choose? \n";
	cout<<"1.Addition\n";
	cout<<"2.Subtraction\n";
	cout<<"2.Multiplication\n";
	cout<<"4.Division\n";
	cout<<"5.Modulus\n";
	int input;
	cin>>input;
	
	if(input==1)
	{
       cout<< "Addition ="<<sum<<"\n";
   }
	   else if (input==2)
	   {
    cout<< "subtraction ="<<sub<<"\n";
}
    else if(input==3)
    {
    cout<<"multiplication ="<<mul<<"\n";
}
    else if (input==4)
    {
    cout<<"division ="<<div<<"\n";
}
    else if(input==5)
    {
    cout<< "modulus ="<<mod<<"\n";
}
    else 
    {
    cout<<"INVALID STATEMENT";
    break;
}
    
    cout<<"Want to run calculator again? (y/n)";
    cin>>inp;
	
}while(inp == yes);

	return 0;
}


