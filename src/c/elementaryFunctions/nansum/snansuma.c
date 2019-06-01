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


#include "nansum.h"
#include "types.h"
#include "uint16.h"
#include "addition.h"
#include "isnan.h"

float snansuma(float *in, int size)
{
   float fin=0;


    for (int i = 0; i < size; ++i)

    {
	if(!(isnan(in[i])))
		{
			fin= sadds(fin, in[i]);

		}	


    }

    return fin;
}
