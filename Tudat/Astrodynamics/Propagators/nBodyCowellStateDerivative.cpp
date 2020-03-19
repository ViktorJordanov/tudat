#include "Tudat/Astrodynamics/Propagators/nBodyCowellStateDerivative.h"

namespace tudat
{

namespace propagators
{

template class NBodyCowellStateDerivative< double, double >;

<<<<<<< HEAD
#if( BUILD_EXTENDED_PRECISION_PROPAGATION_TOOLS )
=======
#if( BUILD_WITH_EXTENDED_PRECISION_PROPAGATION_TOOLS )
>>>>>>> origin/master
template class NBodyCowellStateDerivative< long double, double >;
template class NBodyCowellStateDerivative< double, Time >;
template class NBodyCowellStateDerivative< long double, Time >;
#endif


} // namespace propagators

} // namespace tudat

