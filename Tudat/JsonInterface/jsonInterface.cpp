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

#include <getopt.h>

#include "Tudat/JsonInterface/jsonInterface.h"

namespace tudat
{

namespace json_interface
{

template class JsonSimulationManager< double, double >;

<<<<<<< HEAD
#if( BUILD_EXTENDED_PRECISION_PROPAGATION_TOOLS )
=======
#if( BUILD_WITH_EXTENDED_PRECISION_PROPAGATION_TOOLS )
>>>>>>> origin/master
template class JsonSimulationManager< double, long double >;
//template class JsonSimulationManager< Time, double >;
//template class JsonSimulationManager< Time, long double >;
#endif

}

}
