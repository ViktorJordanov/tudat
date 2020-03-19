<<<<<<< HEAD
/*    Copyright (c) 2010-2018, Delft University of Technology
=======
/*    Copyright (c) 2010-2019, Delft University of Technology
>>>>>>> origin/master
 *    All rigths reserved
 *
 *    This file is part of the Tudat. Redistribution and use in source and
 *    binary forms, with or without modification, are permitted exclusively
 *    under the terms of the Modified BSD license. You should have received
 *    a copy of the license with this file. If not, please or visit:
 *    http://tudat.tudelft.nl/LICENSE.
 */

#include "Tudat/Astrodynamics/Propagators/nBodyEnckeStateDerivative.h"

namespace tudat
{

namespace propagators
{

template class NBodyEnckeStateDerivative< double, double >;

<<<<<<< HEAD
#if( BUILD_EXTENDED_PRECISION_PROPAGATION_TOOLS )
=======
#if( BUILD_WITH_EXTENDED_PRECISION_PROPAGATION_TOOLS )
>>>>>>> origin/master
template class NBodyEnckeStateDerivative< long double, double >;
template class NBodyEnckeStateDerivative< double, Time >;
template class NBodyEnckeStateDerivative< long double, Time >;
#endif

}

}
