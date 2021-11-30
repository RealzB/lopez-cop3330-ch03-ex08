/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Brandon Lopez
 */
#include <iostream>

int main() {
  int i;
  printf ("Enter your value: ");
  scanf ("%d", &i);
  if(i % 2 == 0)
    printf("The value %d is an even number", i);
  else
    printf("The value %d is an odd number", i);

} 