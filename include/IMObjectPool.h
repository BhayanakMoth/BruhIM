#ifndef IMOBJECTPOOL_H
#define IMOBJECTPOOL_H

#include<list>

#include "IMWorker.h"

class IMObjectPool
{
    private:
        std::list<IMWorker*> workers;
        static IMObjectPool* instance;

    public:
        static IMObjectPool* getInstance();

        IMWorker* getWorkers();

        void returnWorker(IMWorker* workerObject);
};

#endif