/*
about RoboCup3D competition
* client-server mode（CS架构模式），client客户端，就是agent
* agent: 智能体；球员
* server: send messages(information of soccer field->编码->message->解码->information->计算；information of decision-making->编码->message to server->解码->simulation) 如此反复……
* * 理论上如此反复一次是0.02s（人为规定），通信的格式涉及到原理的东西，暂时先不深究（机器人技术这门课会具体地讲解）
* 计算；information of decision-making：this is what I should code
*/


/*
* override /ˌoʊvərˈraɪd/ v.操控
* beam /biːm/ n.（横）梁；here: 球员的上场位置
*/
