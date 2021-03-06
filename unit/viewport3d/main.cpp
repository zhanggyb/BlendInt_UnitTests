/*
 * Unit test for Viewport3D
 */

#include <Common/Window.hpp>

#include <blendint/gui/viewport3d.hpp>
#include <blendint/gui/push-button.hpp>

//#include <gtest/gtest.h>

// The fixture for testing class Foo.

using namespace BlendInt;

/*
class Viewport3DTest: public testing::Test
{

protected:

	Viewport3DTest () {

	}

	virtual ~Viewport3DTest () {

	}

	virtual void SetUp () {
		// Code here
	}

	virtual void TearDown () {

	}

};

TEST_F(Viewport3DTest, CheckTimeOut)
{
    // TODO
}

*/

int main (int argc, char* argv[])
{
    BLENDINT_EVENTS_INIT_ONCE_IN_MAIN;

    Init ();

    GLFWwindow* window = CreateWindow("Timer Test", 640, 480);
	Context* context = Manage(new Context);
#ifdef DEBUG
	context->set_name("Context");
#endif
	Interface::instance->SetCurrentContext(context);


    // add test code here
    Viewport3D* view = new Viewport3D;

    view->Resize(600, 440);
    view->SetPosition(20, 20);

    PushButton* button = new PushButton("OK");
    button->SetPosition(1000, 400);

    context->Append(view);

    RunLoop(window);

    Terminate();
	
	//return RUN_ALL_TESTS();
	return 0;
}

