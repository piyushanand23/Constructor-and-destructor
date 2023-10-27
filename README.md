# Constructor-and-destructor
## Theory:
#### Constructors:
A constructor is a special member function of a class and shares the same name as of class, which means the constructor and class have the same name.
Constructor is called by the compiler whenever the object of the class is created, it allocates the memory to the object and initializes class data members by default values or values passed by the user while creating an object.
Constructors don’t have any return type because their work is to just create and initialize an object.<br>
The basic syntax of the constructor is given below:<br>
class class_name{<br>
  private: <br>
  // private members <br>
  
  public: <br>
  
  // declaring constructor<br>
  class_name({parameters})<br>
  {<br>
    // constructor body <br>
  }<br>
  
};<br>
#### Destructors:
Destructor is just the opposite function of the constructor. A destructor is called by the compiler when the object is destroyed and its main function is to deallocate the memory of the object. The object may be destroyed when the program ends, or local objects of the function get out of scope when the function ends or in any other case.
Destructor has the same as of the class with prefix tilde(~) operator and it cannot be overloaded as the constructor.
Destructors take no argument and have no return type and return value.<br>
The basic syntax of the Destructor is given below:<br>
class class_name{<br>
  private: <br>
  // private members <br>
  
  public: <br>
  
  // declaring destructor<br>
  ~class_name()<br>
  {<br>
    // destructor body <br>
  }<br>
  
};
