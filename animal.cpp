
#include <iostream>

int main()
{
  stclass Animal {
   public:
    Animal();
    ~Animal();
    void eat();
    void sleep();
    void drink();

   private:
    int legs;
    int arms;
    int age;

    class Cat : public Animal {
     public:
      int fur_color;
      void purr();
      void fish();
      void markTerritory();

    class Bird : public Animal {
       public:
        int fur_color;
        void purr();
        void fish();
        void markTerritory();

     class Dog : public Animal {
         public:
          int fur_color;
          void purr();
          void fish();
          void markTerritory();
  };
 
}

