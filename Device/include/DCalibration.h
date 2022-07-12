
/*  © Copyright CERN, 2015. All rights not expressly granted are reserved.

    The stub of this file was generated by quasar (https://github.com/quasar-team/quasar/)

    Quasar is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public Licence as published by
    the Free Software Foundation, either version 3 of the Licence.
    Quasar is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public Licence for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Quasar.  If not, see <http://www.gnu.org/licenses/>.


 */


#ifndef __DCalibration__H__
#define __DCalibration__H__

#include <Base_DCalibration.h>

namespace Device
{

class
    DCalibration
    : public Base_DCalibration
{

public:
    /* sample constructor */
    explicit DCalibration (
        const Configuration::Calibration& config,
        Parent_DCalibration* parent
    ) ;
    /* sample dtr */
    ~DCalibration ();

    /* delegators for
    cachevariables and sourcevariables */


    /* delegators for methods */
    UaStatus callGetCalibConstants (
        UaString& version
    ) ;
    UaStatus callDoCalibration (
        OpcUa_UInt32 FEMB_ID,
        OpcUa_Boolean& success
    ) ;

private:
    /* Delete copy constructor and assignment operator */
    DCalibration( const DCalibration& other );
    DCalibration& operator=(const DCalibration& other);

    // ----------------------------------------------------------------------- *
    // -     CUSTOM CODE STARTS BELOW THIS COMMENT.                            *
    // -     Don't change this comment, otherwise merge tool may be troubled.  *
    // ----------------------------------------------------------------------- *

public:

private:



};

}

#endif // __DCalibration__H__