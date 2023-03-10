

#ifndef OOP_LINEMANAGER_H
#define OOP_LINEMANAGER_H

#include "Workstation.h"
#include <vector>

namespace sdds {

    class LineManager {
        std::vector<Workstation*> m_activeLine;
        size_t m_cntCustomerOrder;
        Workstation* m_firstStation;
    public:
        LineManager(const std::string& file, const std::vector<Workstation*>& stations);
        void reorderStations();
        bool run(std::ostream& os);
        void display(std::ostream& os) const;
    };

}

#endif
