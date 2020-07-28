#include<iostream>
#include<list>
#define endl '\n'
#define ls list<int> 
#define iter ls::iterator 

using namespace std ;
/*
 push_back()   O(1)
 push_front()   O(1)
 size()   O(1)
 front() => Gives first element    O(1)  
 back() => Gives last element  O(1)
 begin()  => gives an iterator pointing to the first element   O(1)
 end() => gives an iterator pointing to the theoretical last element(after the last element ) O(1)
 empty() => O(1)
 insert(iter , elem) => inserts a new element 'elem' before the specified position pointed by iterator 'iter' O(n)
 pop_front() => O(1) 
 pop_back()  => O(1) 
 erase(iterStart,iterEnd(optional)) =>removes all elements between iterStart(including) and iterEnd(excluding) O(n)
 remove(elem) => removes all occurences of elem from the list   O(n)


*/
void print (ls & lis)
{
    for(iter it = lis.begin() ; it != lis.end() ; ++it ) {
        cout << (*it) << " " ; 
    }
    cout << endl ; 
}

int main () {
    ls linkedlist ; 
    linkedlist.push_back(98) ; 
    linkedlist.push_back(7) ; 
    linkedlist.push_front(22) ; 
    linkedlist.push_front(9) ; 
    print(linkedlist ) ; 
    cout << "Size of the list : " << linkedlist.size() << endl ; 
    iter it = linkedlist.begin() ; // pointing to the first element (9)
    it++ ; //points to the (22)
    it++ ; //points to the (98)
    cout << "Third element : " << (*it) << endl ; 

    linkedlist.insert(it , 19) ; // inserting 19 before 98 , rest of the element will be pushed by 1 position
    print(linkedlist) ; 

    it++ ; // pointing to the  (7)
    linkedlist.insert(it , 1) ; // inserting 1 before 7 
    print(linkedlist) ; 

    it-- ; it-- ; it-- ;  // pointing to (19)

    linkedlist.erase(linkedlist.begin() , it) ; // removing elements between 9(including ) and 19 (excluding )
    print(linkedlist) ; 
    linkedlist.erase(linkedlist.begin()) ; 
    print(linkedlist) ; 

    cout << "Popping the last element : " << endl ; 
    linkedlist.pop_back() ;
    print(linkedlist) ; 
    cout << "Popping the first element : " << endl ; 
    linkedlist.pop_front() ; 
    print(linkedlist) ; 

    linkedlist.push_back(10) ; 
    linkedlist.push_front(10) ; 
    cout << "After pushing elements both at front and back " << endl ;
    print(linkedlist) ; 

    int front = linkedlist.front() ; 
    int back = linkedlist.back() ; 
    cout << "First element : " << front << " , Last element : " << back << endl ; 

    cout << "Removing all occurences of 10 from the list " << endl ; 
    linkedlist.remove(10) ; 
    print(linkedlist) ; 

    return 0 ; 
}