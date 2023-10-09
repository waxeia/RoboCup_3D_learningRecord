/*
* double类型的精度为15-16位，非要到16位，也用double来实现了
* 第一次随手改了一下下球员的上场布局，NaoBehavior类中的beam方法中定义的，我为了实现针对每个球员，
* * 就在NaoBehavior中自建了个playerPosition方法，记录：camke . 时没有报错，但在make时报错如下：
/home/waxeia/Myself/package/utaustinvilla3d/behaviors/naobehavior.h:48:7: note: ‘class NaoBehavior’ defined here
   48 | class NaoBehavior : public Behavior {
      |       ^~~~~~~~~~~
* 不是说在类中创建个方法就完事了，还得在相应的头文件中声明一下这个方法，声明如下：
* * virtual void playerPosition(double& beamX, double& beamY, double& beamAngle, double x, double y, double angle);
* * virtual: 声明一个函数为虚函数，虚函数用于实现多态性，在基类中声明为虚函数时，可以在派生类中被重写************不太理解************
*/







/*
* goalkeeper GK 守门员
* 
*/
