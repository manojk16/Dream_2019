/*
 * 2_Composition.cc
 *
 *  Created on: Aug 16, 2019
 *      Author: user1
 *
 *
 *      Complex object often build from smaller and simpler objects
 */

// Object Composition Model "has-a" relationship model between objects
// There are two basic sub types of object Composition
// 1) composition
// 2) Aggregation

// Object Composition when We are reffering to Both composition and aggregation


// Composition
// To qualify the composition an object or and a part must have the following relationship

/*
1. The part(member)  is a part of the object class
2. The part(member) can only belongs to one object(class) at a time
3. The part (member) has its existence managed by the object (class)
4. The part (member) does not know about the existence of the object (class)

Real Life example ofcomposition is the person's body and heart

We call this a unidirectional relationship, because the body knows about the heart, but not the other way around.
if body will destroy hearts also get destroy
Composition is often used to model physical relationships

In general, if you can design a class using composition, you should design a class using composition.
Classes designed using composition are straightforward, flexible, and robust (in that they clean up after themselves nicely).
*/
// Example : class Fraction{}
