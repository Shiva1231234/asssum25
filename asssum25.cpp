Q=1
/*
#include<iostream>
using namespace std;
class Complex{
public:
    int real;
    int imag;
     /* Function to set the values of
      * real and imaginary part of each complex number
      
     void setvalue()
    {
        cin>>real;
        cin>>imag;
    }
	/* Function to display the sum of two complex numbers 
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
	/* Function to add two complex numbers 
 
    void sum(Complex c1, Complex c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
    };
int main()
    {
        Complex c1,c2,c3;
        cout<<"Enter real and imaginary part of first complex number"<<endl;
        c1.setvalue();
        cout<<"Enter real and imaginary part of second complex number"<<endl;
        c2.setvalue();
        cout<<"Sum of two complex numbers is"<<endl;
        c3.sum(c1,c2);
        c3.display();
    return 0;
    }*/
    Q=2
    /*
    #include<iostream>
#include<iomanip>
using namespace std;
 
class Time
{
    private :
        int hour;
        int minute;
        int second;
    public :
        //constructor with default value 0
        Time(int h = 0, int m  = 0, int s = 0);
        //setter function 
        void setTime(int h, int m, int s);
        //print description of object in hh:mm:ss
        void print();
        //compare two time object
        bool equals(Time);
};
 
Time :: Time(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}
 
void Time :: setTime(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;     
}        
 
void Time :: print()
{
    cout << setw(2) << setfill('0') << hour << ":"
        << setw(2) << setfill('0') << minute << ":"
         << setw(2) << setfill('0') << second << "\n";    
}
 
bool Time :: equals(Time otherTime)
{
    if(hour == otherTime.hour && 
        minute == otherTime.minute && 
        second == otherTime.second)
        return true;
    else
        return false;
}
 
int main()
{
    Time t1(10, 50, 59);
    t1.print();  // 10:50:59
    Time t2;  //object created with default value
    t2.print();  // 00:00:00
    t2.setTime(6, 39, 9); //set the new time in object
    t2.print();  // 06:39:09
   
    if(t1.equals(t2))
        cout << "Two objects are equals\n";
    else
        cout << "Two objects are not equals\n";    
  
    return 0;
}*/
Q=3
/*
C++
#include<iostream>
using namespace std;
class T4Tutorials_Factorial_Number
{
	private:
			int n,n1,f=1;
	public:
		void input();
		void calc();
		void display();
};
void T4Tutorials_Factorial_Number::input()
{
	cout<<"Please Enter a no.:”<<endl;
	cin>>n;
}
void T4Tutorials_Factorial_Number::calc()
{
	n1=n;
	if(n==0||n==1)
	cout<<" Factorial  of "<<n<<" is 1”<<endl;
	else
	{
		while(n>0)
		{
			f=f*n;
			n--;
		}
	}

}
void T4Tutorials_Factorial_Number::display()
{
		cout<<" The Factorial  of "<<n1<<" is "<<f;
}
int main ()
{
	T4Tutorials_Factorial_Number object;
	object.input();
	object.calc();
	object.display();
}
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
#include<iostream>
using namespace std;
class T4Tutorials_Factorial_Number
{
	private:
			int n,n1,f=1;
	public:
		void input();
		void calc();
		void display();
};
void T4Tutorials_Factorial_Number::input()
{
	cout<<"Please Enter a no.:”<<endl;
	cin>>n;
}
void T4Tutorials_Factorial_Number::calc()
{
	n1=n;
	if(n==0||n==1)
	cout<<" Factorial  of "<<n<<" is 1”<<endl;
	else
	{
		while(n>0)
		{
			f=f*n;
			n--;
		}
	}
 
}
void T4Tutorials_Factorial_Number::display()
{
		cout<<" The Factorial  of "<<n1<<" is "<<f;
}
int main ()
{
	T4Tutorials_Factorial_Number object;
	object.input();
	object.calc();
	object.display();
}*/
Q=4
/*

Home » C++ Programs

C++ program to find the largest number between three numbers using class
Given three numbers, we have to find the largest number among them class and object approach.
Submitted by Shubh Pachori, on August 04, 2022
Example:

Input: 
Enter 1st Number:33
Enter 2nd Number:44
Enter 3rd Number:11
Output: 
44 is greater than 33 and 11
C++ Code to find the largest number among three numbers using class and object approach
#include <iostream>
using namespace std;

// create a class
class LargestNumber {
  // private data members
 private:
  int number_1, number_2, number_3;

  // public function with three int type parameters
 public:
  void largest(int n_1, int n_2, int n_3) {
    // copying values of parameters in the data members
    number_1 = n_1;
    number_2 = n_2;
    number_3 = n_3;

    // if condition to check if the first number is the greatest
    if ((number_1 > number_2) && (number_1 > number_3)) {
      cout << number_1 << " is greater than " << number_2 << " and " << number_3
           << endl;
    }

    // else if condition to check if the second number is the greatest
    else if ((number_2 > number_1) && (number_2 > number_3)) {
      cout << number_2 << " is greater than " << number_1 << " and " << number_3
           << endl;
    }

    // else condition for the third number
    else {
      cout << number_3 << " is greater than " << number_1 << " and " << number_2
           << endl;
    }
  }
};

int main() {
  // create a object
  LargestNumber L;

  // declare three int type variables for storing numbers
  int n_1, n_2, n_3;

  cout << "Enter 1st Number: ";
  cin >> n_1;

  cout << "Enter 2nd Number: ";
  cin >> n_2;

  cout << "Enter 3rd Number: ";
  cin >> n_3;

  // calling function using object
  L.largest(n_1, n_2, n_3);

  return 0;
}*/
Q=5
/*
#include <iostream>
using namespace std;

int main() {

  int n, reversed_number = 0, remainder;

  cout << "Enter an integer: ";
  cin >> n;

  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }

  cout << "Reversed Number = " << reversed_number;

  return 0;
}*/
Q=6
/*
// C++ implementation of above approach
#include <iostream>
#include <math.h> // For sqrt() and cbrt()
using namespace std;
 
// Function to check if the
// number is a perfect square
bool isSquare(int num)
{
    int root = sqrt(num);
    return (root * root) == num;
}
 
// Function to check if the
// number is a perfect cube
bool isCube(int num)
{
    int root = cbrt(num);
    return (root * root * root) == num;
}
 
// Function to count the number
// of perfect squares and cubes
int countSC(int N)
{
    int count = 0;
    for (int i = 1; i <= N; i++) {
 
        // If a number is perfect square,
        if (isSquare(i))
            count++;
 
        // Else if the number is cube or not
        else if (isCube(i))
            count++;
    }
 
    return count;
}
 
// Driver code
int main()
{
    int N = 20;
 
    cout << "Number of squares and cubes is " << countSC(N);
    return 0;
}*/
Q=7
/*
#include <iostream>
using namespace std;

int main() {
    
    double n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    // check if n1 is the largest number
    if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;

    // check if n2 is the largest number
    else if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;
    
    // if neither n1 nor n2 are the largest, n3 is the largest
    else 
        cout << "Largest number: " << n3;
  
    return 0;
}*/
Q=8
/*
#include <iostream>

using namespace std;

class Rectangle
{
	public:
		int length;         //length of rectangle
		int breadth;        //breadth of rectangle
		/* declaring member functions */
		void setLength( int l );
		void setBreadth( int b );
		int getArea();
};

/* defining member functions */
void Rectangle::setLength( int l )
{
	length = l;
}
void Rectangle::setBreadth( int b )
{
	breadth = b;
}
int Rectangle::getArea()
{
	return length * breadth;
}

int main()
{
	Rectangle rt;
	rt.setLength(7);
	rt.setBreadth(4);
	int area = rt.getArea();
	cout << "Area : " << area << endl;
	return 0;
}
*/
Q=9
/*
#include<iostream>
using namespace std;

class circle
{
        float radius, area;   //data members
    public:
        circle()
        {
                cout<<"\n Enter the value of Radius : ";
                cin>>radius;
        }
        void calculate();   //member function
        void display();     //member function
};
inline void circle :: calculate()  //accessing data members of a class circle
{
        area = 3.14 * radius * radius;
}
inline void circle :: display()
{
        cout<<"\n Area of Circle : "<<area;
}
int main()
{
        circle cr;   //object created
        cr.calculate();   //calling function
        cr.display();  //calling function
        return 0;
}*/