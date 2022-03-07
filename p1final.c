#include <stdio.h>
int gcd(int a, int b) {
   if (a == 0)
      return b;
   return gcd(b%a, a);
}
void smallest(int &den3, int &n3) {
   // Finding gcd of both terms
   int common_factor = gcd(n3,den3);
   den3 = den3/common_factor;
   n3 = n3/common_factor;
}
void add_frac(int n1, int den1, int n2, int den2, int &n3, int &den3) {
   // to find the gcd of den1 and den2
   den3 = gcd(den1,den2);
    // LCM * GCD = a * b
   den3 = (den1*den2) / den3;
   // Changing the inputs to have same denominator
   // Numerator of the final fraction obtained
   n3 = (n1)(den3/den1) + (n2)(den3/den2);
   smallest(den3,n3);
}
// Driver program
int main() {
   int n1=1, den1=4, n2=2, den2=12, den3, n3;
   add_frac(n1, den1, n2, den2, n3, den3);
   printf("%d/%d + %d/%d = %d/%d\n", n1, den1, n2, den2, n3, den3);
   return 0;
}
Output
1/4 + 2/12 = 5/12
raja
Sunidhi Bansal
Published on 18-Oct-2019 12:25:49
 Related Questions & Answers
Program to compare two fractions in C
C# Program to Add Two TimeSpan
C# program to add two matrices
C++ Program to Add Two Numbers
C Program to Add two Integers
Unique Fractions in C++
Simplified Fractions in C++
Program to add two binary strings in C++
Program to Add Two Complex Numbers in C
Java Program to Add Two Numbers
Java program to add two matrices.
Java program to add two integers
Python program to add two numbers
Add two numbers represented by two arrays in C Program
C++ program to overload addition operator to add two matrices
 Previous PageNext Page  
Advertisements

Tutorials Point
 About us Terms of use Cookies Policy FAQ's Helping Contact
© Copyright 2021. All Rights Reserved.
We make use of cookies to improve
Yentha varaku