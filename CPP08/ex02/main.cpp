#include "MutantStack.hpp"

int main()
{
    std::cout << "/ ***** MutantStack ***** /" << std::endl;

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top = " << mstack.top() << std::endl;

    mstack.pop();
    std::cout << "Size = " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << "Size = " << mstack.size() << std::endl;

    MutantStack<int>::iterator it_begin = mstack.begin();
    MutantStack<int>::iterator it_end = mstack.end();
    it_begin++; //checking the correct functioning of the iterator
    it_begin--;

    std::cout << "Numbers in container : " << std::endl;
    while (it_begin != it_end)
    {
        std::cout << *it_begin << std::endl;
        it_begin++;
    }
    std::stack<int> s(mstack);

    /* -------------------------------------------------------------------- */

    std::cout << std::endl;
    std::cout << "/ ***** List ***** /" << std::endl;

    std::list< int > lst;

    lst.push_back(5);
    lst.push_back(17);

    std::cout << "Top list = " << lst.back() << std::endl;

    lst.pop_back();
    std::cout << "List size = " << lst.size() << std::endl;

    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    std::cout << "List size = " << lst.size() << std::endl;

    std::list<int>::iterator lst_it = lst.begin();
    std::list<int>::iterator lst_ite = lst.end();
    it_begin++;
    it_begin--;

    std::cout << "Numbers in list : " << std::endl;
    while (lst_it != lst_ite)
    {
        std::cout << *lst_it << std::endl;
        ++lst_it;
    }
    std::list<int> l(lst);

    return 0;
}