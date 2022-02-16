#BadIntegrator#

A very lazy (i.e. unoptimized) and naive C++ program to calculate the integral of various functions ( single variable polynomials as of 15/2/22). Use it at your own risk.

This program calculates the discrete, definite integral of a function by sampling it at a suitably high rate, multiplying the samples with the corresponding delta and then adding them together. This is based on the fact that the integral of a function within a limit is simply the area under its curve bound by those limits. Why this method ? Because it works for all functions and is the most naive definition of integration.

Formally, it performs (or aims to perform) the operation
	F = sum( deltaX * f(x) ) for all x in (LowerLimit, UpperLimit)

**Functions Supported**
- Single variable Second degree polynomial functions


##What is Integration##

The area under a curve

##What is Differentiation##

The slope of a curve