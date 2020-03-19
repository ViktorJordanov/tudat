#include "Tudat/SimulationSetup/PropagationSetup/environmentUpdater.h"

namespace tudat
{

namespace propagators
{

template class EnvironmentUpdater< double, double >;

<<<<<<< HEAD
#if( BUILD_EXTENDED_PRECISION_PROPAGATION_TOOLS )
=======
#if( BUILD_WITH_EXTENDED_PRECISION_PROPAGATION_TOOLS )
>>>>>>> origin/master
template class EnvironmentUpdater< double, Time >;
template class EnvironmentUpdater< long double, double >;
template class EnvironmentUpdater< long double, Time >;
#endif

} // namespace propagators

} // namespace tudat

