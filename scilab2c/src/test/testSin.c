/*
**  -*- C -*-
**
** testSin.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:06:16 2006 jofret
** Last update Mon Dec 11 10:59:39 2006 jofret
**
** Copyright INRIA 2006
*/

#include <stdio.h>

#define PI 3.1415826535

float ssins(float);
double dsins(double);

void ssinsTest() {
  printf(">> Float scalar\n");
  printf("ssins(0) = %f\n", ssins((float) 0));
  printf("ssins(PI) = %f\n", ssins(PI));
  printf("ssins(PI/2) = %f\n", ssins(PI/2));
  printf("ssins(PI/3) = %f\n", ssins(PI/3));
  printf("ssins(PI/4) = %f\n", ssins(PI/4));
  printf("ssins(PI/6) = %f\n", ssins(PI/6));
  printf("ssins(-PI) = %f\n", ssins(-PI));
  printf("ssins(-PI/2) = %f\n", ssins(-PI/2));
  printf("ssins(-PI/3) = %f\n", ssins(-PI/3));
  printf("ssins(-PI/4) = %f\n", ssins(-PI/4));
  printf("ssins(-PI/6) = %f\n", ssins(-PI/6));
}

void dsinsTest() {
  printf(">> Double scalar\n");
  printf("dsins(0) = %e\n", dsins((double) 0));
  printf("dsins(PI) = %e\n", dsins(PI));
  printf("dsins(PI/2) = %e\n", dsins(PI/2));
  printf("dsins(PI/3) = %e\n", dsins(PI/3));
  printf("dsins(PI/4) = %e\n", dsins(PI/4));
  printf("dsins(PI/6) = %e\n", dsins(PI/6));
  printf("dsins(-PI) = %e\n", dsins(-PI));
  printf("dsins(-PI/2) = %e\n", dsins(-PI/2));
  printf("dsins(-PI/3) = %e\n", dsins(-PI/3));
  printf("dsins(-PI/4) = %e\n", dsins(-PI/4));
  printf("dsins(-PI/6) = %e\n", dsins(-PI/6));
}

int testSin() {
  printf(">>>> Sine Tests\n");
  ssinsTest();
  dsinsTest();
  return 0;
}
