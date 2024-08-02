#include <iostream>
using namespace std;
int main ()
{
    int amount;
    int n500=0,n200=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
    
    cout<<"enter the anount";
    cin>>amount;
    
    if (amount>=500)
    {
    	n500 = amount/500;
    	amount -= n500*500;
    	
    	if (amount>=200)
    	{
    		n200 = amount/200;
    		amount -= n200*200;
    		
    		if(amount>=100)
    		{
    			n100 = amount/100;
    			amount -= n100*100;
    			
    			if (amount>50)
    			{
    				n50 = amount/50;
    				amount -= n50*50;
    				
    				if(amount>20)
    				{
    					n20 = amount/20;
    					amount -= n20*20;
    					
    					if(amount>10)
    					{
    						n10 = amount/10;
    						amount -= n10*10;
    						
    						if(amount>5)
    						{
    							n5 = amount/5;
    							amount -=n5*5;
    							
    							if(amount>2)
    							{
    								n2 = amount/2;
    								amount -= n2*2;
    								
    								if(amount>1)
    								{
    									n1 = amount;
    									
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout<<"500 : "<<n500<<endl;
	cout<<"200 : "<<n200<<endl;
	cout<<"100 : "<<n100<<endl;
	cout<<"50  : "<<n50<<endl;
	cout<<"20  : "<<n20<<endl;
	cout<<"10 :  "<<n10<<endl;
	cout<<" 5 :  "<<n5<<endl;
	cout<<" 2 :  " <<n2<<endl;
	cout<<" 1 :  "<<n1<<endl;
  


	return 0;
}