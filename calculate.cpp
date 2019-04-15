#include "calculate.hpp"
string calculateBullAndPgia(string g, string t)
{
    int bull=0,pgia=0;
    for(int i=0; i<g.size();i++)
    {
        if(g[i]==t[i])
            bull++;
        else if(g.find(t[i])<g.size())
            pgia++;
    }



    return bull+","+pgia;
}