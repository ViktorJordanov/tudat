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


#include "Tudat/Astrodynamics/BasicAstrodynamics/physicalConstants.h"

#include "Tudat/Astrodynamics/ObservationModels/lightTimeSolution.h"

namespace tudat
{
namespace observation_models
{


//! Function to retrieve the default tolerance for the light-time equation solution.
template< >
double getDefaultLightTimeTolerance< double >( )
{
    return 1.0E-12;
}

//! Function to retrieve the default tolerance for the light-time equation solution.
template< >
long double getDefaultLightTimeTolerance< long double >( )
{
    return 1.0E-15L;
}


} // namespace observation_models
} // namespace tudat
