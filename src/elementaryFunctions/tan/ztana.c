/*
**  -*- C -*-
**
** ztana.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Dec  7 16:12:02 2006 jofret
** Last update Mon Oct 22 09:46:07 2007 bruno
**
** Copyright INRIA 2006
*/

#include "tan.h"

void ztana(doubleComplex* x, int size, doubleComplex* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ztans(x[i]);
  }
}