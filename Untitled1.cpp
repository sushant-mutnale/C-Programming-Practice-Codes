#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	string a[100]={"."," ."," . ","CAN ","I ","SAY ","SOMETHING ","."," ."," ."};
	cout<<endl<<endl<<endl<<"                                      ";
	for(int x=0;x<11;x++)
	{
		cout<<a[x];
			usleep(400000);
	}
	 a:
	cout<<endl<<endl<<"                ";
	cout<<"YES / NO";
	 
	cout<<endl<<endl<<"                ";
	string b;
	cin>>b;
	
	if(b=="yes")
	{
		
	
	for(int l=0;l<1000;l++)           // creating I L U loop
	{
	
	system("cls");
	int i;                           // I design
		cout<<"                                          ";
		cout<<"   **************"<<endl;
		usleep(150000);
		cout<<"                                          ";
		cout<<"   **************"<<endl;
		usleep(150000);
		for(i=0;i<5;i++)
		{
			cout<<"                                           ";
			cout<<"        **"<<endl;
			usleep(150000);
		}
		
		cout<<"                                          ";
		cout<<"   **************"<<endl;
		usleep(150000);
		cout<<"                                          ";
		cout<<"   **************"<<endl<<endl;
		usleep(150000);
			                                        
	          
	
		
		                                   
		         
		
		
	int r,c;                            //heart logo
	for(r=0;r<3;r++)
	{
			cout<<"                                           ";
			
		for(c=1;c<18;c++)
		{
		
			if((c>=3-r && c<=6+r)||(c>=12-r && c<=15+r))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
		usleep(150000);
	}
	for(r=0;r<9;r++)
	{
		cout<<"                                           ";
		for(c=1;c<18;c++)
		{
			
			if(c>=r+1 && c<=17-r)
			{
				cout<<"*";
			}
			else
			cout<<" ";
		}
		cout<<endl;
		usleep(150000);
	}
	
	int j;                     // u design
	cout<<endl;
	for(j=0;j<8;j++)
	{
		cout<<"                                           ";
		cout<<"  **          ** "<<endl;
		usleep(150000);
	}
	cout<<"                                          ";
	cout<<"   **************"<<endl;
	usleep(150000);
	cout<<"                                          ";
	cout<<"   **************"<<endl;
	cout<<"                                          ";
	cout<<"     SANKET 55"<<endl;
	sleep(1);
	
}
}
    else if(b=="no")
    {
    	cout<<endl<<endl<<"                ";
    	cout<<"OKK...";
    	cout<<endl<<"                ";
    	cout<<"GET LOST THEN.";
    	sleep(100);
	}
	
	else
	{
		cout<<endl<<endl<<"                ";
    	cout<<"IDIOT PRESS YES OR NO";
    	sleep(5);
    	system("cls");
    	goto a;
	}
   
	return 0;
}