#include "CarProducerAdapter.hpp"

void CarProducerAdapter::produce(ColorEnum color)
{
    if(producer == "Tesla")
    {
        TeslaProducer p;
        p.produce(color);
    }
    else if(producer == "Huawei")
    {
        HuaweiProducer p;
        p.produce(color);
    }
    else if(producer == "Old Car")
    {
        if(color == ColorEnum::Black)
        {
            OldCarProducer p("Black");
            p.build(1);
        }
        else if(color == ColorEnum::Gray)
        {
            OldCarProducer p("Gray");
            p.build(1);
        }
        else if(color == ColorEnum::White)
        {
            OldCarProducer p{"White"};
            p.build(1);
        }
        else if(color == ColorEnum::Blue)
        {
            OldCarProducer p{"Blue"};
            p.build(1);
        }
        else if(color == ColorEnum::Red)
        {
            OldCarProducer p{"Red"};
            p.build(1);
        }
        else if(color == ColorEnum::Green)
        {
            OldCarProducer p{"Green"};
            p.build(1);
        }
    }
}