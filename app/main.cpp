#include <iostream>
#include <AnalogSensor.hpp>

int main()
{
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    //Not sure the intend of these lines are; not condition where terminator is
    // set to a value was defined.  A logic can be added for for now since not useful
    // in the code it is being removed
    /* bool terminator;
     if( terminator )
     {
       std::cout << "DONE" << std::endl;
     }*/
     return 0;
}
