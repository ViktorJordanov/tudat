#include "Tudat/Astrodynamics/Ephemerides/compositeEphemeris.h"

namespace tudat
{

namespace ephemerides
{

template class CompositeEphemeris< double, double >;

<<<<<<< HEAD
#if( BUILD_EXTENDED_PRECISION_PROPAGATION_TOOLS )
=======
#if( BUILD_WITH_EXTENDED_PRECISION_PROPAGATION_TOOLS )
>>>>>>> origin/master
template class CompositeEphemeris< Time, double >;
template class CompositeEphemeris< double, long double >;
template class CompositeEphemeris< Time, long double >;
#endif

} // namespace ephemerides

} // namespace tudat
