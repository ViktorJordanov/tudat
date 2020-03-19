#include "Tudat/Astrodynamics/ObservationModels/observationSimulator.h"

namespace tudat
{

namespace observation_models
{

template class ObservationSimulatorBase< double, double >;
template class ObservationSimulator< 1, double, double >;
template class ObservationSimulator< 2, double, double >;
template class ObservationSimulator< 3, double, double >;
template class ObservationSimulator< 6, double, double >;

<<<<<<< HEAD
#if( BUILD_EXTENDED_PRECISION_PROPAGATION_TOOLS )
=======
#if( BUILD_WITH_EXTENDED_PRECISION_PROPAGATION_TOOLS )
>>>>>>> origin/master
template class ObservationSimulatorBase< double, Time >;
template class ObservationSimulatorBase< long double, double >;
template class ObservationSimulatorBase< long double, Time >;

template class ObservationSimulator< 1, double, Time >;
template class ObservationSimulator< 1, long double, double >;
template class ObservationSimulator< 1, long double, Time >;

template class ObservationSimulator< 2, double, Time >;
template class ObservationSimulator< 2, long double, double >;
template class ObservationSimulator< 2, long double, Time >;

template class ObservationSimulator< 3, double, Time >;
template class ObservationSimulator< 3, long double, double >;
template class ObservationSimulator< 3, long double, Time >;

template class ObservationSimulator< 6, double, Time >;
template class ObservationSimulator< 6, long double, double >;
template class ObservationSimulator< 6, long double, Time >;
#endif

}

}
