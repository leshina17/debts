#include <iostream>
#include <random>

   class sensors{
      private: 
         double _thing;
      public:       
         sensors()=delete;
         sensors(int mi, int ma){
            _thing=mi+rand()%(ma-mi+1);
         }
         void print(){
            std::cout << _thing << std::endl;
         }
         double get_thing(){
            return _thing;
         }
   };
   class tempo_sensors: public sensors{
      public: 
         const double MIN_TEMP=-50;
         const double MAX_TEMP=100;
        tempo_sensors():sensors(MIN_TEMP, MAX_TEMP){};
   };
   class pressure: public sensors{
      public:
        const double MAX_PRESSURE=900;
        const double MIN_PRESSURE=600;
        pressure():sensors(MIN_PRESSURE, MAX_PRESSURE){};
   };
   class humidity: public sensors{
      public:
         const double MIN_HUMIDITY=0;
         const double MAX_HUMIDITY=100;
         humidity():sensors(MIN_HUMIDITY, MAX_HUMIDITY){};
   };
   class co2sensor: public sensors{
      public:
         const double MIN_PERCENT=0;
         const double MAX_PERCENT=100;
         co2sensor():sensors(MIN_PERCENT, MAX_PERCENT){};
   };
   class ATH22: public sensors{
      public:
         const double MIN_ATH22=0;
         const double MAX_ATH22=100;
         ATH22():sensors(MIN_ATH22, MAX_ATH22){};
   };

   class sensors_array{
      private:
         sensors** _array;
         int _size
   };
