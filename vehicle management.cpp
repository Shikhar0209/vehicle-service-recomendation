#include<iostream>
using namespace std;
int main()
{
	
	    char c;
	    char m;
	    char s;
		cout<<"Welcome To Vehicle Service Management System "<<endl;
		cout<<"Please follow the instruction carefully"<<endl;
		cout<<"Press v to start your service management system for your happy running vehicle"<<endl;
		cout<<"Press a,b,c,d to select bike model"<<endl;
		cout<<"you can choose both major and minor service"<<endl;
		cout<<"Please press 1 to select minor service"<<endl;
		cout<<"Please press 2 to select najor service"<<endl;
		cout<<"you will get your final bill after selecting service option"<<endl;
		start:
		cin>>c;		
		if(c=='v'|| c=='V' )
		{
			model:
			cout<<"Please Select the bike model"<<endl;
			cout<<"(a)Splendor+\n (b) Super Splendor \n (c) Passion \n (d) Glamour"<<endl;
			cin>>m;
			if(m=='a'|| m=='A')
			{
				cout<<"please seelect (1))minor service or (2)major service"<<endl;
				cin>>s;
				if(s=='1')
				{
				   	cout<<"(1)Minor Service :\n Parts which sre replaced are:\n Air filter(Rs.200)\n Engine Oil(Rs.320)\n Body Cleaning(Rs.200)\n Engine Cleaning(Rs.200)\n Labour Charge(Rs 370)"<<endl;
 				   	cout<<"According to vehicle service management and recomendation system"<<endl;
				   	cout<<"you have to replace/change all the listed item "<<endl;
					cout<<"Total Bill = Rs.1290"<<endl;
			    }
			    else if(s=='2')
				{
					cout<<"(2) Major service : \n Parts which are replaced are :\n Air Finter(Rs 200)\n Engine Oil(Rs.320)\n Body Cleaning(Rs.200)\n Engine Cleaning(Rs.200)\n Labour Charge(Rs 370)\n Cluth plate(Rs 310)\n Engine exhaust cheakup(Rs 300)\n Chain Cleanup(Rs 100) \n Front and Back Break pads(Rs.400)"<<endl;
					cout<<"According to vehicle service management and recomendation system"<<endl;
					cout<<"you have to replace/change all the listed item "<<endl;
					cout<<"Total Bill = Rs.2400"<<endl;
			    
				}
				else
				{
					cout<<"wrong value entered"<<endl;
				}
							  
				
			}
			else if(m=='b'||m=='B')
			{
				cout<<"please seelect (1))minor service or (2)major service"<<endl;
				cin>>s;
				if(s=='1')
				{
					cout<<"(1)Minor Service :\n Parts which sre replaced are:\n Air filter(Rs.220)\n Engine Oil(Rs.320)\n Body Cleaning(Rs.250)\n Engine Cleaning(Rs.250)\n Labour Charge(Rs 370)"<<endl;
 				   	cout<<"According to vehicle service management and recomendation system"<<endl;
				   	cout<<"you have to replace/change all the listed item "<<endl;
					cout<<"Total Bill = Rs.1410"<<endl;	
				}
				else if(s='2')
				{
					
					cout<<"(2) Major service : \n Parts which are replaced are :\n Air Finter(Rs 220)\n Engine Oil(Rs.320)\n Body Cleaning(Rs.250)\n Engine Cleaning(Rs.250)\n Labour Charge(Rs 370)\n Cluth plate(Rs 370)\n Engine exhaust cheakup(Rs 350)\n Chain Cleanup(Rs 100) \n Front Nad Back Break pads(Rs.500)"<<endl;
					cout<<"According to vehicle service management and recomendation system"<<endl;
					cout<<"you have to replace/change all the listed item "<<endl;
					cout<<"Total Bill = Rs.2400"<<endl;
					
				}
				else
				{
					cout<<"wrong value entered"<<endl;
				}
			}
			else if(m=='c'|| m=='C')
			{
				cout<<"please seelect (1))minor service or (2)major service"<<endl;
				cin>>s;
				if(s=='1')
				{
					cout<<"(1)Minor Service :\n Parts which sre replaced are:\n Air filter(Rs.230)\n Engine Oil(Rs.330)\n Body Cleaning(Rs.260)\n Engine Cleaning(Rs.260)\n Labour Charge(Rs 380)"<<endl;
 				   	cout<<"According to vehicle service management and recomendation system"<<endl;
				   	cout<<"you have to replace/change all the listed item "<<endl;
					cout<<"Total Bill = Rs.1460"<<endl;	
				}
				else if(s=='2')
				{
					
					cout<<"(2) Major service : \n Parts which are replaced are :\n Air Finter(Rs 230)\n Engine Oil(Rs.330)\n Body Cleaning(Rs.260)\n Engine Cleaning(Rs.260)\n Labour Charge(Rs 380)\n Cluth plate(Rs 380)\n Engine exhaust cheakup(Rs 360)\n Chain Cleanup(Rs 150) \n Front Nad Back Break pads(Rs.600)"<<endl;
					cout<<"According to vehicle service management and recomendation system"<<endl;
					cout<<"you have to replace/change all the listed item "<<endl;
					cout<<"Total Bill = Rs.2570"<<endl;
					
				}
				else
				{
					cout<<"wrong value entered"<<endl;
				}
				
			}
			else if(m=='d'||m=='D')
			{
				cout<<"please seelect (1))minor service or (2)major service"<<endl;
				cin>>s;
				if(s=='1')
				{
					cout<<"(1)Minor Service :\n Parts which sre replaced are:\n Air filter(Rs.240)\n Engine Oil(Rs.340)\n Body Cleaning(Rs.270)\n Engine Cleaning(Rs.270)\n Labour Charge(Rs 390)"<<endl;
 				   	cout<<"According to vehicle service management and recomendation system"<<endl;
				   	cout<<"you have to replace/change all the listed item "<<endl;
					cout<<"Total Bill = Rs.1510"<<endl;	
				}
				else if(s=='2')
				{
					
					cout<<"(2) Major service : \n Parts which are replaced are :\n Air Finter(Rs 240)\n Engine Oil(Rs.340)\n Body Cleaning(Rs.270)\n Engine Cleaning(Rs.270)\n Labour Charge(Rs 390)\n Cluth plate(Rs 390)\n Engine exhaust cheakup(Rs 370)\n Chain Cleanup(Rs 160) \n Front Nad Back Break pads(Rs.700)"<<endl;
					cout<<"According to vehicle service management and recomendation system"<<endl;
					cout<<"you have to replace/change all the listed item "<<endl;
					cout<<"Total Bill = Rs.2750"<<endl;
					
				}
				else
				{
					cout<<"wrong value entered"<<endl;
				}
			}
			else
			{
				cout<<"you have entered a wrong value please press correct option"<<endl;
				goto model;
			}
			
			
			
		}
		else{
			cout<<"you have enter the wrong value please press v!"<<endl;
			goto start;
		}
	

}

