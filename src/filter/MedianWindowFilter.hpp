#include "WindowFilter.hpp"

class MedianWindowFilter : public WindowFilter {
   public:
    MedianWindowFilter(unsigned int maxWindowSize);

    double filterStep(double measurement);

    void initialize() override;

   private:
    void filterStep(DataProvider& data) override;
};