int a = 2;  //For displaying segment "a"
int b = 3;  //For displaying segment "b"
int c = 4;  //For displaying segment "c"
int d = 5;  //For displaying segment "d"
int e = 6;  //For displaying segment "e"
int f = 8;  //For displaying segment "f"
int g = 9;  //For displaying segment "g"
int pushButton1 = 13;
int pushButton2= 12;
int pushButton3 = 11;
int pushButton4 = 10;
int pushButton5 = 7;

int output1[4] = {0,0,0,0};
int B[4] = {0,0,0,0};
int output3[7] = {0,0,0,0,0,0,0};
int output4[7];
int *p;

int last1;
int cur1;

int last2;
int cur2;

int last3;
int cur3;

int last4;
int cur4;

int last5;
int cur5;

  

void setup() {
  Serial.begin(9600);
    pinMode(a, OUTPUT);  //A
  pinMode(b, OUTPUT);  //B
  pinMode(c, OUTPUT);  //C
  pinMode(d, OUTPUT);  //D
  pinMode(e, OUTPUT);  //E
  pinMode(f, OUTPUT);  //F
  pinMode(g, OUTPUT);  //G
  
    pinMode(pushButton1, INPUT);
      pinMode(pushButton2, INPUT);
        pinMode(pushButton3, INPUT);
          pinMode(pushButton4, INPUT);
            pinMode(pushButton5, INPUT);

 cur1= digitalRead(pushButton1);
 cur2= digitalRead(pushButton2);
 cur3= digitalRead(pushButton3);
 cur4= digitalRead(pushButton4);
  // put your setup code here, to run once:

}

void printar(int b[], int n){
for(int i = 0; i < n; i++)
{
  Serial.println(b[i]);
}
}

int * calculate(int A[])
{
  for(int i = 0; i < 4; i++)
{
 if(A[i]==0){
  B[i] =1;
  }
 else if (A[i]==1){
  B[i] = 0; 
 
 }
}


output3[0] = B[0]*B[1]*B[2]*B[3]+ B[0]*B[1]*A[2]*B[3] +B[0]*B[1]*A[2]*A[3]+ B[0]*A[1]*B[2]*A[3]+ B[0]*A[1]*A[2]*B[3]+ B[0]*A[1]*A[2]*A[3]+ A[0]*B[1]*B[2]*B[3]+ A[0]*B[1]*B[2]*A[3];
output3[1] = B[0]*B[1]*B[2]*B[3]+B[0]*B[1]*B[2]*A[3]+B[0]*B[1]*A[2]*B[3]+B[0]*B[1]*A[2]*A[3]+B[0]*A[1]*B[2]*B[3]+B[0]*A[1]*A[2]*A[3]+A[0]*B[1]*B[2]*B[3]+A[0]*B[1]*B[2]*A[3];
output3[2] = B[0]*B[1]*B[2]*B[3]+B[0]*B[1]*B[2]*A[3]+B[0]*B[1]*A[2]*A[3]+B[0]*A[1]*B[2]*B[3]+B[0]*A[1]*B[2]*A[3]+B[0]*A[1]*A[2]*B[3]+B[0]*A[1]*A[2]*A[3]+A[0]*B[1]*B[2]*B[3]+A[0]*B[1]*B[2]*A[3];
output3[3] = B[0]*B[1]*B[2]*B[3]+B[0]*B[1]*A[2]*B[3]+B[0]*B[1]*A[2]*A[3]+B[0]*A[1]*B[2]*A[3]+B[0]*A[1]*A[2]*B[3]+A[0]*B[1]*B[2]*B[3]+A[0]*B[1]*B[2]*A[3];
output3[4] = B[0]*B[1]*B[2]*B[3]+B[0]*B[1]*A[2]*B[3]+B[0]*A[1]*A[2]*B[3]+A[0]*B[1]*B[2]*B[3];
output3[5] = B[0]*B[1]*B[2]*B[3]+B[0]*A[1]*B[2]*B[3]+B[0]*A[1]*B[2]*A[3]+B[0]*A[1]*A[2]*B[3]+A[0]*B[1]*B[2]*B[3]+A[0]*B[1]*B[2]*A[3];
output3[6] = B[0]*B[1]*A[2]*B[3]+B[0]*B[1]*A[2]*A[3]+B[0]*A[1]*B[2]*B[3]+B[0]*A[1]*B[2]*A[3]+B[0]*A[1]*A[2]*B[3]+A[0]*B[1]*B[2]*B[3]+A[0]*B[1]*B[2]*A[3];

return output3;
}

void displayDigit(int arr[])
{
 
 
 
 
 
 //Conditions for displaying segment a
 if(arr[0]==1)
 digitalWrite(a,HIGH);
 
 //Conditions for displaying segment b
 if(arr[1]==1)
 digitalWrite(b,HIGH);
 
 //Conditions for displaying segment c
 if(arr[2]==1)
 digitalWrite(c,HIGH);
 
 //Conditions for displaying segment d
 if(arr[3]==1)
 digitalWrite(d,HIGH);
 
 //Conditions for displaying segment e 
 if(arr[4]==1)
 digitalWrite(e,HIGH);
 
 //Conditions for displaying segment f
 if(arr[5]==1)
 digitalWrite(f,HIGH);
 if (arr[6]==1)
 digitalWrite(g,HIGH);
 
}
void turnOff()
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
void loop() {

  
  last1 = cur1;
  cur1 = digitalRead(pushButton1);

  last2 = cur2;
  cur2 = digitalRead(pushButton2);

  last3= cur3;
  cur3 = digitalRead(pushButton3);

  last4= cur4;
  cur4 = digitalRead(pushButton4);

    last5= cur5;
  cur5 = digitalRead(pushButton5);

  if(last1 == HIGH && cur1== LOW) {
    Serial.print("The button 1 is pressed: ");
  
    // toggle state of LED
    if(output1[0] == 0) {
       output1[0]=1;  
       Serial.println("Changing value to 1");
       Serial.println(output1[0]);
    }
  }

  if(last2 == HIGH && cur2== LOW) {
    Serial.print("The button 2 is pressed: ");
  
    // toggle state of LED
    if(output1[1] == 0) {
       output1[1]=1;  
       Serial.println("Changing value to 1");
       Serial.println(output1[1]);
    }
  }
  if(last3 == HIGH && cur3== LOW) {
    Serial.print("The button 3 is pressed: ");
  
    // toggle state of LED
    if(output1[2] == 0) {
       output1[2]=1;  
       Serial.println("Changing value to 1");
       Serial.println(output1[2]);
    }
  }
  if(last4 == HIGH && cur4== LOW) {
    Serial.print("The button 4 is pressed: ");
  
    // toggle state of LED
    if(output1[3] == 0) {
       output1[3]=1;  
       Serial.println("Changing value to 1");
       Serial.println(output1[3]);
    }
    
  
  }
 
  if(last5 == HIGH && cur5== LOW) {
    Serial.print("The button 5 is pressed: ");

    p = calculate(output1);

      printar(p,7);
      displayDigit(p);
    
   
    }
  }
  
  

 
