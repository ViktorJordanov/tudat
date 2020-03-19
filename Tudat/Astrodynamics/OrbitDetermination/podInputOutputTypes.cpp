#include "Tudat/Astrodynamics/OrbitDetermination/podInputOutputTypes.h"

namespace tudat
{

namespace simulation_setup
{

template class PodInput< double, double >;
template struct PodOutput< double >;

<<<<<<< HEAD
#if( BUILD_EXTENDED_PRECISION_PROPAGATION_TOOLS )
=======
#if( BUILD_WITH_EXTENDED_PRECISION_PROPAGATION_TOOLS )
>>>>>>> origin/master
template class PodInput< long double, double >;
template class PodInput< double, Time >;
template class PodInput< long double, Time >;
template struct PodOutput< long double >;
#endif

}

}

