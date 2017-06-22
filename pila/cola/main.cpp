#include <iostream>
#include <vector>

using namespace std;

template<class A> class Cola;

template<class A>
ostream& operator<<(ostream &output, const Cola<A> &c1)
{
    for(int i=0;i<c1.elements.size();i++)
    {
        output <<c1.elements[i] << endl;
    }
    return output;
}

template<class A>
class Cola
{
    friend ostream& operator<< <>(ostream &output, const Cola<A> &c1);
    vector<A> elements;
public:
    bool empty() const {return elements.empty();}
    void push(const A &element) {elements.push_back(element);}
    A pop()
    {
        A inicio=elements.begin();
        elements.erase(inicio);
        return inicio;
    }
};

int main()
{
    Cola<int> c1;
    c1.push(1);
    c1.push(2);
    c1.push(3);
    c1.push(4);
    c1.pop();
    cout << c1;
    return 0;
}
