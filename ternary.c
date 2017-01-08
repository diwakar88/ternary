/*
Name:Diwakar kandel
Subject:programming fundanmental
Program:WAP to check whether year is leap year or not using conditional/ternary operator.
Roll No:
Date:jan8,2017
*/
#include<stdio.h>
int main()
{
 int year;
  printf("Enter any year:\n");
  scanf("%d",&year);




  (year%4==0 && year%100!=0)? printf("Leap year"):printf("common year");




 return 0;
}

