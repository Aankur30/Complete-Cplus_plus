#include "line.h"

namespace Geom
{
    line::line(const point &start, const point &end) : m_start(start), m_end(end)
    {
        cout << "this is a line constructed from the point " << endl;
    }
}