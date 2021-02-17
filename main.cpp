#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> scal(vector <int> a, vector <int> b) 
{
    vector <int> tablica;
    
    for(!a.empty() && !b.empty())
	{
        if(a[a.size()-1]>b[b.size()-1]) 
		{
            tablica.push_back(a[a.size()-1]);
            a.pop_back();
        }else
		{
            tablica.push_back(b[b.size()-1]);
            b.pop_back();
        }
    }
    swap(tablica[i], tablica[tablica.size()-1-i]);
    return tablica;
}

vector <int> uporzadkuj(vector <int> tablica) 
{
    int k;
    vector <int> a;
    vector <int> b;

    if(tablica.size()==1)
    {
        return tablica;
    	k = tablica.size()/2;
    }
    	
    for(int i=0; i<k; i++)
    {
        a.push_back(tablica[i]);
    	uporzadkuj(a);
    }
    	
    for(int i=k; i<k*2; i++)
    {
    	b.push_back(tablica[i]);
    	uparzadkuj(b);
    	return scal(a, b);
    }
}

int main(int argc, char** argv) 
{
    vector <int> t {8, 4, 2, 1};
    uporzadkuj(t);

    for(int i=0; i<t.size(); i++)
    {
        cout<<t[i]<<" ";
    }
    return 0;
