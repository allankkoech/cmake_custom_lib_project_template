#include <koigui/gui.h>

Gui::Gui()
{
    std::cout << "Creating object ..." << std::endl;
}

Gui::~Gui()
{
    std::cout << "Destroying object ..." << std::endl;
}

void Gui::paint()
{
    std::cout << "Object painter called ..." << std::endl;
}