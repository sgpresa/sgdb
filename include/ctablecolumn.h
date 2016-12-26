/*
** 25 October 16
**
**
**
*/



#ifndef CTABLECOLUMN_H
#define CTABLECOLUMN_H

namespace sgdb
{
    enum class CTableColType {
		BLOB = 1,
		BLOB64 = 2,
		DOUBLE = 3,
		INTEGER = 4,
		INTEGER64 = 5,
		SQLITENULL = 6,
		TEXT = 7,
		TEXT16 = 8,
		TEXT64 = 9,
		VALUE = 10,
		ZEROBLOB = 11,
		ZEROBLOB64 = 12
	};



    class CTableColumn
    {




        public:
            CTableColumn();


            void Type(CTableColType fa_type);
            CTableColType getType();

            void Length(unsigned int16_t fa_length);
            unsigned int16_t getLength();

            void autoInc(bool fa_autoInc);
            bool getAutoInc();

        virtual ~CTableColumn();

        protected:

        private:

        CTableColType m_type;
        unsigned int16_t m_length;
        bool m_autoincrement;
        bool m_primaryKey;



    };

}

#endif // CTABLECOLUMN_H
