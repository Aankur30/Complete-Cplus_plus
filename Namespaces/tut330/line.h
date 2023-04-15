#ifndef LINE_H
#define LINE_H

#include "point.h"
#include <iostream>
using namespace std;
namespace Geom
{
    class line
    {
    public:
        line(const point &start, const point &end);
        void print_info() const
        {
            cout << "line from " << endl;
            m_start.print_info();
            cout << "to " << endl;
            m_end.print_info();
        }

    private:
        point m_start;
        point m_end;
    };
}
#endif // LINE_H
