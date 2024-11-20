#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

using namespace std;

vector< char > foo(std::list< Human >& people)
{
    vector<char> w1;
    list<Human>::reverse_iterator it;

    for(Human &e : people)
    {
        e.birthday();
    }
    
    for (it = people.rbegin(); it != people.rend(); it++)
    {
        if(it->isMonster()==true)
        {
            w1.push_back('n');
        }
        else
        {
            w1.push_back('y');
        }
    }

    return w1;
}
