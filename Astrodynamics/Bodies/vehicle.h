/*! \file vehicle.h
 *    This file contains the definition of the VehicleModel class, which is a container for the
 *    different subsystems and characteristics of the vehicle. Currently only the
 *    VehicleExternalModel can be set as a property.
 *
 *    Path              : /Astrodynamics/Bodies/
 *    Version           : 4
 *    Check status      : Checked
 *
 *    Author            : D. Dirkx
 *    Affiliation       : Delft University of Technology
 *    E-mail address    : d.dirkx@tudelft.nl
 *
 *    Checker           : J. Melman
 *    Affiliation       : Delft University of Technology
 *    E-mail address    : J.C.P.Melman@tudelft.nl
 *
 *    Date created      : 10 September, 2010
 *    Last modified     : 12 January, 2011
 *
 *    References
 *
 *    Notes
 *
 *    Copyright (c) 2010-2011 Delft University of Technology.
 *
 *    This software is protected by national and international copyright.
 *    Any unauthorized use, reproduction or modification is unlawful and
 *    will be prosecuted. Commercial and non-private application of the
 *    software in any form is strictly prohibited unless otherwise granted
 *    by the authors.
 *
 *    The code is provided without any warranty; without even the implied
 *    warranty of merchantibility or fitness for a particular purpose.
 *
 *    Changelog
 *      YYMMDD    Author            Comment
 *      100910    D. Dirkx          First version of file.
 *      100915    D. Dirkx          Modified comments, 80 lines rule, etc.
 *      100928    D. Dirkx          Modifications following first checking iteration.
 *      110112    K. Kumar          Minor comment changes.
 */

#ifndef VEHICLEMODELS_H
#define VEHICLEMODELS_H

// Include statements.
#include <iostream>
#include "Astrodynamics/Bodies/vehicleExternalModel.h"
#include "Astrodynamics/Bodies/body.h"

//! Tudat library namespace.
/*!
 * The Tudat Library namespace.
 */
namespace tudat
{

//! Vehicle class.
/*!
 * Class that represents the physical model of the vehicle. Subsystem
 * objects should be created externally and then set by the corresponding
 * function, making the VehicleModel class a container for the different
 * properties.
 */
class Vehicle : public Body
{
public:

    //! Default constructor.
    /*!
     * Default constructor.
     */
    Vehicle( ) : pointerToExternalModel_( NULL ), isExternalModelSet_( false ) { }

    //! Set the external model of the vehicle.
    /*!
     * Sets the external model of the vehicle.
     * \param externalModel Vehicle external model.
     */
    void setExternalModel( VehicleExternalModel& externalModel )
    { pointerToExternalModel_ = &externalModel; isExternalModelSet_ = true; }

    //! Get external model of the vehicle.
    /*!
     * Returns the external model of the vehicle.
     * \return Pointer to vehicle external model.
     */
    VehicleExternalModel* getPointerToExternalModel( ) { return pointerToExternalModel_; }

    //! Overload ostream to print class information.
    /*!
     * Overloads ostream to print class information; prints what
     * property models have been set for the vehicle model.
     * \param stream Stream object.
     * \param vehicle Vehicle.
     * \return Stream object.
     */
    friend std::ostream& operator<<( std::ostream& stream, Vehicle& vehicle )
    {
        stream << "This is a vehicle; the following properties have been set: " << std::endl;
        if ( vehicle.isExternalModelSet_ ) { stream << "External model" << std::endl; }
        return stream;
    }

private:

    //! Pointer to external model.
    /*!
     * Pointer to object that represents vehicle exterior.
     */
    VehicleExternalModel* pointerToExternalModel_;

    //! Flag that indicates if external model has been set.
    /*!
     * Boolean that is true if an external model has been set.
     */
    bool isExternalModelSet_;
};

}

#endif // VEHICLEMODELS_H

// End of file.