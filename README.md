### TODO
1- Update setup.py
PARENT_SCOPE

git clone pybind11 & esmini in this folder


    /tmp/pip-req-build-iw0zvwm9/esmini/EnvironmentSimulator/Modules/ScenarioEngine/SourceFiles/OSIReporter.hpp:17:10: fatal error: osi_sensordata.pb.h: No such file or directory
       17 | #include "osi_sensordata.pb.h"
          |          ^~~~~~~~~~~~~~~~~~~~~
    compilation terminated.

First you have to cmake . in the ESMINI directory to get osi_sensordata.pb.h file
Then go back to esmini-pybind11 directory and 