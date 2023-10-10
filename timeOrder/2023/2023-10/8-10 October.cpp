/*
* double类型的精度为15-16位，非要到16位，也用double来实现了
* GNU GCC可以识别.C、.cc、.cpp、.CPP、.c++、.cp或.cxx等作为C++文件
* 访问修饰符（public: protected: private）：指定类成员的访问级别
* 抽象基类：一种特殊的类，它不能被实例化，只能作为其他派生类的基类---多态性
* * 
通过在派生类中重写虚函数，可以使派生类中的虚函数更加多样化，更有解决指定问题的针对性
* *   class AbstractClass {
      public:
          virtual void pureVirtualFunction() = 0; // 纯虚函数
      };
      
      class DerivedClass : public AbstractClass {
      public:
          void pureVirtualFunction() override {
              // 在派生类中实现纯虚函数
          }
      };
* PKShooterBehavior(const std::string teamName, int uNum, const map<string, string>& namedParams_, const string& rsg_) 
    : NaoBehavior(teamName, uNum, namedParams_, rsg_) {
        // 派生类构造函数的实现
    }
//** 子类构造函数中的参数传递给父类的构造函数可以使用成员初始化列表的方法来完成
* 

* 第一次随手改了一下下球员的上场布局，NaoBehavior类中的beam方法中定义的，我为了实现针对每个球员，
* * 就在NaoBehavior中自建了个playerPosition方法，记录：camke . 时没有报错，但在make时报错如下：
/home/waxeia/Myself/package/utaustinvilla3d/behaviors/naobehavior.h:48:7: note: ‘class NaoBehavior’ defined here
   48 | class NaoBehavior : public Behavior {
      |       ^~~~~~~~~~~
* 不是说在类中创建个方法就完事了，还得在相应的头文件中声明一下这个方法，声明如下：
* * virtual void playerPosition(double& beamX, double& beamY, double& beamAngle, double x, double y, double angle);
* * virtual: 声明一个函数为虚函数，虚函数用于实现多态性，在基类中声明为虚函数时，可以在派生类中被重写************不太理解************
* 为某个类创建一个新的成员函数的时候，要在该类中提前声明该成员函数
* 在子类中调用父类中的函数，直接使用方法名就行，无需指明父类名，系统会自动调用
* 定义命名空间时，上方的注释语句会被展示出来哦
* 析构函数：在对象生命周期结束时被调用的一种特殊函数，它的主要作用是进行清理工作，包括释放内存、释放资源、处理异常
*/







/*
* goalkeeper GK 门将；守门员  goalie /ˈɡoli/
* forwards n.前锋
* * centre forward 中锋
* * second striker 二前锋
* * winger 边锋
* midfielder n.中场：在攻防两端都起着关键作用
* * defensive midfielder 防守型中场
* * actacking midfielder 进攻型中场
* * winger 边路中场
* defender n.后卫：主要负责防守
* * fullback n.边后卫  back
* * centre back 中后卫
* * wing back 边路后卫
* on ball 对持球人防守
* wing left 左翼； wing right 右翼

* parser /ˈpɑːrsər/ n.分析程序；解析器
* particle /ˈpɑːrtɪk(ə)l/ n.微粒；极少量
* Temporary home 代码临时的家（有爱）
* velocity /vəˈlɑːsəti/ n.速度；速率
* unit n.（计量）单位；单元
* Z-axis /ˈzidˈæksɪs/ n.Z轴
* eliminate /ɪˈlɪmɪneɪt/ v.剔除；消除
* trim v.修剪
* approximate /əˈprɑːksɪmət/ v.接近；类似 adj.大概的；近似的
* implement v.贯彻；执行
* be designed for 为……而设计
* appropriate for 适合于……
* alignment /əˈlaɪnmənt/ n.排成直线
* relative to 相对于
* complement /ˈkɑːmplɪment/ v.补充；补足
* map v.映射
* preset /ˌpriːˈset/ adj.预先调整的
* avert /əˈvɜːrt/ v.防止；避免
* stretch/stretʃ/ out 伸展（身体）
* stretch v.变大；拉长；延伸
* gazebo n.眺望台
* left n.面向对手球门的左半场
* kick off 开始
* half (球场的)半场
* penalty /ˈpenəlti/ n.罚球
* elbow /ˈelboʊ/ n.肘部
* index->indices
* segment /ˈseɡmənt/ n.部分  body segment
* tolerance /ˈtɑːlərəns/ n.容许偏差
* identity /aɪˈdentəti/ n.恒等运算；恒等式
* dribble /ˈdrɪbl/ v.运球
* kinematics /ˌkɪnəˈmætɪks/ n.运动学
* ground truth 地面实况
* comment out 注释掉
* sight v.瞄准；n.视力
* odometry n.量距
* dummy /ˈdʌmi/ n.假人；人体模型
* localization /ˌloʊkələˈzeɪʃn/ n.定位
* matrix  pl:matrices /ˈmeɪtrɪsiːz/
*/

/*
我的学习感悟：
* VScode中的一个文件夹下有 .h 文件和相应的 .cc 文件，在 .h 文件中先通过预处理指令做好防止头文件被重复包含的保护工作后，引入其他相关的头文件（父类头文件），
* 然后进行基类的定义，如果是个派生类就声明好相应的父类，然后就是声明类中的各个成员变量和成员函数（包括构造函数、虚函数等）了，
* 同时通过访问修饰符指明成员对应的访问级别。在 .cc 文件中，包含需要的头文件（就是子类 .h 文件）后，
* 对 .h 文件中声明的各类成员函数进行功能扩充（包括构造函数的参数是否需要向父类传递、）
*/


/*
* 学习如何使用C++定义模板类，学习完之后，再回顾回顾headers文件夹
*/



