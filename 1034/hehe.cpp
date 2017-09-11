nclude <bits/stdc++.h>
using namespace std;

int main()
{

        long long maney;
            int i, j; 
                int sum{
                    3
                }; 
                    cin>>maney;
                        
                        for(i=1; i< maney/20; i++)
                                {

                                            if((maney - i*20)%10 == 0)
                                                        {

                                                                        sum++;
                                                                                
                                                        }
                                                        
                                                    if((maney - i*50)%10 == 0 && i<maney/50)
                                                                {

                                                                                sum++;
                                                                                        
                                                                }
                                                            //if((maney - i*50)%20 == 0 && i<maney/50)
                                                            {

                                                                        //  sum++;
                                                                        
                                                            }
                                                                
                                } 
                            for(i=1; i< (maney/50); i++)
                                    {

                                                //if(maney-50*i)
                                                /*
                                                        for(j=1; j<=(maney-50*i)/20; j++)
                                                                {

                                                                            if((maney- i*50 - j*20)<=0)
                                                                                            break;
                                                                                                        if((maney- i*50 - j*20) % 10 == 0)
                                                                                                                    {

                                                                                                                                    sum++;
                                                                                                                                                
                                                                                                                    }
                                                                                                                            
                                                                }
                                                                        */
                                                if((maney -50*i)/20 >0 )
    sum += (maney -50*i)/20;
                                                    
                                    }

    cout<<sum;
                                     
    return 0; 

}
