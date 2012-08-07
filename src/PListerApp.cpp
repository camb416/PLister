#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "PlistReader.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class PListerApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
;
};

void PListerApp::setup()
{
    PlistReader r = PlistReader();
    r.trace("Steps");
}



void PListerApp::mouseDown( MouseEvent event )
{
}

void PListerApp::update()
{
}

void PListerApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_BASIC( PListerApp, RendererGl )
