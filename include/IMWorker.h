#ifndef IMWORKER_H
#define IMWORKER_H

class IMWorker
{
    int value;
    public:
        void reset();
        int getValue();
        void setValue(int number);
};

#endif