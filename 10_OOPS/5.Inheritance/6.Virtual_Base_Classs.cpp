/* Virtual inheritance is a C++ technique that ensures only one copy of a base class's member variables are inherited by grandchild derived classes. 
Without virtual inheritance, if two classes B and C inherit from a class A, and a class D inherits from both B and C, then D will contain two
 copies of A's member variables: one via B, and one via C. These will be accessible independently, using scope resolution.

Instead, if classes B and C inherit virtually from class A, then objects of class D will contain only one set of the member variables from class A.

This feature is most useful for multiple inheritance, as it makes the virtual base a common subobject for the deriving class and all classes that are derived from it.
 This can be used to avoid the diamond problem by clarifying ambiguity over which ancestor class to use, as from the perspective of the deriving class (D in the example above) the virtual base (A) acts as
  though it were the direct base class of D, not a class derived indirectly through a base (B or C).[1][2]

It is used when inheritance represents restriction of a set rather than composition of parts. In C++, a base class intended to be common throughout the hierarchy is denoted as virtual with the virtual keyword. 
[wikipedia]
*/