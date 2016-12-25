#ifndef CRECORD_H
#define CRECORD_H


class CRecord
{
    public:
        CRecord();
        virtual ~CRecord();

        unsigned int Getm_Counter() { return m_Counter; }
        void Setm_Counter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter;
};

#endif // CRECORD_H
