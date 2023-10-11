/*
* 未脚本文件添加执行权限：chmod +x start_penalty_kicker.sh
* reset time of server: shift+x
* mode: before kick off 开赛前的静止阶段
* 如果没有东西还./kill.sh的话，就会：agentspark: 未找到进程
对几个脚本文件的初步认知：
start.sh
* 对strategy.cc进行的修改可以在运行./start.sh后展示出来
* 
start_fat_proxy.sh
* 运行都不成功，不太懂它的作用，-p参数后面的代理端口？？？
start_gazebo.sh
* 场内唯一机器人不动，（after open the play on mode）
* can't kill it
start_penalty_goalie.sh
* 场内唯一机器人不动
start_penalty_kicker.sh
* 场内唯一机器人不动
start_simple_soccer.sh
* 以较乱的形式上场的机器人能够正常进行比赛，需要理解理解控制他们的源码在哪里？
*/


/* QUESTIONS:
* 现在竟然kill不死start_gazebo.sh脚本，难道是因为脚本中的代码不完善导致的？
* 
*/


/*
* proxy /ˈprɑːksi/ n.代理权；代理人
* fat proxy 厚代理：一种功能强大的代理服务器，与thin proxy（薄代理）相对
*/



