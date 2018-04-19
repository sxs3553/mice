#ifndef _SERVER_H
#define _SERVER_H

#include <iostream>
#include <string>


using namespace std;

//TEMPLATE
template<class T>
class Server
{
// Note that you program should not have any memory leaks.
private:
		T n_Size;
		T n_Capacity;
		T* new_server;
		 
// OVERLOADED << OPERATOR - a nonmember
		// designate as a friend so that it can utilize the private data members of the MyVector class
		friend ostream& operator<< (ostream&, const Server<T>&);

public:
	// Server(Default)
	// Purpose: A default constructor that creates an vector with a default capacity of 2  
	// Parameters: None
	// Returns: None
		Server<T>(void);
	
	// Server(Parameterized)
	// Purpose: A parameterized constructor that creates a vector of capacity n
	// Parameters: integer value of n for capacity
	// Returns: None
		Server<T>(const T&);
	
	// Server(Copy)
	// Purpose: A parameterized constructor that takes an object(designated as "b") and copies it to another object
	// Parameters: Object vector designated as "b"; Must be a constant
	// Returns: Copy of object "b"
		Server<T>(const Server<T>&);

	// Server(Destructor)	
	// Purpose: A destructor that deletes any dynamically allocated storage
	// Parameters: None
	// Returns: None
		~Server<T>(void);
	
	// size()
	// Purpose: A function, size( ), that returns the size of your vector.
	// Parameters: None
	// Returns: Size of the vector
		T size() const;
 
	// capacity()
	// Purpose: A function, capacity( ), that returns the capacity of the vector. 
	// Parameters: None
	// Returns: Capacity of Vector
		T capacity() const ;

	// clear()
	// Purpose: A function, clear( ), that deletes all of the elements from the vector and resets its size and capacity to zero. 
	// Parameters: None
	// Returns: None
		void clear();
	
	// push_back()
	// Purpose: A function push_back(string s) that adds the integer value n to the end of the vector.
	// Parameters: None
	// Returns: None
		void push_back(T&);

	// at(int n)
	// Purpose: locate the value of the element at position i in the vector. 
	// Parameters: If the index i is greater than the size( ) of the vector, this function should throw an exception. 
	// Returns: returns the value of the element at position i in the vector. 
		T at(T&) const;
	 
	// If the vector is not large enough to hold this additional value, you must make the vector grow. 
	// Your grow algorithm should double the current capacity of the vector. 
	//	Don't forget to consider the case where the initial capacity of the vector is zero.
		void allocNew();

	// Overload Assignment Operator()
	// Purpose: Overload the assignment operator
	// Parameters: const object that is designated as "b"
	// Returns: ?
		Server<T>& Server::operator=(const Server<T>&);	
};

// Server Class Code

// Default Constructor
template<class T>
Server<T>::Server(void)
{
	n_Capacity = 2;
	new_server = new T [n_Capacity];
	n_Size = 0;
}

// Parameterized Constructor
template<class T>
Server<T>::Server(const T& n)
{
	n_Capacity = n;
	new_server = new <T> [n_Capacity];
	n_Size = 0;
}

// Destructor
template<class T>
Server<T>::~Server(void)
{
	 if ( new_server != nullptr)
    {
        delete [ ] new_server;
        new_server = nullptr;
    }
}

// Server Copy Constructor
template<class T>
Server<T>::Server(const Server<T>& b)
{
		n_Capacity = b.n_Capacity;
		n_Size = b.n_Size;
		delete [] new_server;
		new_server = new T [n_Size];
		for(int i = 0; i < b.n_Size;i++)
		{
			new_server[i] = b.new_server[i];
		}
}

// OPERATOR OVERLOAD
template<class T>
Server<T>::Server& operator=(const Server<T>& b)
{
	// Test for self-copy
	if(this != &b)
	{
		// If not a self-copy, implement the following
		n_Size = b.n_Size;
		n_Capacity = b.n_Capacity;
		delete [] new_server;
		new_server = new <T> [n_Size];
		for(int i = 0; i < b.n_Size;i++)
		{
			new_server[i] = b.new_server[i];
		}
	}
	return *this;
}

// Size Function
template<class T>
T Server<T>::size() const
{
	return n_Size;
}

// Push_Back Function
template<class T>
void Server<T>::push_back(T& s)
{
	// Allocate new memory space if the size of the vector is greater than the capacity of the vector
	if(n_Size+1 > n_Capacity)
	{
		allocNew();
	}
	new_server[n_Size] = s;
	n_Size++;
}

// Capacity Function
template<class T>
T Server<T>::capacity() const
{
	return n_Capacity;
}

// Clear Function
template<class T>
void Server<T>::clear()
{
	delete []new_server;
	// If server is not NULL then reset size and capacity to respective values of 0 and 2. Delete []vectorData and set vectorData to new array
	n_Size = 0;
	n_Capacity = 2;
	new_server = new <T> [n_Capacity];
}

// At Function
template<class T>
T Server<T>::at(T& n) const
{
	if(n < n_Size)
	{
		return new_server[n];
	}
	// Throw an exception if n is greater than vector size
	throw 10;
}

// allocNew Function
template<class T>
void Server<T>::allocNew()
{
	// Increase vector capacity by doubling the size of the vector by 2
	n_Capacity = n_Size * 2;

	// Declare new array
	T* temp = new T[n_Capacity];

	// Copy data from old array into new array
	for(int i = 0; i < n_Size; i++)
	{
		temp[i] = new_server[i];
	}
	// delete old array and have new array take the place of old array
	delete [] new_server;
	new_server = temp;
}
template<class T>

//OPERATOR OVERLOADING
ostream& operator<<(ostream& out, const Server<T>& b)
{
	for(int i = 0; i <(b.n_Size); i++)
	{
		out << b.at(i) << " ";
	}
	return out;
}
