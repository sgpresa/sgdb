#include "ctablecolumn.h"

namespace sgdb
{


    CTableColumn::CTableColumn()
    {
        //ctor
    }

    CTableColumn::~CTableColumn()
    {
        //dtor
    }


    void CTableColumn::Type(CTableColType fa_type)
    {
        this->m_type = fa_type;
    }

    CTableColType CTableColumn::getType()
    {
        return this->m_type;
    }

    void CTableColumn::Length(unsigned int16_t fa_length)
    {
        this->m_length = fa_length;
    }

    unsigned int16_t CTableColumn::getLength()
    {
        return this->m_length;
    }

    void CTableColumn::AutoInc(bool fa_autoInc)
    {



    }


}
