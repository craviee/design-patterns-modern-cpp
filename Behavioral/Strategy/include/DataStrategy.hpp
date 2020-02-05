#pragma once

class DataStrategy
{
    public:
        ~DataStrategy(){};
        virtual void loadData(){};
        virtual void saveData(){};
    protected:
        DataStrategy(){};

};