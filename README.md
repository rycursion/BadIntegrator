# BadIntegrator

A very lazy (i.e. unoptimized) and naive C++ program to calculate the integral of various functions ( single variable polynomials as of 15/2/22). Use it at your own risk.

## Table of Contents
* [Introduction](#introduction)
* [Setup](#setup)
* [Useful Info](#useful-info)
* [FAQ](#faq)

## Introduction

This program calculates the discrete, definite integral of a function by sampling it at a suitably high rate, multiplying the samples with the corresponding delta and then adding them together. This is based on the fact that the integral of a function within a limit is simply the area under its curve bound by those limits. Why this method ? Because it works for all functions and is the most naive definition of integration.

Formally, it performs (or aims to perform) the operation
	F = sum( deltaX * f(x) ) for all x in (LowerLimit, UpperLimit)


**Functions Supported**
- Single variable Second degree polynomial functions

## Setup

I use a Linux system to compile this program, so it *should* work out of the box for all Unix/Linux users. Windows users can either manually set Visual Studio to build from src or if they have WSL installed, compile the binary using their Linux shell of choice.

**Prerequisites**
- gcc
- make

# Useful Info

### What is Integration

The area under a curve

### What is Differentiation

The slope of a curve

## FAQ

**Some Question**
- Some answer