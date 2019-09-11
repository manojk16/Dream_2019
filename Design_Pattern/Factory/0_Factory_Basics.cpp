/*
 * 1. Ceational Dp is all about class Instantiation.
 * 2. It deal with the object creation method
 * 3. This DP deals with the creation of object suitable to the situation
 * ***************************Categories of the creational Desing Pattern******************************
 * First Category:
 * 1.Deals with the Object creation and defer parts of its object creation to other Object
 * 2. These Object use the delegation to its job done
 * Second Category :
 * 1. Class creation pattern and defer its process to subclasses
 * 2. These DP uses inheritance effectively in the instance process
 *
 * *******************************Factory Pattern v/s Abstract Factory Pattern
 * Factory Method is the class creational Pattern while Abstract Factory Method is the Object Creation Design Pattern
 * Factory is the fancy name for a method that instaintiate or produce the object
 *
 *
 * Factory Method - Define an interface for creating an object, but let subclasses decide which class to instantiate
 *  In contrast to Abstract Factory, Factory Method contain method to produce only one
type of product.

 *****3#####################*************### When to use####################***************************************############
 * 1. a class cant anticipate the class of objects it must create only subclass will decide
 * 2. a class wants its subclasses to specify the objects it creates
 * 3. classes delegate responsibility to one of several helper subclasses, and you want to localize the knowledge of which helper subclass is the delegate
 *###########################Implementation related stuff ###############################################33
 * Product defines the interface for objects the factory method creates.
• ConcreteProduct implements the Product interface.
• Creator (also called as Factory because it creates the Product objects) declares the
method Factory Method, which returns a Product object. May call the generating
method for creating Product objects.
• ConcreteCreator overrides the generating method for creating ConcreteProduct
objects
 * */