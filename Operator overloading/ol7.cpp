#include<iostream>
using namespace std ; 

class Time
{
    int hour , min , sec ;
    Time () 
    {
        hour = min = sec = 0 ; 
    }
    public :
    Time (int hour , int min , int sec) ;
    friend Time add_time(Time t1 , Time t2) ; 
    void display () ; 

};

Time :: Time (int hour , int min , int sec)
{
    this->hour = hour ; 
    this->min = min ;
    this->sec = sec ; 
}

void Time :: display()
{
    cout << "Time is : " << hour <<":" << min <<":"<< sec << endl ; 
}

Time add_time(Time t1 , Time t2)
{
    Time t3 ; 
    if (t1.sec + t2.sec > 59 )
    {
        t3.sec = (t1.sec + t2.sec) - 60 ; 
        t3.min += 1 ;  
    }
    else 
    {
        t3.sec = t2.sec + t1.sec ; 
    }
    if (t1.min + t2.min + t3.min > 60  )
    {
        t3.min = t1.min + t2.min + t3.min - 60  ; 
        t3.hour += 1 ; 
    }
    else 
    {
        t3.min = t1.min + t2.min + t3.min ; 
    }
    if (t1.hour + t2.hour + t3.hour > 24)
    {
        t3.hour = t1.hour + t2.hour + t3.hour - 24  ;
    }
    else 
    {
        t3.hour = t1.hour + t2.hour + t3.hour ;
    }

    return t3  ;

}

int main ()
{
    cout << "Enter hour , min ,sec of first time :\n" ; 
    int hour , min , sec  ; 
    cin >> hour >> min >> sec ; 
    Time t1(hour,min,sec) ; 
    cout << "Enter hour , min ,sec of second time :\n" ; 
    cin >> hour >> min >> sec ; 
    Time t2 (hour,min,sec) ; 

    t1.display() ; 
    t2.display() ; 
    Time t3 = add_time (t1 , t2) ; 
    t3.display() ;





    return 0 ;

}
