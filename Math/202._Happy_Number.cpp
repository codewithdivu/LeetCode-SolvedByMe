class Solution {
public:
    bool isHappy(int n) {
        
        if(n==1  || !n)
           return true;   
        int p=n;
        int d;
        int x;
        

        
        while(p/10 && n>9)
        {
              x=0;
            
            while(p)
            {
                d=p%10;
                x=x+d*d;
                p=p/10;
            }
            p=x;
        }
        
        
         do{
            x=0;
            
            while(p)
            {
                d=p%10;
                x=x+d*d;
                p=p/10;
            }
            p=x;
           
        }while( p/10);
        
          if(x==1)
                return true;
        return  false;
    }
};