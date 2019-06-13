const int TEST_PIN=13;
class A
{
  public:
    int sensor=A0;
    int sensVal=0;
    virtual void led()
    {
      if(sensVal>500)
      {
        digitalWrite(TEST_PIN,LOW);
      }
       
      else
      {
        digitalWrite(TEST_PIN,HIGH);
        delay(300);
        digitalWrite(TEST_PIN,LOW);
        delay(300);
        
      }
   }
};
A*a;
void setup()
{ 
   a=new A();
   pinMode(TEST_PIN,OUTPUT);
   Serial.begin(9600);
}

void loop()
      }
{
   a->sensVal=analogRead(a->sensor);
   Serial.println(a->sensVal);
   a->led();

