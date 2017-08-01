/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/


#include "stdev.h"
#include <math.h>
#include "mean.h"
#include "pow.h"
#include "variance.h"
#include "types.h"
#include "uint16.h"

double dstdeva(double *in, int size)
{
   double variance = dvariancea(in, size);

	return dpows(variance, 0.5);


}
