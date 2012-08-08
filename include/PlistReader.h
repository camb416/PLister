//
//  PlistReader.h
//  PLister
//
//  Created by Cameron Browning on 8/7/12.
//  Copyright (c) 2012 American Museum of Natural History. All rights reserved.
//

#ifndef PLister_PlistReader_h
#define PLister_PlistReader_h

#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/Xml.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class PlistReader {
public:
    PlistReader();
    void trace(string k);
    XmlTree fetch(string k);
    void traverse(XmlTree t);
    XmlTree fetchTraverse(XmlTree t, string k);
    void CameronParse(XmlTree t);
    
private:
    XmlTree list;
};


#endif
