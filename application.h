#ifndef APPLICATION_H
#define APPLICATION_H

#include <QApplication>

namespace Currency {

class Application : public QApplication
{
public:
    Application( int argc, char *argv[]);
     ~Application();
};

} //namespace Currency

#endif // APPLICATION_H
