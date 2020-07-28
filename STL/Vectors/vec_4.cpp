#include <iostream> 
#include <vector>
#include <algorithm> 

using namespace std ; 
class co_ord 
{
    public :
    double  x , y , z ; 
    co_ord (double x,double y ,double z ) :x(x) , y(y) , z (z)  {} 
    void print () 
    {   cout << "[" << x << " " <<  y  << " " << z << "]"  ; }
    co_ord ()   // Need to have default constructor
    {x = 0 ; y = 0 ; z = 0 ; }


} ; 
void info (vector  <co_ord> & points) {
    cout << "Size : " << points.size() << ", capacity : " << points.capacity() << endl ; 
}


void print (vector<co_ord> &points) {
    for (int i= 0 ; i < points.size() ; ++i) 
    {
        points[i].print() ; 
    } 
    cout << endl ; 
}

bool compare (co_ord & point_a , co_ord & point_b) // if point_a.y > point_b.y, it returns true 
                    //that means point_a will be placed before point_b , otherwise point_b comes before point_a 
{
    return point_a.y >  point_b.y ; 
}



int main () 
{
    // vector <co_ord> points(5) ;  // we needed default constructor in case we did this  

    vector<co_ord> points ; 
    points.reserve(5) ;   // size = 0 , capacity = 5 ,all co_ords have been initialized to 0,0,0 , but size is still 0 , so we can still call 
                            // push_back without increasing the capacity  
    info(points) ;  
    // points[2].print() ;      [0 0 0]

    points.emplace_back(4,3,2) ;   // directly constructs the element or object in place 
    print(points) ;  

    points.push_back({2,6,4.3}) ;   // can use this as well 
    print(points) ; 

    points.emplace(points.begin() + 1 , 3.2 , 2.3 , 6.6) ;   // emplace takes the first argument as iterator pointing to the index where
                  //  we want to insert
    print(points) ; 

    points.insert(points.begin() , {44 , 2.6 , 9.6} ) ;  // inserting at the beginning 
    print(points) ; 

    points.pop_back() ;  // removed the last element , doesn't return the removed element 

    auto front = points.front() ;    // returns the element at the front position
    auto back = points.back() ;    // returns the element at the last position
    front.print() ; 
    back.print() ; 
    cout << endl ; 

    points.erase(points.begin() + 1 ) ; // removes the element at index 1 
    info(points) ; 
    print(points) ; 
    points.emplace(points.begin() + 2 , 4.4 , 2.2 , 4.5) ;
    points.push_back({2.3 , 9.5 , 4.3}) ; 
    points.push_back({1.1 , 2, 1}) ;
    // print(points) ;     // [44 2.6 9.6][3.2 2.3 6.6][4.4 2.2 4.5][2.3 9.5 4.3][1.1 2 1]

    points.erase(points.begin() , points.begin() + 3) ; // removes the element from index 0 to 3 , last index is excluded 
    print(points) ; 
    // info(points) ;  //   Size : 2, capacity : 5
    points.insert(points.begin()+2 , {0 , 22.2 , 3})  ;
    // print(points) ;    // [2.3 9.5 4.3][1.1 2 1][0 22.2 3]

    points.shrink_to_fit() ;    // reduces capacity to size 
    // info(points) ;  // Size : 3, capacity : 3

    // let's do some sorting  
    sort(points.begin() , points.end() , compare) ;
    print(points) ; 

    points.clear() ; // erases all the elements but the capacity remains the same , capacity doesn't change 
    info(points) ;  //  Size : 0, capacity : 3


    return 0 ; 
}