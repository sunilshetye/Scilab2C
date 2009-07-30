/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "stdevf.h"
#include "meanf.h"

#include <stdio.h>


void zrowstdevfa(doubleComplex *in1, int lines, int columns, doubleComplex*in2, doubleComplex* out){
  int i = 0;
  int j = 0;
  doubleComplex temp = DoubleComplex(0.0,0.0);
  doubleComplex accumulate = DoubleComplex(0.0,0.0);
  double accumulateFre = 0.0;
    
  zrowmeanfa(in1, lines, columns, in2, out );

  /*we first multiply each zell of the input matrix by its coefficient*/
  for (j = 0; j < columns; ++j)
    {
      accumulate = DoubleComplex(0.0,0.0);
      accumulateFre = 0.0;
      temp = DoubleComplex(0.0,0.0);

      for ( i = 0 ; i < lines; ++i )
        {

         temp = zpows (  zdiffs (in1[lines*j + i] ,out[j] ) ,DoubleComplex (2.0, 0.0 ) );
         temp = zmuls( in2[lines*j + i] , temp);

         accumulate = zadds( temp , accumulate);
         accumulateFre +=  zreals(in2[lines*j + i]);

        } 

      if (lines <= 1)
        {
          out[j] = zmuls (DoubleComplex(0.0,0.0) , accumulate ) ; 
        }
      else
        {
        accumulate = DoubleComplex(  zreals(accumulate ) / (accumulateFre - 1) , zimags(accumulate)  / (accumulateFre - 1));
        out[j] = zsqrts(accumulate);
        }
    }

}
