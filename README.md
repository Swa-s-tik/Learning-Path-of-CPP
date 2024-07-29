# # My-Learning-Path-of-C++
# My detailed path of learning C++, OOPs concepts, with code and notes!

# middle-level - provides ability to create abstraction through classes
# statically typed - type of a variable is known at compile time
# compiled - converted directly to machine code
# Supports -
# procedural - sequence of instructions
# OOP - organized into objects
# generic - independent of any specific data type
# superset of c
# ANSI - ensures consistency and compatibility across compilers and platforms
# indentifiers, keywords, comments/* */
# typedef - declare a new datatype
# enumerated type - set of name integral constants, assigns symbolic names to a set of values
# variable - named storage that we can manipulate
# lvalue - refers to a memory location
# rvalue - refers to data value that is stored at some address in memory
# int x = 5;  // 'x' is an lvalue, '5' is rvalue
# 1.7.24

# Variable Scope -
# inside block - local variable
# fn parameters - formal parameters
# outside block - global
# constants/literals - fixed values
# character -
# wide character literal - L'x' - wchar_t
# narrow - 'x' - char
# #define identifier value
# const type variable = value;
# Modifier - alters meaning of base type
# qualifiers - provide additional info -
# const - cannot be changed during execution
# volatile - tells compiler that value may change in ways not specified by program
# restrict - the only pointer that can access the object its pointing to
# Storage Classes -
# auto - decides type at compile time based on initializer
# register - defines local variables to be stored in register(quick access)
# static - instructs compiler to keep a variable in existence during life-time of program
# extern - gives reference of a global variable that is visible to all program files
# mutable - applies to only class objects. allows being overridden by a const mem fn
# Operators - symbol that tells compiler to perform specific manipulations.
# Fn args -
# call by value - value of arg copied into formal para. fn cant change arg
# call by pointer - address of arg copied. fn can change arg
# call by reference - can change



#  - formatted io with parameterized stream manipulators
#  - file processing - 
# ofstream - o/p of file stream, used to create files and write to them
# ifstream - i/p of file stream, used to read from file
# fstream - all capabilities 
# string class
# Pointer - a variable whose value is address of another variable
# &a - address of a
# *a - value stored at the address a points to
# Reference - another name for the variable
# Class - blueprint for a datatype
# object - instance of its class that contains real values for the attributes
# defined by the class
# Class Access attributes - public, private, protected
# Friend fn - has access to private and protected members of a class
# inline fn - compiler expands code in body instead of calling the fn
# this - object's special pointer which points to object itself
# Inheritance - feature that allows a class to inherit properties and behaviors from another class
# function overloading - fns must differ by types and/or number of args.
# polymorphism - having many forms
# virtual fn - fn in base, defined another version in derived, dynamic linkage
# pure virtual fn - virtual fn declared as =0

# abstraction - separates internal implementation from its external interface
# data encapsulation - binding together of data and fns, exposes only interfaces and hiding implementation
# interfaces - describes behavior of class without implementing it. implemented using abtract class.
# abstract class (ABC) - class having atleast one pure virtual fn, used as base, its object cannot be instantiated.
# concrete class - can be used to instantiate objects
# Exception Handling -
# throw
# catch
# try
# Memory -
# Stack - declared variables
# heap - used dynamically when program runs
# new - used to dynamically allocate memory on heap for variable or object
# delete - used to deallocate memory
# namespace - container that group classes fns and variables under unique names to avoid conflict
# Template - blueprint for creating generic class or fn
# preprocessor - directives, gives instructions to compiler to preprocess info before compilation
OOPs concepts        - abstraction, inheritance, polymorphism, encapsulation 

# Classes                      - classes, objects, functions, types 

# Structures                - group of several data types 

# Constructor             - initializes data members of objects of its class 

#                                      (same name as class, does not return any value) 

# Destructor               - releases memory space by destroying object 

#                                      (~ same name, does not need argument or returns value) 

# Pointers                   - pointer stores address 

# Smart Pointer          -   

 

# Inheritance              - inheritance gives attributes of parent class to child class    

# Virtual Functions     - declared by base, defined by derived 

# Fn overloading        - functions with same name but different parameters 

# op overloading       - compile time polymorphism 

# Interface                  - describes behavior of a class without implementing it 

 

# Containers  	        - vector. list, map, set, stack 

# Algorithms  	        - sort, find, Bin search 

# Iterators      	        - forward, bidirectional, random 

# functors      	        - customizes behavior of algo thru function 

# Adapters                  - modify behavior of other components of STL. 

 

# vector   	       - dynamic arrays, contiguous 

# list         	       - non-contiguous, slower traversal, faster modding 

# map       	       - key value and a mapped value 

# set         	       - each element is unique 

# iterator  	       - points to memory addresses 

# functor            	       - function object, function wrapped in class to be called as object 

# Adapter  	       - specialized interface on top of sequential containers 


 
# Strings		       -  

# COM model – COM object, ATL, DLL, Smart Pointers
