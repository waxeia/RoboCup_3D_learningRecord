/*

今日试跑代码：utaustinvilla3d文件夹，需要多加注意的文件如下（这周的主要任务）：
* behaviors文件夹：naobehavior.cc; naobehavior.h; strategy.cc
* worldmodel文件夹：worldmodel.cc; worldmodel.h; worldObject.h
* (第三周的任务)headers文件夹：Field.h(场地信息); headers.cc; headers.h
试跑流程：
* $ rcsoccersim3d (robovize监视器和server都已经跑起来了)
* $ chmod +x * 把所有权限全部放开
* 删除CMakeCatch.txt(配置文件，存储全局缓存变量，用于恢复用户设置等)文件和makefile文件（why?）
* $ cmake . 根据当前目录下的CMakeLists.txt文件，生成Makefile，用于构建项目,write some build files to current directory
* $ make -j8(flexible,实际分配的电脑内核数量，-j参数指定并行度，默认为1) first: Scanning dependencies of target agentspark, 执行新生成的Malefile，building many .o files
* 

*/


/* 报错及解决方案整理：
waxeia@waxeia-virtual-machine:~/Myself/package/utaustinvilla3d$ ./start.sh 
bash: ./start.sh：/bin/bash^M：解释器错误: 没有那个文件或目录
sed -i 's/\r$//' start.sh
*/
