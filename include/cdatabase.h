#ifndef CDATABASE_H
#define CDATABASE_H



namespace sgdb
{

    class CDataBase
    {
        public:
            CDataBase();
            virtual ~CDataBase();

        std::vector<CTable> getTables();
        void Tables(std::vector<CTable>& fa_tables);

        virtual unsigned int16_t Create(std::string dbname);

        protected:

        private:

        std::vector<CTable> m_tables;

    };

    #endif // CDATABASE_H

}
