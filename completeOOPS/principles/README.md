# OOPS

Main focus on DATA.
Program is divided into many objects.

- Encapsulation : ( capsul )

Bundling data & function (methods) within `class`.
Data is accessable from methods from same class.
To prevent unintended changes in data & data structure. 
To ensure data integrity.
If class2 methods want to access data from class1, has to go through methods/func of class1.

breaking encapsulation - when data is assecced/modified without using class methods.

- Abstraction : 

Class controls access to its members via interfaces (methods), while hiding the internal implementation details from the outside world.
To hide data from methods/functions not part of that class.
So Class is abstract data type.
We can set members of class as private or public for abstraction.

- Inheritance :

Class inherit member variables/fields & methods of another Class.
Subclasses/child classes inherit from superclass/parent class.
Subclasses and extend or override functionlities of superclasses.
We dont have to define properties in very class jst inherit.
Creation of specilized classes that inherit common functionality.

* `mode of inheritance` :

how subclasses inherit Parent class.
public,private or protected.

* `types of inheritance` :

- Single inheritance : Parent class is inherited by ONLY one child class.
class Child << class Parent

- Multi-level inheritance : class Grandchild << class Child << class Parent & indirectly class Grandchild << class Parent

- Multiple inheritance : class C << class A aslo class C << class B
one class inheriting from multiple classes.

- Hierarchical inheritance : one class Parent multiple Childs
class Child1 << class Parent
class Child2 << class Parent

- Hybrid inheritance : combination of one or more inheritance type.

* `Diamond problem` :one class has multiple parent classes bt has one ancestor.
  class Ancestor >> class PP1 >> class P1 >> class C
  class Ancestor >> class PP2 >> class P2 >> class C
  class c << class Ancestor
  hence , class C will have all properties from all classes.

  Problem : class C will have inherited properties of class Ancestor twice


- Polymorphism : 

Ability of code to adapt to changes.
Ability of different objects/methods to take different forms.

types of polymorphism :
- `Compile-time` : occurs when the compiler determines which implementation of a method to call at compile time.
It is achieved through function overloading and operator overloading.
a ) `function overloading` : different functions with same name BUT they perform differently based on arg passed to them.They are called based on number and types of arguments provided.
b ) `operator overloading` : operators are redefined for user-defined types, enabling objects to respond to operators in a customized way.

- `run-time` : the decision about which method to call is made at runtime.
It is achieved through method overriding and virtual functions.
a ) `method overriding` : class Parent method is redefined by subclass.
When a method is called on a superclass reference or pointer pointing to a subclass object, the overridden method in the subclass is invoked.
b ) `virtual function` : functions/methods declared with keyword `virtual` allow subclass to override them.

* `class` :

User defined data type.
Class is blueprint/template to create Object.
In class we define data/properties & methods.

* `object` :

Instance of class.
Variable of class basically.
Objects are deleted when program execution leaves the scope they were created.
Function scope Onjects are deleted when function executed or exited.
We can manually delete object.[delete works only for pointer obj]

* `constructor` :

Used to initialize object.
This is function which is called when an object is created.
Same name as class.
Types : Default , Parameterised , Copy

- Default Constructor : no param/args passed
- Param Constructor : param passed
- Copy constructor : 
initialize obj with another existing obj.
Pass existing obj of SAME CLASS as param.

* `destructor` :

Function is called when obj is deleted.
No params/args.
name : ClassN -> ~(ClassN) 

* `access specifiers` : & mode of inheritance

- public  : can be accessed from anywhr in the code.
- private : ONLY accessible in that class. (not even in main())
- protected : accessible in ONLY that class , parent class & child class.

* `friend function` : non-member function who has access to private & protected member of class.
independent function , function of another class can also b friend function.
Declared inside class using `friend` keyword.




