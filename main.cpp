#include <iostream>

using namespace std;

int main() {
    const float e = 0.000001;
    for(int i=1; i<100000; i++ )
    {
        double s1, olds;
        double fp = 1, fpp = 2, f, fact = 2, n = 3;
        
        do
        {
            if (fp==1)
            {
                s1 = fp/fact;
            } else
            {
                s1 = olds + fp/fact;   
            }
            
            olds = s1;
            f = fpp;
            fpp = fp + fpp;
            fp = f;
          
            f = fpp;
            fpp = fp + fpp;
            fp = f;
          
            fact = fact * n;
            n++;
          
            fact = fact * n;
            n++; 
        }
        while ( e);
    }
}