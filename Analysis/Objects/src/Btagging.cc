/**\class MssmHbb Btagging.cc Analysis/Objects/src/Btagging.cc

 Description: [one line class summary]

 Implementation:
     [Notes on implementation]
*/
//
// Original Author:  Roberval Walsh Bastos Rangel
//         Created:  Mon, 20 Oct 2014 14:24:08 GMT
//
//

// system include files
#include <iostream>
// 
// user include files
#include "Analysis/Objects/interface/Btagging.h"


//
// class declaration
//

using namespace analysis;
using namespace analysis::tools;
using namespace analysis::objects;

//
// constructors and destructor
//
Btagging::Btagging(const std::string & inputFilelist, const std::string & evtinfo) : Analysis(inputFilelist,evtinfo)
{
}

Btagging::~Btagging()
{
   // do anything here that needs to be done at desctruction time
   // (e.g. close files, deallocate resources etc.)
}


//
// member functions
//
// ------------ method called for each event  ------------

