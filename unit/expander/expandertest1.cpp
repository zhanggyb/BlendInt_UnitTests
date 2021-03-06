#include "ExpanderTest1.hpp"
#include <blendint/gui/expander.hpp>
#include <blendint/gui/push-button.hpp>

using namespace BlendInt;

ExpanderTest1::ExpanderTest1()
: testing::Test()
{
	// TODO: add constructor code
}

ExpanderTest1::~ExpanderTest1()
{
	// TODO: add destructor code
}

/**
 * test Foo() method
 *
 * Expected result: 
 */
TEST_F(ExpanderTest1, Foo1)
{
	Init ();

    GLFWwindow* win = CreateWindow("Expander - Foo1", 640, 480);

	Context* context = Manage(new Context);
	Interface::instance->SetCurrentContext(context);

	Expander* expander = Manage(new Expander("Hello"));
	expander->MoveTo(200, 200);
	//expander->Resize(200, 200);

	context->Append(expander);

	PushButton* btn1 = Manage(new PushButton("Click me"));

	expander->Setup(btn1);

	expander->Resize(expander->GetPreferredSize());

    RunLoop(win);

    Interface::Release();

    Terminate();

	ASSERT_TRUE(true);
}
