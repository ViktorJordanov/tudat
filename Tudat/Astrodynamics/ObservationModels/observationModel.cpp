#include "Tudat/Astrodynamics/ObservationModels/observationModel.h"

namespace tudat
{

namespace observation_models
{

template class ObservationModel< 1, double, double >;
template class ObservationModel< 2, double, double >;
template class ObservationModel< 3, double, double >;
template class ObservationModel< 6, double, double >;

<<<<<<< HEAD
#if( BUILD_EXTENDED_PRECISION_PROPAGATION_TOOLS )
=======
#if( BUILD_WITH_EXTENDED_PRECISION_PROPAGATION_TOOLS )
>>>>>>> origin/master
template class ObservationModel< 1, double, Time >;
template class ObservationModel< 1, long double, double >;
template class ObservationModel< 1, long double, Time >;

template class ObservationModel< 2, double, Time >;
template class ObservationModel< 2, long double, double >;
template class ObservationModel< 2, long double, Time >;

template class ObservationModel< 3, double, Time >;
template class ObservationModel< 3, long double, double >;
template class ObservationModel< 3, long double, Time >;

template class ObservationModel< 6, double, Time >;
template class ObservationModel< 6, long double, double >;
template class ObservationModel< 6, long double, Time >;
#endif


} // namespace observation_models

} // namespace tudat
