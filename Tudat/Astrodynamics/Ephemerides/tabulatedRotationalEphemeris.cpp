#include "Tudat/Astrodynamics/Ephemerides/tabulatedRotationalEphemeris.h"

namespace tudat
{

namespace ephemerides
{

template class TabulatedRotationalEphemeris< double, double >;

<<<<<<< HEAD
#if( BUILD_EXTENDED_PRECISION_PROPAGATION_TOOLS )
=======
#if( BUILD_WITH_EXTENDED_PRECISION_PROPAGATION_TOOLS )
>>>>>>> origin/master
template class TabulatedRotationalEphemeris< long double, double >;
template class TabulatedRotationalEphemeris< double, Time >;
template class TabulatedRotationalEphemeris< long double, Time >;
#endif

}

}

