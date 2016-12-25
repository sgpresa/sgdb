

#ifndef CTABLE_H
#define CTABLE_H

#include <vector>
#include "ctablecolumn.h"


namespace sgdb
{


    class CTable
    {
        public:
            CTable();
            ~CTable();

        protected:

            std::vector<CTableColumn> getColumns();
            void Columns(std::vector<CTableColumn> fa_columns);

        private:

        std::vector<CTableColumn> m_columns;

    };

    #endif // CTABLE_H
}
