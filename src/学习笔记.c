#include <stdio.h>
#include <stdlib.h>


void AAA()
{
	if (0)
	{
		//一：
		//oracle实例与oracle数据库的关系：
		//数据库：看作是物理文件集合、实例：内存映射（内存数据结构）
		//所以是通过实例 来操作 数据库的
		// 实例是放在内存中的
		//1个oracle服务器：oracle实例 + oracle数据库
		

		//原先：客户端---web服务器---数据库
		//如果当web服务器---数据库之间断开，那就无法操作数据库了
		//有一个解决方案：再创建一个服务器，其中一个不能用时，就可以用另一个
		//更好的解决方案，服务器通过一个app 连接到 实例 实例再操作数据库
		//即客户端---实例---数据库
		//当一个实例不能用时，可以创建另一个实例，实例的创建成本低很多
		// 不必进行app的备份，就能进行24小时不间断的服务
		//实例集群的好处：1.负载均衡、2.失败迁移、
		//RAC(real application cluster)(不清楚啥意思，也不一定是好处，自己搜了看)
	}
	if (1)
	{
		//oracle基本开发概念：
		//app----实例----数据库			//实例----数据库之间进行的是读写操作，这里的知识是：后台进程编程
		//app----(PGA--SGA)----数据库	//app--PGA与PGA--SGA 是两次提交。之间的问题是维护人员的工作，确保写入数据能到达数据库
		//app----PGA之间是app有一个commit操作

		//两次提交：第1次提交：app把数据提交到PGA。第2次提交：PGA提交SGA区（写）
		//闪回：撤销一个已经commit的操作
		//开启oracle行移动功能=》是dba管理课程的内容，感兴趣可学习=》两次提交原理

		//oracle数据库的物理结构与逻辑结构
		//详情看课件：有整体结构
		//下面讲一下目录一些对应的重要的文件
		//sqlplus.exe:PATH配置的路径去找的
		//orcl：存放物理结构的表文件 目录下有那些.DBF的文件
		//LIB：编程开发、头文件、和库资源文件
		//这三个目录是要特别小心注意的


	}
	if (2)
	{
		//oracle server 服务器的安装
		//数据库名：可抽象的理解成实例的代名词 ：常用 orcl root 123456 sys
		//口令管理中，oracle数据库默认有一大堆用户，（去掉勾就解锁了）教程解锁了 soctt 和 hr用户 口令应该就象密码一样吧

		//oracle client 客户端的安装
		//客户端作用，发送报文到oracle数据库
		//OracleServiceORCL服务是我们要了解的，即oracle一大堆进程的服务 控制面板\系统和安全\管理工具\服务 找到它
		//它的路径在我电脑上为d:\oracle\product\10.2.0\db_1\bin\ORACLE.EXE ORCL
		//OracleOraDb10g_home1TNSListener 端口：1521不变 是在后台监听请求的 服务。后台监听服务
		//OracleDBConsoleorcl 是控制台服务（就是命令行操作）

		//oracle 服务器 提供一个全局数据库名orcl
		//所以客户端要配置连上orcl

		//oracle client 客户端有很多种
		//1.图形界面：企业级管理控制台
					//通过可管理服务器（配置\表的查询）

		//2.sqlplus:字符界面
					//通过命令行可以达到与图形界面一样的功能（更锻炼我们理解，推荐）

		//sqldevelop.exe 是11g的版本的工具（有的带Java虚拟机 ，有的不带（java虚拟机安装包），老师说没卵用，太次）
	}
	if (3)
	{
		//sql语言重要性和学习方法
		//sql语言：是脚本语言，为功能而生的语言，如ssh ongl html paython shell 这些一样
		//最快速的学习方式：由于脚本语言与编程语言不一样，所以通过案例来学习最快，因为要记住命令
		//所以要猛敲代码，敲案例

		//普通用户登录：
		// 方式一：sqlplus		//登陆的命令
		//			scott		//用户名
		//			scott		//密码
		// 方式二：sqlplus scott/scott	用户名/密码
		//超级用户登录：（不要密码）
		//sqlplus /nolog		//开始登录
		//connect /as sysdba	//连接超级用户	connect：连接	sysdba：超级用户
		//不需要密码的原因：在我们安装oracle时，默认就已经将windows的用户连接，关联起来了，自动关联
		//sys system用户已经添加到超级用户组中，（这里有进阶的知识，想知道怎么添加的，感兴趣可学课程 “管理员课程”）
	}
	if (4)
	{
		//select基本语句  （查询语句）	忘了就看命令课件，整理好了
		//关键字不能缩写，不能分行， 加减乘除运算有符号优先级，注意区分中文英文的标点符号
		//将以下的命令整合到开头方便阅读，再下面的是敲代码过程
		// 1.查看列：
			//SQL > select * from emp;		//emp是表名	
			//2	;						//要加分号，可以加在上面的语句后
					
		// 2.缩进数据，使画面更简洁、还有分页、清屏
			//SQL > set linesize 140		//这个命令，就简化了显示出来的数据，整体更整洁，更容易看，每行最多140个字符							
			//SQL > set pagesize 140		//这个命令的意思是，140行成一页
			//*SQL> host cls				//清除当前屏幕上显示的内容，清屏
		// 3.查看表
			//SQL > select* from tab
		// 4.查看表的每个字段
			//SQL > desc dept	
		// 5.查询列
			//查询所有列
			//SQL > select* from emp;
			//查询部分列
			//SQL> select empno, job, mgr, sal from emp;		//选择输出特定的 标识列
			//SQL> ed											//如果输错了要改，输入ed，会进入到记事本，里面有命令，修改后保存关闭
			//已写入 file afiedt.buf
			//SQL > /											//然后输入/ 就可以执行上面修改过的命令
			//给标识起别名
			//SQL > select empno as "员工编号", ename "员工名字", job 工作, sal "月 薪" from emp;
			//去掉重复的列 distinct
			//SQL> select distinct deptno from emp;
		//6.清屏
			//*SQL> host cls									//清除当前屏幕上显示的内容，清屏
		
		//SQL > select * from emp		//查看列emp应该是文件名
		// 2 ；							//出现2 我们加上 ；回车即可
		// 发现打印出来的数据太杂乱
		//SQL > set linesize 140		//每行最多140个字符	
										//但发现有换页问题，才几行就分页了
		//SQL > set pagesize 140		//这个命令的意思是，140行成一页

		//*SQL> host cls				//清除当前屏幕上显示的内容，清屏

		//SQL > select* from tab		//打印scott用户的表，出现了4个表，
		//2 ;			（tab：数据字典：超级管理员分配给普通用户的资源，在系统创建的时候就已经生成了）
		/*TNAME                          TABTYPE  CLUSTERID
			------------------------------ ------ - ----------
			DEPT	//（部门表）            TABLE
			EMP                            TABLE
			BONUS                          TABLE
			SALGRADE                       TABLE*/

		//SQL > desc dept				//查看部门表的每一个字段	//3个字段
			/*名称                                                                          是否为空 ? 类型
			---------------------------------------------------------------------------- - -------- ----------------------------------------------------
			DEPTNO  //部门编号                                                              NOT NULL NUMBER(2)
			DNAME	//名字                                                                  VARCHAR2(14)
			LOC     //部门所在位置                                                           VARCHAR2(13)*/

		/*SQL > select* from dept		//查看部门表
			2;*/						
		/*DEPTNO DNAME          LOC		//分别为：编号、名字、位置
			---------- -------------- ------------ -
			10 ACCOUNTING     NEW YORK	//纽约
			20 RESEARCH       DALLAS	//达拉斯
			30 SALES          CHICAGO	//芝加哥
			40 OPERATIONS     BOSTON*/	//波士顿

		//SQL > select* from emp;		//可以加上 ; 避免出现2再输入 ;
		//编号   名字       工作		 上级的编号  入职时间				月薪			奖金		部门编号
		/*EMPNO ENAME      JOB              MGR HIREDATE              SAL       COMM     DEPTNO
			---------- ---------- -------- - ---------- -------------- ---------- ---------- ----------
			7369 SMITH      CLERK           7902 17 - 12月 - 80            800                    20
			7499 ALLEN      SALESMAN        7698 20 - 2月 - 81           1600        300         30
			7521 WARD       SALESMAN        7698 22 - 2月 - 81           1250        500         30
			7566 JONES      MANAGER         7839 02 - 4月 - 81           2975                    20
			7654 MARTIN     SALESMAN        7698 28 - 9月 - 81           1250       1400         30
			7698 BLAKE      MANAGER         7839 01 - 5月 - 81           2850                    30
			7782 CLARK      MANAGER         7839 09 - 6月 - 81           2450                    10
			7788 SCOTT      ANALYST         7566 19 - 4月 - 87           3000                    20
			7839 KING       PRESIDENT            17 - 11月 - 81           5000                    10
			7844 TURNER     SALESMAN        7698 08 - 9月 - 81           1500          0         30
			7876 ADAMS      CLERK           7788 23 - 5月 - 87           1100                    20
			7900 JAMES      CLERK           7698 03 - 12月 - 81            950                    30
			7902 FORD       ANALYST         7566 03 - 12月 - 81           3000                    20
			7934 MILLER     CLERK           7782 23 - 1月 - 82           1300                    10*/

		//select基本语句：
		//select  选择哪些标识
		//from	  标识从哪个表中选择
		//select * 选择全部列

		//查询所有列
		//SQL > select* from emp;
		//查询部分列
		//SQL> select empno, job, mgr, sal from emp;		//选择输出特定的 标识列
		//SQL> ed											//如果输错了要改，输入ed，会进入到记事本，里面有命令，修改后保存关闭
		//已写入 file afiedt.buf
		//SQL > /											//然后输入/ 就可以执行上面修改过的命令
		//给标识起别名
		//SQL > select empno as "员工编号", ename "员工名字", job 工作, sal "月 薪" from emp;
				//第1次加 as “”； 第二次可以不加as； 第3次 as “” 都不加； 第4次因为有空格，所以要加上“”
				//这3种方式都可以起别名 第4种必须加“” 因为有空格
		/*员工编号 员工名字   工作           月 薪
			---------- ---------- -------- - ----------
			7369 SMITH      CLERK            800
			7499 ALLEN      SALESMAN        1600
			7521 WARD       SALESMAN        1250
			7566 JONES      MANAGER         2975
			7654 MARTIN     SALESMAN        1250
			7698 BLAKE      MANAGER         2850
			7782 CLARK      MANAGER         2450
			7788 SCOTT      ANALYST         3000
			7839 KING       PRESIDENT       5000
			7844 TURNER     SALESMAN        1500
			7876 ADAMS      CLERK           1100
			7900 JAMES      CLERK            950
			7902 FORD       ANALYST         3000
			7934 MILLER     CLERK           1300*/

		//标识进行运算
		//SQL > select sal*12 "月 薪" from emp;	//注意sal*12 即这些标识可以进行 +-*/ 的运算
		/*月 薪									//但只有数字为元素的成员能运算，字符的不可以
			----------
			9600		//对比上面打印的列，乘了12
			19200
			15000
			35700
			15000
			34200
			29400
			36000
			60000
			18000
			13200
			11400
			36000
			15600*/

		//去掉重复的列 distinct
		//SQL> select distinct deptno from emp;
			/*DEPTNO
			----------
			30			//把重复的列都去掉了
			20
			10*/
	}
	if (5)
	{
		//NULL空值讲解
		//1.NULL表示空、无效、未指定的 ，它不是0或空格，NULL与任何数计算都为NULL
		//2.且NULL ！= NULL 
		//下面开始演示：

		//1.NULL与任何数计算都为NULL
			//SQL > select ename, job 工作, sal 月薪, sal * 12 年薪, comm 奖金, (sal * 12) + comm 年收入 from emp;
			//因为有的奖金为NULL，所以进行运算后，有的年收入也变为NULL了
				/*	ENAME      工作            月薪       年薪       奖金     年收入
					---------- -------- - ---------- ---------- ---------- ----------
					SMITH      CLERK            800       9600
					ALLEN      SALESMAN        1600      19200        300      19500
					WARD       SALESMAN        1250      15000        500      15500
					JONES      MANAGER         2975      35700
					MARTIN     SALESMAN        1250      15000       1400      16400
					BLAKE      MANAGER         2850      34200
					CLARK      MANAGER         2450      29400
					SCOTT      ANALYST         3000      36000
					KING       PRESIDENT       5000      60000
					TURNER     SALESMAN        1500      18000          0      18000
					ADAMS      CLERK           1100      13200
					JAMES      CLERK            950      11400
					FORD       ANALYST         3000      36000
					MILLER     CLERK           1300      15600*/

			//修改年收入为 与0计算
			//SQL > select sal 月薪, sal * 12 年薪, comm 奖金, ((sal * 12) + nvl(comm, 0)) 年收入 from emp;
			//((sal * 12) + nvl(comm, 0)) 中 nvl(comm, 0)就是使为NULL的值变为0
					/*	月薪       年薪       奖金     年收入
						---------- ---------- ---------- ----------
						800       9600                  9600
						1600      19200        300      19500
						1250      15000        500      15500
						2975      35700                 35700
						1250      15000       1400      16400
						2850      34200                 34200
						2450      29400                 29400
						3000      36000                 36000
						5000      60000                 60000
						1500      18000          0      18000
						1100      13200                 13200
						950      11400                 11400
						3000      36000                 36000
						1300      15600                 15600*/

		//2.NULL ！= NULL 
			//查询奖金是NULL的行
			/*SQL > select* from emp		//要换行输入，第一排就不加分号
				2  where comm is NULL;*/	//这语句是挑选comm为NULL的行
					/*	EMPNO ENAME      JOB              MGR HIREDATE              SAL       COMM     DEPTNO
						---------- ---------- -------- - ---------- -------------- ---------- ---------- ----------
						7369 SMITH      CLERK           7902 17 - 12月 - 80            800                    20
						7566 JONES      MANAGER         7839 02 - 4月 - 81           2975                    20
						7698 BLAKE      MANAGER         7839 01 - 5月 - 81           2850                    30
						7782 CLARK      MANAGER         7839 09 - 6月 - 81           2450                    10
						7788 SCOTT      ANALYST         7566 19 - 4月 - 87           3000                    20
						7839 KING       PRESIDENT            17 - 11月 - 81           5000                    10
						7876 ADAMS      CLERK           7788 23 - 5月 - 87           1100                    20
						7900 JAMES      CLERK           7698 03 - 12月 - 81            950                    30
						7902 FORD       ANALYST         7566 03 - 12月 - 81           3000                    20
						7934 MILLER     CLERK           7782 23 - 1月 - 82           1300                    10*/

			//查询奖金不为NULL的行
			/*SQL > select* from emp
				2  where comm is not NULL;*/	//注意not只能加在那个位置

					/*	EMPNO ENAME      JOB              MGR HIREDATE              SAL       COMM     DEPTNO
						---------- ---------- -------- - ---------- -------------- ---------- ---------- ----------
						7499 ALLEN      SALESMAN        7698 20 - 2月 - 81           1600        300         30
						7521 WARD       SALESMAN        7698 22 - 2月 - 81           1250        500         30
						7654 MARTIN     SALESMAN        7698 28 - 9月 - 81           1250       1400         30
						7844 TURNER     SALESMAN        7698 08 - 9月 - 81           1500          0         30*/

			//试一下能不能用 ！= NULL
			/*SQL > select* from emp			//发现不能这样写 所以 NULL ！= NULL
				2   where comm is != NULL;*/	
					/*where comm is != NULL
						*
						第 2 行出现错误:
					ORA - 00933 : SQL 命令未正确结束*/
	}
	if (6)
	{
		//连接符和虚表
		//1.连接符： || 
		//2.虚表（也叫伪表）：	dual	（数据字典：超级管理员分配给普通用户的资源，在系统创建的时候就已经生成了）专门提供给我们用的，当我们的数据与任何表都没有关联时，就用它，比如查时间
		//由下面的实验得出：select语句的检索列 可以是任何来源
		//记住去重的关键字 distinct

		//1.连接符： || 
			//SQL > select '111' || '222' 连接, ename from emp;	//注意是单引号
			//发现打印了14行，因为emp的表就有14行，下面换用dual虚表试试
					/*	连接   ENAME
						------ ----------
						111222 SMITH
						111222 ALLEN
						111222 WARD
						111222 JONES
						111222 MARTIN
						111222 BLAKE
						111222 CLARK
						111222 SCOTT
						111222 KING
						111222 TURNER
						111222 ADAMS
						111222 JAMES
						111222 FORD
						111222 MILLER*/

		//2.伪表
			//SQL > select '111' || '222' 连接 from dual;	//成功利用不关联的伪表打印1行

					/*	连接
						------
						111222*/

			//利用伪表打印时间	//注意是sysdate   e结尾 不是data
			//SQL > select sysdate from dual;

					/*	SYSDATE
						--------------
						01 - 12月 - 21*/
	}
	if (7)
	{
		// SQL与SQLplus的区别
		//SQL语言的语法：select update delete	
		//SQLplus工具的命令（命令参数）:ed set col
		//SQL是一种语言 不可缩写关键字 使用语句控制数据库中的表的定义信息与数据
		//SQLplus是一种环境（或程序、工具）关键字可以缩写，不能改变数据库中的值
		//可以看成SQL是修改数据库的数据，而SQLplus是对返回的数据进行显示整理

		//图形界面，由SQL*plus结尾的那个服务提供，自己找
		//在11g版本中，web、企业级管理控制台的图形界面都取消了
		//图形界面比较细致，适合新手，但是11g取消了，原因似乎是因为传输报文容易被篡改

		//修改列宽
		//SQL> col ename for a20;			//使ename这一列后的列宽变为20，				（对字符）
		//SQL > col empno for 999999999;	//使empno开始，往后的所有数字列的前列宽变大		（对数字）
		//下面有演示

		//SQL > help topic //会有相关的所有关键字（高手都是多看了两眼）
		{
			//以下是help查出来的SQLplus 的语句

				/*Help is available on the following topics :

			/
				@
				@@
				ACCEPT
				APPEND
				ARCHIVE LOG
				ATTRIBUTE
				BREAK
				BTITLE
				CHANGE
				CLEAR
				COLUMN
				COMPUTE
				CONNECT
				COPY
				DEFINE
				DEL
				DESCRIBE
				DISCONNECT
				EDIT
				EXECUTE
				EXIT
				GET
				HELP
				HOST
				INDEX
				INPUT
				LIST
				MENU
				PASSWORD
				PAUSE
				PRINT
				PROMPT
				QUIT
				RECOVER
				REMARK
				REPFOOTER
				REPHEADER
				RESERVED WORDS(PL / SQL)
				RESERVED WORDS(SQL)
				RUN
				SAVE
				SET
				SHOW
				SHUTDOWN
				SPOOL
				SQLPLUS
				START
				STARTUP
				STORE
				TIMING
				TOPICS
				TTITLE
				UNDEFINE
				VARIABLE
				WHENEVER OSERROR
				WHENEVER SQLERROR
				XQUERY*/
		}

		//查对应的关键字的用法 ，比如查ed
					/*SQL > ? edit

						EDIT
						----

						Invokes an operating system text editor on the contents of the
						specified file or on the contents of the SQL buffer.The buffer
						has no command history list and does not record SQL * Plus commands.

						ED[IT][file_name[.ext]]

						Not available in iSQL * Plus*/

		//ed可以写入到对应文件	比如写到d盘下的1.exe
			//SQL > ed d : / 1.exe

		//修改列宽
			//SQL> col ename for a20;		//使ename这一列后的列宽变为20，				（对字符）
			//SQL > col empno for 999999999;//使empno开始，往后的所有数字列的前列宽变大		（对数字）
			//SQL > select* from emp;

					/*	EMPNO ENAME                JOB              MGR HIREDATE              SAL       COMM     DEPTNO
						---------------- -------------------- -------- - ---------- -------------- ---------- ---------- ----------
						7369 SMITH                CLERK           7902 17 - 12月 - 80            800                    20
						7499 ALLEN                SALESMAN        7698 20 - 2月 - 81           1600        300         30
						7521 WARD                 SALESMAN        7698 22 - 2月 - 81           1250        500         30
						7566 JONES                MANAGER         7839 02 - 4月 - 81           2975                    20
						7654 MARTIN               SALESMAN        7698 28 - 9月 - 81           1250       1400         30
						7698 BLAKE                MANAGER         7839 01 - 5月 - 81           2850                    30
						7782 CLARK                MANAGER         7839 09 - 6月 - 81           2450                    10
						7788 SCOTT                ANALYST         7566 19 - 4月 - 87           3000                    20
						7839 KING                 PRESIDENT            17 - 11月 - 81           5000                    10
						7844 TURNER               SALESMAN        7698 08 - 9月 - 81           1500          0         30
						7876 ADAMS                CLERK           7788 23 - 5月 - 87           1100                    20
						7900 JAMES                CLERK           7698 03 - 12月 - 81            950                    30
						7902 FORD                 ANALYST         7566 03 - 12月 - 81           3000                    20
						7934 MILLER               CLERK           7782 23 - 1月 - 82           1300                    10*/
	}
	//从这开始，就对应老师的视频的课时了，这里是p12课
	if (12)
	{
		//sql语言中日期和字符串
		//获取系统配置参数，查到了参数，就能给对应的参数修改了
			//SQL > select* from v$nls_parameters;
		//修改日期格式为我们习惯的
			//SQL > alter session set NLS_DATE_FORMAT = 'yyyy-mm-dd'; 
		//再改回去	//后面会讲session的意思
			//SQL > alter session set NLS_DATE_FORMAT = 'DD-MON-RR';
		//注意检索时，日期的格式是很敏感的，格式尽量按照标准格式来写
		//并且注意，字符串用 单引号‘’， 改名用 双引号 “”
		//再注意，这里日期是字符串，但是能够比较，oracle对字符串进行了数据类型转换，这叫做抛砖（面试长问到），并且不同的数据库处理不一样，比如mysql
			//SQL> select *from emp
				//2  where HIREDATE < '28-9月 -81'; 
		  
		//ed记事本中的命令不要加分号 ； 
	
		//在我们检索列时，有下面三种方式，注意where 后先写列名 ，自己测试
		//SQL > select* from emp
			//1. where sal = 800;				//检索sal为800的员工信息 可改成< >
			//2. where sal between 800 and 2000;//检索sal在800~2000之间的员工信息
			//3. where sal in(800, 1000);		//检索sal为800和1000的员工信息

		//日期修改
			//SQL> select sysdate from dual;
			//会发现oracle默认的日期格式并不符合中国人的习惯，下面会有修改
					/*	SYSDATE
						--------------
						01 - 12月 - 21*/

		//获取系统配置参数，查到了参数，就能给对应的参数修改了
			//SQL > select* from v$nls_parameters;
			//注意看这些参数都对应着什么，日期的是NLS_DATE_FORMAT  
						/*PARAMETER                                                        VALUE
						---------------------------------------------------------------- ----------------------------------------------------------------
						NLS_LANGUAGE                                                     SIMPLIFIED CHINESE
						NLS_TERRITORY                                                    CHINA
						NLS_CURRENCY                                                     ￥
						NLS_ISO_CURRENCY                                                 CHINA
						NLS_NUMERIC_CHARACTERS                                           .,
						NLS_CALENDAR                                                     GREGORIAN
						NLS_DATE_FORMAT   //日期		                                     DD - MON - RR
						NLS_DATE_LANGUAGE                                                SIMPLIFIED CHINESE
						NLS_CHARACTERSET  //字符集		                                 ZHS16GBK
						NLS_SORT                                                         BINARY
						NLS_TIME_FORMAT                                                  HH.MI.SSXFF AM
						NLS_TIMESTAMP_FORMAT                                             DD - MON - RR HH.MI.SSXFF AM
						NLS_TIME_TZ_FORMAT                                               HH.MI.SSXFF AM TZR
						NLS_TIMESTAMP_TZ_FORMAT                                          DD - MON - RR HH.MI.SSXFF AM TZR
						NLS_DUAL_CURRENCY                                                ￥
						NLS_NCHAR_CHARACTERSET                                           AL16UTF16
						NLS_COMP                                                         BINARY
						NLS_LENGTH_SEMANTICS                                             BYTE
						NLS_NCHAR_CONV_EXCP                                              FALSE*/

		//修改日期格式为我们习惯的
			//SQL > alter session set NLS_DATE_FORMAT = 'yyyy-mm-dd';

					/*会话已更改。

						SQL > select sysdate from dual;

					SYSDATE
						----------
						2021 - 12 - 01*/
		//再改回去
			//SQL > alter session set NLS_DATE_FORMAT = 'DD-MON-RR';

		//注意检索时，日期的格式是很敏感的，格式尽量按照标准格式来写
		//并且注意，字符串用 单引号‘’， 改名用 双引号 “”
		//再注意，这里日期是字符串，但是能够比较，oracle对字符串进行了数据类型转换，这叫做抛砖（面试长问到），并且不同的数据库处理不一样，比如mysql
			//SQL> select *from emp
				//2  where HIREDATE < '28-9月 -81';

						/*EMPNO ENAME      JOB              MGR HIREDATE              SAL       COMM     DEPTNO
						---------------- ---------- -------- - ---------- -------------- ---------- ---------- ----------
						7369 SMITH      CLERK           7902 17 - 12月 - 80            800                    20
						7499 ALLEN      SALESMAN        7698 20 - 2月 - 81           1600        300         30
						7521 WARD       SALESMAN        7698 22 - 2月 - 81           1250        500         30
						7566 JONES      MANAGER         7839 02 - 4月 - 81           2975                    20
						7698 BLAKE      MANAGER         7839 01 - 5月 - 81           2850                    30
						7782 CLARK      MANAGER         7839 09 - 6月 - 81           2450                    10
						7844 TURNER     SALESMAN        7698 08 - 9月 - 81           1500          0         30*/
	}
	if (13 && 14)
	{
		//有关where过滤条件
		//用案例来说明讲解
		//注意，字符串用单引号‘’，且单引号内大小写敏感

		//1.查询工资在1000~2000之间的员工信息
				//SQL> select *from emp where sal >= 1000 and sal <= 2000;
				//SQL> select *from emp where sal between  1000 and 2000;
			//错误写法： 原因是按照顺序一行一行的先比较 2000 ，就导致没有能满足2000的，都为false
				//SQL> select *from emp where sal between 2000 and 1000;
			//错误拓展： 这是语法上没出错的，1>2相当于false（0）
				//SQL> select *from emp where sal 1>2;
			//反之：这就能把emp表中所有行都打印出来，因为2 > 1为true
				//SQL > select* from emp where sal 2 > 1;

		//2.查询部门编号为 10 20的员工，
				//SQL> select *from emp where DEPTNO in (10, 20);
			//查询不是10 20 的员工
				//SQL> select *from emp where DEPTNO not in (10, 20);

		//3.如果集合中有空值NULL，接上的问题（重点）
			//这是没问题的，相当于c语言的if判断，我放在它下面了 
				//SQL> select *from emp where DEPTNO in (10, 20, null);
				//if(DEPTNO == 10 || DEPTNO == 20 || DEPTNO == NULL){}	//这是没问题的
			//有问题的：会发现not in后的集合中有null，则永远不会有结果，因为DEPTNO不在任何部门这个逻辑就是有问题的
				//SQL> select *from emp where DEPTNO not in (10, 20, null);
				//if(DEPTNO != 10 && DEPTNO != 20 && DEPTNO != null){}	//这是有问题的
		//结论：not in 后的集合null不能出现，否则完全没有结果，与in搭配倒是没问题

		//4.like：模糊查询：‘%’匹配任意多个字符; ‘_’匹配一个字符。‘\’： 转义字符；下面案例说明如何使用
		//查询名字以s开头的员工
		//查询只有4个字母的员工
		//查询名字含有下划线的员工
			//查询名字以s开头的员工：	S开头%代表任意多的字符，用like就筛选出来了
				//SQL> select *from emp where ename like 's%';
			//查询只有4个字母的员工：一个_表示1个字符，那4个就代指4个字符
				//SQL> select *from emp where ename like '____';
			//查询名字含有下划线的员工
				//需要先添加一个带下划线的员工,添加方式如下
					//SQL> insert into emp(empno, ename, job, mgr, hiredate, sal, comm, deptno) values(7399, 'Y_y', 'CLEAR', 7900, '17-12月-21', 1000, 0, 10);
				//错误写法：这样下划线还是当作代表一个字符
					//SQL> select *from emp where ename like '%_%';
				// %\_% 表示 给_转义。escape '\'则是告诉系统\是转义字符、_是下划线字符
					//SQL> select *from emp where ename like '%\_%' escape '\';

		//5.逻辑与运算符：SQL优化
		//oracle解析where条时，从右向左，如果右条件为假，则左边的就不用解析了，可以做sql优化
			//不论学习工作到哪种地步，数据库的优化是永不过时的话题 
		//查询薪水大于1000，且名字中含有m字符的员工信息
			//SQL> select *from emp where sal>1000 and like '%M%';
		//注意，字符串用单引号‘’，且单引号内大小写敏感
					
						

	}
	if (15)
	{
		//是老师带着你大概总结回顾之前课的知识点
		//可在复习时看一遍那段视频
	}
	if (16)
	{
		//数据库的数据排序：order by ... 
		//是排序数据库返回的结果集，属于sqlplus工具命令

		//1.默认是升序（从小到大）
				//select *from emp order by sal;	
			//order by desc ..0  （改为降序：从大到小）
				//SQL> select *from emp order by sal desc;
			//order by asc ...	  (改为升序：从小到大)
				//SQL > select* from emp order by sal asc;

		//2.order by + 列名、表达式、序号、别名（这四种都可以加在后面，能识别）
			//按照薪资查询员工信息	//列名和表达式
				//SQL> select ename,sal*12 from emp order by sal*12 asc ;
			//按照年薪查询员工信息	//有别名
				//SQL > select ename 名字, sal * 12 年薪 from emp order by 年薪 desc;
			//有序号：序号2，表示打印的第2列进行排序，注意是select后输出的第2列
				//SQL > select ename, sal from emp order by 2 asc;

		//3.order by 后能有多个列：但会以离它最近的排序为准，然后在相同的数据中再进行剩下的排序
		//当有多个列时，能对不同的列都进行排序
			//按照部门进行排序
				//SQL > select ename, sal, deptno from emp order by deptno asc, sal asc;
			//按照部门和工资进行排序：
				//SQL > select ename, sal, deptno from emp order by deptno asc, sal asc;
			//会发现，order by 会以离他最近的为基准，此处为部门，然后在相同部门中再按照工资排序

		//4.null的排序：null会参与到排序中，并且在排序中相当于最大的
				//null的补充回顾：1.null与任何值进行运算都为null 2.null != null
				//3.where not in () 后的集合中出现null，将永远不会有结果
				//4.补充：null会参与到排序中，并且在排序中相当于最大的
			//打印奖金查看结果：以降序排会发现null都排在前面了，有数值的成员在最下面
				//SQL > select ename, comm from emp order by comm desc;
			//以升序观测：发现null排在了后面
				//SQL > select ename, comm from emp order by comm;
			//nulls last :为了null不影响检索结果，我们有这么一个命令
				//SQL > select ename, comm from emp order by comm desc nulls last;
			//nulls last :不论怎样排序，null都排在后面，不影响有数值的部分
	}
	if (17)
	{
		//单行函数：字符类
			//函数有多行函数与单行函数，单行函数有：字符类、数值类、通用类、转换类、日期类
			//参数-》函数-》结果，函数可以没有参数，但是必须有返回值
			
		//1.lower / upper 将字符进行 大小写转换：lower 大写变小写； upper：小写变大写。
			//SQL > select lower('HELLO WORLD,YY IS COMING!') 大写变小写, upper('hello world,Yy is coming!') 小写变大写 from dual;

		//2.initcap:将单词首字母变成大写
			//SQL > select initcap('hello world,yy is coming!') 单词首字母变大写 from dual;

		//3.字符串连接方式：1. || 2.函数：concat 注意：concat一次只能拼接两个字符串，但是可以用嵌套完成多个字符串，如下
			//SQL> select 'hello world,'|| 'yy is coming!'||'Keep going!'字符串拼接 from dual;
			//SQL> select concat('hello world,',concat( 'yy is coming!','Keep going!')) 字符串拼接 from dual;

		//4.substr(a,b); substr(a,b,c) //从字符串a中第b位开始取字符，取c个，没有c参数则取完
			//SQL> select substr('hello world,yy is coming!', 4) 从字符串a第b位开始取 from dual;
			//SQL > select substr('hello world,yy is coming!', 4, 8) 取c个 from dual;

		//5.length：取字符数；lengthb：取字节数 （1个中文对应：1个字符，2个字节）
			//SQL> select length('袁彧，你个chunhuo') 取字符数, lengthb('袁彧，你个chunhuo') 取字节数 from dual;

		//6.instr（a, b）：在母串a中查找字串b，找到则返回b在母串a中的位置，找不到返回0
			//SQL > select instr('hello world,yy is coming!Keep going!', 'Keep going') a中查找b from dual;

		//7.lpad/rpad :一个字符串a，字符数不满b，则用字符c去填补满，lpad是左填补，rpad是右填补。
			//SQL > select lpad('abcdefg', 11, '+') 左补位满11, rpad('abcdefg', 11, '++') 右补位满11 from dual;

		//8.trim('b' from a):字符串a中删除前后位置的字符’b‘，中间的不删除，前后有重复连续的也删
			//SQL > select trim('h' from 'hello hh worldhhhh') 前后删h from dual;

		//9.replace(a, b, c) :字符串a中 的b 换成 c		b可以是字符也可以是字符串
			//SQL > select replace('hello world', 'world', 'Yy~') a中b换成c from dual;
	
	}
	if (18)
	{
		//单行函数：数值类

		//1.round（a, n）:四舍五入，且保留小数点后n位，如果不写n，则是个位没有小数，-1则是十位，以此类推
			//select round(45.926, 2) 百分位,round(45.946, 1) 十分位,round(45.926,0) 个位,round(45.926,-1) 十位,round(45.926, -2) 百位 from dual;
						//四舍五入，是要保留的那一位的后面一个数来进行判断进位的，不是小学数学的从最末端向前进
						/*百分位     十分位       个位       十位       百位
						---------- ---------- ---------- ---------- ----------
						45.93       45.9         46         50          0*/

		//2.trunc（）：截断
			//SQL > select trunc(45.926, 2), trunc(45.926, 1), trunc(45.926, 0), trunc(45.926, -1), trunc(45.926, -2) from dual;

						/*TRUNC(45.926, 2) TRUNC(45.926, 1) TRUNC(45.926, 0) TRUNC(45.926, -1) TRUNC(45.926, -2)
						-------------- - -------------- - -------------- - ---------------- ----------------
						45.92            45.9              45               40                0*/

		//3.mod(1600, 300)：求余
			//SQL > select mod(1600, 300) 求余 from dual;

						/*求余
						----------
						100*/
	}
	if (19 && 20)
	{
		//日期函数（重要）

		//1.to_char：修改日期和时间格式（年月日时分秒）			hh24：是24小时制	
			//SQL > select to_char(sysdate, 'yyyy-mm-dd hh24-mi-ss') 当前的时间 from dual;
						/*当前的时间
						------------------ -
						2021 - 12 - 01 20 - 15 - 28*/
		//2.日期运算
			//算一下员工的入职多久	//round是四舍五入 注意用的是职工表emp不是空表dual，hiredate是职工表里员工的入职时间
				//SQL> select round((sysdate-hiredate)) 天, round((sysdate-hiredate)/7) 周, round((sysdate-hiredate)/30) 月, round((sysdate-hiredate)/365) 年 from emp;

		//3.计算：昨天、今天、明天	to_char 是改变日期输出格式的
			//SQL> select to_char((sysdate-1), 'yyyy-mm-dd') 昨天, to_char((sysdate), 'yyyy-mm-dd') 今天, to_char((sysdate+1), 'yyyy-mm-dd')明天 from dual;

		//4.months_between：精确的计算两月份差值 //之前的2是粗算
			//SQL > select(sysdate - hiredate) / 30 粗算, months_between(sysdate, hiredate) 精算 from emp;

		//5.add_months('' , n):在输入的月份上加n个月
			//SQL > select add_months(sysdate, 2) 添加n个月 from dual;

		//6.next_day('a', 'friday'):输入日期的下一个周五，注意：比如今天是周4，那下一个周五是明天
			//SQL > select NEXT_DAY(sysdate, '星期五') 下个周五 from dual;
			//输入'friday'提示错误，但换成'星期五'就可以，emm ，老师说是本地化

		//7.last_day():输入日期的所在月份的最后一天
			//SQL > select last_day(sysdate) 本月的最后一天 from dual;

		//8.round ( , 'month'):日期的四舍五入
			//按月份四舍五入：根据所在日期是否满足当月的15号，注意是month 不加s
				//SQL> select round(sysdate, 'month') 按月份 from dual;
			//按年份四舍五入：根据所在月份是否满足6月
				//SQL > select round(sysdate, 'year') 按年份 from dual;
			
		//9.trunc :日期的截断
			//按月份截断
				//SQL > select trunc(sysdate, 'month') 按月份截断 from dual;
			//按年份截断
				//SQL > select trunc(sysdate, 'year') 按年份截断 from dual;
	}
	if (21)
	{
		//开发中相当重要，绝对会用到，多注意
		//日期==字符串==数字 ：数据类型的转换
			//数据类型的转换有：显式类型转换、隐式类型转换
			//日期<==>字符串<==>数字 这三者的转换通过比如TO_CHAR TO_DATE TO_NUMBER 来转换，日期和数字间要先转成字符串再转换比较
			//日期的格式：YYYY 年、YEAR 年、MM 月、MONTH 月、DAY、DY、DD等 
		//SQL的优化，尽量使用显示转换
			//隐式转换是有前提的：被转换对象是可以转换的，比如数字不能直接转为日期，要现变成字符串
			 
		//1.字符串=>数字转换，如下：结果为333 ，根据运算符来决定如何转换的
			//SQL > select '111' + 222 from dual;

		//2.数字=>字符串转换，如下：	结果为：111222 进行了字符串拼接，因为||是字符串拼接的符号
			//SQL > select '111' || 222 from dual;

		//3.以下三个非常重要，工作常用！查询比 1981-01-01时间入职晚的员工信息。注意：日期格式敏感
			//显式类型转换，要转成谁，就TO_谁
			//to_char:日期转换成字符串：将HIREDATE转换成字符串格式再比较
				//SQL > select* from emp where to_char(HIREDATE, 'yyyy-mm-dd') > '1981-01-01';
			//to_date：字符串转换成日期
				//SQL > select* from emp where HIREDATE > to_date('1981-01-01', 'yyyy-mm-dd');
				
			//隐式类型转换：字符串转换成日期格式，日期格式敏感，所以字符串的格式一定要写对
				//尽量不要用，因为有本地化原因，外国的日期格式可能不同，直接隐式转换，由于日期格式敏感，容易出错
				//SQL > select* from emp where HIREDATE > '01-1月-81';
	}
	if (22)
	{
		//TO_CHAR函数对数字的转换//此知识点常考
			//TO_CHAR转换常用格式：9：数字、0：零、$：美元、L：本地货币符号、.：小数点、,：千位符

		//1.查询员工薪水（本地货币输出）
			//以字符型式
				//SQL> select ename,to_char(sal, 'L9,999.99') 字符格式 from emp;
			//以数字形式，将上面的输出的字符格式转换成数字，按照对应格式，转换成数字
				//SQL> select to_number('￥1,600.00', 'L9,999.99') 数字形式 from dual;

		//以下为通用函数：老师说随便看一下就可以了
			//nvl(a, b) ： 当a为null时，返回b；否则返回0
				//SQL > select ename, sal * 12 + nvl(comm, comm) 年收入 from emp;
			//nvl2(a, b, c):当a为null时，返回c；否则返回b
				//SQL > select ename, sal * 12 + nvl2(comm, comm, 0) 年收入 from emp;
			//nullif(a, b)：当a == b 时返回null；否则返回a
				//SQL > select nullif(10, DEPTNO) from emp;	//此代码无意义，纯粹为了测试
			//coalesce(a, b, c ......):返回第一个不为null的值
				//SQL > select coalesce(comm, comm) 奖金 from emp;	//当成一个循环遍历了一样
	}
	if (23)
	{
		//报表与表达式（工作需要时，再来查这个视频）
		//给员工涨工资，并且打印出来，总裁+1500、经理+1200、财务+1400、其它员工+100
			//有两种函数可以使用：
			//CASE表达式：SQL99的表达式，比较繁琐
			//DECODE:oracle公司自己的语法，类似java，比较简洁

		//第一种方法：CASE表达式
		/*select ename, job, sal 涨前月薪,(case job when 'PRESIDENT' then sal + 1500
													when 'MANAGER' then sal + 1200
													when 'ANALYST' then sal + 1200
													else sal + 100
											end
										 )涨后月薪 from emp;*/

		//第二种方式：decode语法，显然更简洁
		/*select ename, job, sal 涨前月薪, (
				decode(job, 'PRESIDENT', sal + 1500,
							'MANAGER', sal + 1200,
							'ANALYST', sal + 1200,
				sal + 100
					)
			)涨后月薪 from emp;
			*/

	}
	//多行函数
	if (24)
	{
		//多行函数：分组函数	AA	//难：不是难学，而是以后遇到需求，想不起来用这个
			//关键词：MAX()最大值、 MIN()最小值、 AVG()平均值、 SUM()求和、 SCONT()计数
		 
		//1.求员工表中、工资的最大值、最小值、平均值、所有工资
			//SQL > select max(sal) 最高工资, min(sal) 最低工资, avg(sal) 平均工资, sum(sal) 所有工资 from emp;
		//2.求奖金平均值
				//SQL > select avg(comm) 方式1, sum(comm) / count(empno) 方式2, sum(comm) / count(comm) 方式3 from emp;
						/*方式1      方式2      方式3
						---------- ---------- ----------
						550 157.142857        550*/
			//会发现方式2的值不一样，原因是1，3，的组函数进行了自动滤空、null过滤，就是不把有null的算进去
			//滤空处理，这很重要，比如公司的工资表弄错了，这是很严重的
				//SQL > select sum(comm) / count(nvl(comm, 0)) 滤空处理 from emp;
			//我们根据需求来确定是否要把null的成员考虑进去


	}
	if (25)
	{
		//分组数据 GROUP BY
			//回顾一下order by 的知识：有关键词desc（降序）asc（升序），后面能接 列名、表达式、别名、序号，
			//且能有多个列排序，但是会以最靠近order by的列进行整体分组，然后数值相同的进行剩下的分组
		
		//求各部门的平均工资：group by 起分组作用
				/*select deptno, avg(sal)
				from emp
				group by deptno		
				order by deptno asc*/
			//以上代码的意思是，以deptno为分组，求分组的avg(sal)，并按顺序检索结果

		//分组函数的设计理念：SQL标准就是这么设计
			//正确写法
				/*select a, b, c	//这是正确的写法，检索abc，那分组必须有abc，反之同理
				from emp
				group by a, b, c
				*/
			//错误写法
				/*select a, b, c	//这是错误写法，因为分组分了个e，所有数据的检索是建立在分组结果之上的
				from emp			//当然avg(sal) 不算，这是函数返回值
				group by a, e, c
				*/

		//按照部门、职位分组，求平均工资
				/*select deptno,job,avg(sal)
				from emp
				group by deptno, job
				order by 1 asc*/		//序号，即按第一个检索的列排序
			//分组的结果为：  分析：是先以部门为分组，然后再以职位分组，当部门的员工与对应职位有重合时，单独分成一组，结果就是下面这样
						//比如10号部门就没有职位重合的，所以3个都单独分组
						/*DEPTNO JOB         AVG(SAL)
						---------- -------- - ----------
						10 CLERK           1300
						10 MANAGER         2450
						10 PRESIDENT       5000
						20 ANALYST         3000
						20 CLERK            950
						20 MANAGER         2975
						30 CLERK            950
						30 MANAGER         2850
						30 SALESMAN        1400*/
		//再强调一遍,下面的是典型错误，因为检索的列与分组的列要完全相同，检索要分组的结果才行
			//而avg(sal)是我们要打印的值，不参与分组，所以不算列。
			///网上有很多人不知道这个问题错在哪里，有的数据库不严格，就不知道错在哪
				/*select deptno,job,MGR,avg(sal)
				from emp
				group by deptno, job
				order by 1 asc*/
	}
	if (26)
	{
		//分组过滤		

		//1.查询部门的平均工资
						/*select deptno, avg(sal)
						from emp
						group by deptno*/
		//2.进一步：查询平均工资大于2000的部门，having是过滤语句，与where语句类似
						/*select deptno, avg(sal)
						from emp
						group by deptno
						having avg(sal) > 2000*/

		//3.where与having的区别：
			//最大的区别：having语句能有组函数，where语句不能有组函数

		//4.检索10号部门的平均工资
				//4.1先过滤，再分组	（效率更高）SQL优化
						/*select deptno, avg(sal)
						from emp
						where deptno = 10
						group by deptno*/
				//4.2先分组，再过滤
						/*select deptno, avg(sal)
						from emp
						group by deptno
						having deptno = 10*/
			//以上两种方法，先过滤、再分组的效率更高：SQL优化
			//因为分组过程更消耗运行速率，先过滤，大大减少分组的消耗
	}
	//多表查询
	if (27 && 28 && 29)
	{
		//多表查询关键点
		//等值连接与不等值连接（相当重要、开发中绝对会碰到）
		//外连接

		//笛卡尔积：两表同时进行检索，会导致一个数学上的现象（不需要理解它多深澳）
			//列数：两表的列之和
			//行数：两表的行之乘积
			// 如下：打印了56行 4*14 dept有4行
			//SQL> select e.ename from emp e, dept d;
			 
		//加上连接条件，就避免了笛卡尔积，如下：就恢复了正常14行 dept中也有列名为deptno
			//SQL > select e.ename from emp e, dept d where e.deptno = d.deptno;

		//1.等值连接：查询员工信息、员工号、姓名、月薪、部门名称（在dept表中）
				//第3行就是等值连接，两个表中都有deptno，使他们关联起来
						/*select e.ename, e.empno, e.sal, d.deptno
						from emp e, dept d
						where e.deptno = d.deptno;*/

		//2.不等值连接：查询员工信息、员工号、姓名、月薪、薪水级别（在SALGRADE表中）
				//方法一：
					/*select e.ename, e.empno, e.sal, s.grade
					from emp e, salgrade s
					where e.sal >= s.losal and e.sal <= s.hisal;*/
				//方法二：
					/*select e.ename, e.empno, e.sal, s.grade
					from emp e, salgrade s
					where e.sal between s.losal and s.hisal;*/
			//不等值连接：在连接过程中没有 = ，但是两个表连起来了，这就是不等值连接

		//3.外连接：按部门统计员工人数、部门号、部门名称、各部门人数
			//分析：用到分组、多表查询
				//步骤1：还未完成，还没用到外连接
						/*select e.deptno, d.dname, count(e.deptno)
						from emp e, dept d
						where e.deptno = d.deptno
						group by e.deptno, d.dname*/
			//会发现dept表中有一个40部门没有显示，分析：因为emp表中没有在40部门的员工（这是现象）
			//深入分析本质：因为等值连接不成立e.deptno没有40的员工 ，而d.deptno有40这个部门，导致等值连接不成立
			//解决：oracle公司的创建者们，有一个强制约定，那就是：希望此表中所有信息显示，就在对等方（等号对面）加上（+）
			//加在 = 等号的右侧叫做：左外连接，加在 = 左侧叫做：右外连接
				//步骤2：外连接：这是sql的强制约定
						/*select e.deptno, d.dname, count(e.deptno)
						from emp e, dept d
						where e.deptno (+) = d.deptno
						group by e.deptno, d.dname;*/
			//成功把40部门打印出来了,注意(+)是加在e.deptno的后面，我们是希望d.deptno的所有信息打印
	}
	if (30 && 31)
	{
		//老师的第1天结束
		//这两节是回顾，复习的时候可以看这两集
	}
	if (32 && 33)
	{
		//自连接：把同一张表看成两份表，然后自己连接自己
		
		//查询员工信息，并且查询对应的老板信息
			//显示：XXX的老板是XXX
			//步骤1： （一步步来，进行优化补充）发现没有提示信息
						/*select a.ename, b.ename
						from emp a, emp b
						where a.mgr = b.empno;*/
			//步骤2：添加提示信息，发现KING没有打印出来
						/*select a.ename || '  BOSS is  ' || b.ename
						from emp a, emp b
						where a.mgr = b.empno;*/
			//步骤3：把KING打印出来，发现KING的老板是null
						/*select a.ename || '  BOSS is  ' || b.ename
						from emp a, emp b
						where a.mgr = b.empno(+)*/
			//步骤4：进行滤空修正，输出了：KING  BOSS is  his self
						/*select a.ename || '  BOSS is  ' || nvl(b.ename, 'his self')
						from emp a, emp b
						where a.mgr = b.empno(+)*/

		//33课是补充：等值连接是oracle自己的语法，比SQL的语法简单一些，SQL也有相关的语法
				//以后学mysql的时候会将sql的语法
				//N个表相连，至少有N-1个连接条
	}
	//子查询（重点中的难点）
	if (34)
	{
		//子查询（上）：本质是select语言的嵌套
		//一般子查询：子查询中的数据给主查询使用
		//相关子查询：主查询的参数传递到子查询中

		//知识架构
		//1.合理的书写风格
		//2.子查询的（）不要丢掉
		//3.子查询和主查询可以不是同一张表，只要子查询返回的结果，主查询能用就行
		//4.可以在主查询的什么地方放一个子查询
			/*select .....（必须放单行子查询）
			from .....可以放子查询
			where.....可以放子查询
			group by.....不行
			order by .....不行
			having.....可以放子查询*/
		//5.子查询的分类
			/*--单行子查询只能用单行比较操作符(= < >)
			--多行子查询只能用多行比较操作符(in any all)
			按照子查询和主查询的执行顺序来分
				一般子查询 ：子查询把结果返回给主查询...一般
				相关子查询：主查询把select列中的参数传递给子查询*/
		//6.子查询返回空值的问题
		//7.

		//这次课讲前3个知识架构，用案例来学习

		//解释1、2
		//1.谁的工资比scott高
			//第1步：先知道SCOTT的工资，注意字符串大小写敏感
					/*	select sal
						from emp
						where ename = 'SCOTT'*/
			//第2步；找到工资比3000 高的人
						/*select*
						from emp
						where sal > 3000*/
			//第3步：将1嵌套到2中，形成子查询，1是2的子查询
						/*select*
						from emp
						where sal > (select sal		
						from emp
						where ename = 'SCOTT')*/
			//换行写更容易读懂，（）不要丢。体现了知识架构的1、2
			//子查询：本质是select语言的嵌套
			
		//解释3
		//2.查询部门是 SALES的员工信息，体现了知识架构3
			//分析，先从部门表中查到SALES的部门编号
						/*select  deptno
						from dept
						where dname = 'SALES'*/
			//第2步，查询部门编号为30的员工
						/*select*
						from emp
						where deptno = 30*/
			//第3步，将1嵌套到2中，成为2的子查询
						/*select*
						from emp
						where deptno = (select  deptno
						from dept
						where dname = 'SALES')*/
			//发现子查询与主查询不是同一张表，但是能给主查询使用

		//上面的题还有一种方式：使用多表查询
						/*select e.*
						from emp e, dept d
						where d.deptno = e.deptno and d.dname = 'SALES'*/
	}
	if (35)
	{
		//子查询（中）

		//SQL优化的话题：
			//select *			
			//select a, b, c	//效率更高，因为不用全部遍历
			
			//子查询				//因为嵌套，查询了2次
			//多表查询			//效率更高，因为只查询了1次，但是就是空间换时间，因为2张表空间更大

		//4.可以在主查询的什么地方放一个子查询
			/*select .....（必须放单行子查询）
			from tab1, tab2 ,可以放子查询
			where.....可以放子查询
			group by.....不行
			order by .....不行
			having.....可以放子查询*/

		//解释4.1
		//例子：select后 能检索很多东西，但是发现了规律，即：顺序检索的时候，一次是检索1行数据
						/*select ename, job, sysdate, 'BOSS' || ' ME', (select dname from dept where deptno = 10)
						from emp*/
			//典型错误：	由于一次只能检索1个数据，但是到了这里的子查询，一次跳出4行数据，一对多，就错误了，无法运行
						/*select ename, job, sysdate, 'BOSS' || ' ME', (select dname from dept)
						from emp*/
			//由这个错误就解释了select .....（必须放单行子查询）
			//Mysql是可以一对多的，这个错误在mysql就没错了，原因是mysql检测不仔细，所以这个语句还是不好的

		//解释4.2
		//from tab1, tab2 ,可以放子查询
			//因为tab1、tab2都是集合，表都是集合，而子查询也是集合，所以能放到from后完全没问题
		//面试题：
			//求问：填空查询员工姓名和编号
					/*select *
					from
					____________*/
			//分析：因为select * 有了* 已经是完全遍历整张表，所以再加任何表已经没用了，只能添加子查询
			//这道题就是考察子查询的，
					/*select *
					from
					(select ename, empno from emp)*/
	}
	if (36)
	{
		//此课时比较重要，还有课里没讲4的个案例，面试前要过一遍

		//5.子查询的分类
			/*--单行子查询只能用单行比较操作符(= < >)
			--多行子查询只能用多行比较操作符(in any all)
			按照子查询和主查询的执行顺序来分
				一般子查询 ：子查询把结果返回给主查询...一般
				相关子查询：主查询把select列中的参数传递给子查询*/

		//解释5-1，单行子查询
			//单行比较操作符：= >= < <= <>
				//查询工资与'SCOTT'一样的员工
						/*select*
						from emp
						where sal = (select sal from emp
						where ename = 'SCOTT')*/
				// = 是单行比较操作符，所以后面只能是单行子查询

		//解释5-2 、多行子查询
			//any/all 与前面的逻辑比较运算相关联
			//多行比较操作符：in、 any、 all
			// in
				//查询部门名称为SALES、ACCOUNTING的员工信息
						/*select*	
						from emp
						where DEPTNO in(select deptno from dept
						where dname = 'ACCOUNTING' or dname = 'SALES')*/
						//注意不是 || 而是用 or （|| 是c语言的或）
				//查询部门名称不是SALES、ACCOUNTING的员工信息
						/*select*
						from emp
						where DEPTNO not in(select deptno from dept
						where dname = 'ACCOUNTING' or dname = 'SALES')*/
			//any、all区别
				//查询薪水比30号部门任意员工高的员工信息（比30号部门最低薪资的高即可）
					//单行操作符写法（单行子查询）
						/*select*
						from emp
						where sal > (select min(sal) from emp
						where DEPTNO = 30)*/
					//多行写法:any:与子查询返回的任意一个值进行比较
						/*select*
						from emp
						where sal > any (select sal from emp
						where DEPTNO = 30)*/

				//查询薪水比30号部门所有员工高的员工信息（比30号部门最高薪资的高）
					//单行操作符写法：两种写法效果一样
						/*select*
						from emp
						where sal > (select max(sal) from emp
						where DEPTNO = 30)*/
					//多行写法：all:与子查询返回的所有值进行比较
						/*select*
						from emp
						where sal > all(select sal from emp
						where DEPTNO = 30)*/
				//any/all 与前面的逻辑比较运算相关联
				//多行运算符只能给多行子查询使用
				
	}
	//子查询面试强化
	if (37 && 38 && 39 && 40 && 41)
	{
		//面试强化题：（子查询），三个，很重要，比较难
			
		//1.解释6：子查询返回空值的问题
			//查询不是经理（没有下属的）的员工信息
				//步骤1：查到是经理的员工
						/*select*
						from emp
						where EMPNO in(select mgr from emp)*/
				//步骤2：查到不是经理的员工信息
						/*select*
						from emp
						where EMPNO not in(select mgr from em)*/
				//步骤3：2出错了，因为KING的上级为null，要进行滤空修正，注意滤空方式
						/*select*
						from emp
						where EMPNO not in(select mgr from emp
						where mgr is not null)*/

		//2.找到员工表中工资最高的前三名（用到了新知识点：rownum，注意理解）
				//一：先按工资排序
						/*select EMPNO, ENAME, SAL
						from emp
						order by sal desc*/
				//二：rownum 使用一下rownum（oracle提供的一个编号功能）先不排序试一下：发现按照顺序编号了
					/*	select rownum, EMPNO, ENAME, SAL
						from emp*/
				//三：加上排序使用rownum，但是发现rownum编号没有按照排序顺序
						/*select rownum, EMPNO, ENAME, SAL
						from emp
						order by sal desc*/
				//四：利用rownum的原理与机制，用子查询使其按照排序顺序编号
							/*select rownum, EMPNO, ENAME, SAL
							from(select EMPNO, ENAME, SAL from emp order by sal desc)*/
				//五：完成版:截取排序后的前三名，用rownum编号截取： rownum <= 3
							/*select rownum, EMPNO, ENAME, SAL
							from(select EMPNO, ENAME, SAL from emp order by sal desc)
							where  rownum <= 3*/
			//rownum原理：是在服务器生成结果集时就按照生成顺序编号了，就是服务器返回结果集的时候已经编好了
						//所以我们再排序，编号是乱的，不按照我们的排序来编号
						//并且：rownum 只能使用 <=； 不能使用 >= 因为生成的顺序是1行1行的生成的，比如从3开始的话，那12 就生成不了 3以后的也生成不了，就没有结果了
						//所以要使用子查询，两个表，一个表的rownum给另一个表排好序后的结果集生成时上编号，就成了顺序
			//rownum的特性：1.rownum属于服务器返回结果集的固有属性，在服务器生成结果集时就按照生成顺序编号，不受排序的影响
						// 2.rownum 只能使用 <=； 不能使用 >= ，因为生成顺序原因，导致第1个生成不了，后面的也无法生成
					
			//Top-N：rownum牵扯到著名的Top-N问题：分页问题
			//因为rownum不能用 >= 因为会影响生成结果集 ，那如果想要分页呢，就是不输出前三，而是输出4~8呢
				//思路：三层查询，最内层排序，给中间层rownum编号
				// 中间层起别名，给最外层筛选使用，最外层就不用担心rownum的生成问题了，因为使用的是已经生成的中间层结果集
						/*select r, EMPNO, ENAME, SAL			//最外层
						from(select rownum r, EMPNO, ENAME, SAL	//中间层
							from(select EMPNO, ENAME, SAL		//最内层
								from emp
								order by sal desc)
						where  rownum <= 8
							)
						where r >= 4*/
			//解决分页的思路原则：
				//1.分成 外层、中间层、内层
				//2.内层排序、中间层编号起别名、外层使用别名筛选分页

		//3.找到员工表中，大于所在部门平均薪资的员工信息
			//方法一：多表查询
					//分析，将求好的各部门的平均薪资当作表2，建立连接，然后用员工表去输出
				//步骤1：先求各部门的平均工资：分组、组函数
						/*select DEPTNO, avg(sal) avgsal
						from emp
						group by DEPTNO*/
				//步骤2：完成版：多表查询：将平均工资当作表2（起别名），与员工表进行等值连接
							/*select e.EMPNO, e.ENAME, e.DEPTNO, e.SAL, d.avgsal
							from emp e, (select DEPTNO, avg(sal) avgsal
							from emp
							group by DEPTNO)	d	//给结果集起别名，当作表2
							where e.DEPTNO = d.DEPTNO and e.sal > d.avgsal*/
			//方法二：相关子查询：将主查询的参数传递给子查询
				//步骤1：先把整体逻辑写出来
						/*select EMPNO, ENAME, DEPTNO, SAL, (员工所在部门的平均工资)avgsal
						from emp
						where sal > (员工所在部门的平均工资)*/
				//步骤2：把(员工所在部门的平均工资)写出来
						/*select avg(sal) avgsal from emp where DEPTNO = 10*/
				//步骤3：完成版：用相关子查询的结构结合1 2
						/*select e.EMPNO, e.ENAME, e.DEPTNO, e.SAL, (select avg(sal) from emp where DEPTNO = e.DEPTNO) avgsal
						from emp e
						where e.sal > (select avg(sal) from emp where DEPTNO = e.DEPTNO)*/
				//总结：通过别名，将主查询的值传递给子查询
	}
	if (42)
	{
		//子查询属于难点，多作案例来理解

		//子查询知识架构
		//1.合理的书写风格
		//2.子查询的（）不要丢掉
		//3.子查询和主查询可以不是同一张表，只要子查询返回的结果，主查询能用就行
		//4.可以在主查询的什么地方放一个子查询
			/*select .....（必须放单行子查询）
			from .....可以放子查询
			where.....可以放子查询
			group by.....不行
			order by .....不行
			having.....可以放子查询*/
		//5.子查询的分类
			/*--单行子查询只能用单行比较操作符(= < >)
			--多行子查询只能用多行比较操作符(in any all)
			按照子查询和主查询的执行顺序来分
				一般子查询 ：子查询把结果返回给主查询...一般
				相关子查询：主查询把select列中的参数传递给子查询*/
		//6.子查询返回空值的问题
		//7.子查询一般不用order，但是Top-N问题的子查询必须用order by
			//eg：求工资的前三名、分页（求4~8名或其它分段）
		//8.子查询结果集一般不排序，Top-N问题除外：因为子查询排序没实际作用啊，


	}
	if (43)
	{
		//是回顾总结的视频
			//老师给的三个案例，记得回顾，还有练习题能加深映像

		//补充：多表查询与子查询
			//多表查询的结构更容易理解，且效率应该更高一些
			//sql的解析顺序：从右向左
				//select ......
				//from tab1, tab2
				//where con1 > 111 and con2 < 222 and col3 = 'aaaa'....  //这一行的解析顺序是从右向左执行解析的

		//我记不太清，但是又觉得重要的：order by排序时不想让null参与排序：nulls last //会将null放到排序后面

	}
	//集合运算
	if (44)
	{
		//交集、并集、差集（高中知识）

		
		//查询部门是10 和 20 的员工信息
			//方法1：
				/*select* from emp where deptno in(10, 20);*/
			//方法2：并集 or改成 and 就是交集
				/*select* from emp where deptno = 10 or deptno = 20;*/
			//方法3：union 并集的符号
				/*select* from emp where deptno = 10
				union
				select* from emp where deptno = 20;*/

		//使用方式与上面的union一样
			//union：返回并集结果
			//union all:返回所有并集结果，包括重复部分
			//intersect：交集
			//minus：差集

	}
	//数据处理 insert
	if (45)
	{
		//sql语言的类型：

		//DML语言：数据库的操作语言：增删改查和管理（改变表的内容）
			//insert update delete select
		//DDL语言：数据库定义语言 （不清楚啥意思，以后会讲到的吧）
		//DCL语言：数据语言（暂时不清楚）
			//roolback 回退

		//oracle公司有认证 OCA\OCP 能在一起考，参加oracle培训，2W左右，最后有OCM：数据库管理员认证大师（老师说含金量比肩思科的网络认证）

		//insert 语法：
			//insert into table () values ()

		//1.向表中插入数据
		//2.向表中插入部分列
		//3.隐式插入空值：没有写出的列，默认为空值null
		//4.显式插入空值
		//5.sql插入语言的地址符 &， &取地址符后面的值，相当于一个变量
			//抛砖--rollback一次回退多个
		//6.&取地址符能在任何sql语言中使用，在select语言中也能够使用
		//7.批量插入数据
		//8.insert语句中也能使用子查询，DML语句中也可套select语句


		//1 and 4：1.向表中插入数据 and 4.显式插入空值
						/*insert into emp
						values(2258, 'Yy',3359, 'loser', sysdate, 0,null, 10)*/
				//插入所有列，不用写列名，但是值要写完整，不能缺
				
		//2 and 3：2.向表中插入部分列 3.隐式插入空值：没有写出的列，默认为空值null
						/*insert into emp(EMPNO, ENAME, JOB, HIREDATE, SAL)
						values(1211, 'yy', 'clearer', sysdate, 12)*/
		//5.sql插入语言的地址符 &， &取地址符后面的值，相当于一个变量
						/*insert into emp(EMPNO, ENAME, JOB, HIREDATE, SAL)
						values(&EMPNO, &ENAME, 'emm', sysdate, 10)*/
				//注意这样输入时，字符串要加单引号 ‘’
				//&提高了输入的灵活性，类似于c语言的scanf
		//6.&取地址符能在任何sql语言中使用，在select语言中也能够使用
						/*select*
						from emp
						where sal > & sal*/
				//提高了检索的灵活性，并且所有sql语言中都能使用
		//7.批量插入数据
				//1.创建新表
					//不复制数据，只是复制表头，就能创建表了 1是不等于2的，这样就无法复制数据了，只能复制表头
						/*create table emp10
						as select* from emp where 1 = 2*/
				//2.向表中复制数据 即部门为10的员工
						/*insert into emp10
						select* from emp where deptno = 10*/


	}
	if (46)
	{
		//update 和 delete 和 truncate
		//更新数据：update 
		//删除数据delete和truncate（只是删除数据，表还存在）
		//删除表：drop（直接摧毁表的存在）

		//1.创建新表	（空表）
						/*create table emp10
						as select* from emp where 1 = 2*/
		//空表中复制进数据
			//例：
					/*insert into emp10
					select* from emp where deptno = 10*/

		//update:更新数据，一次可更新多个数据（即更改表中内容）
			//例：	//update 表名 set 列名，列名 筛选条件
					/*update emp10 set sal = 800, deptno = 90 where ename = 'MILLER'*/
		//delete：删除数据
			//例：	删除表emp10中deptno = 90的员工信息
					/*delete from emp10 where deptno = 90;*/
			//例：	清空表，删除表emp10中所有数据，但是表还存在，只是删除数据而已
					/*delete from emp10*/
		//truncate：清空表（删除数据，表还在）
			//例：	//好像不能删除指定数据，而且注意语句后是跟table
					/*truncate table emp10*/
		
		//delete与truncate的区别：
			//1.truncate是清空表，而delete也可以，注意truncate后跟table，delete后跟from
			//2.delete是逐条删除内容，truncate是摧毁表后再重建（有重建功能）
			//3.delete是DML语言，DML可以闪回：即错误操作了，可以闪回撤销操作
			//truncate是DDL语言：不可以闪回
			//4.delete逐条删除会产生碎片、truncate不会产生碎片
			//行移动功能：要开启闪回功能，必须开启行移动功能
			//5.delete不会释放空间，truncate会
			//6.delete可以回滚，truncate不可以
			//7.oracle delete效率更高，在mysql的truncate效率更高（oracle公司对delete进行过优化）

		//解释7：
			//例，删除一个同样的有5000条语句的表，测试一下删除的时间
				//文件中导入数据
				//set timing off; （关闭计时功能，不然导入文件时每条语句就会提示一句，很长）
				//set feedback off;（我们检索表，最下面有一个提示：已选择14行，把那个提示关闭）
				//@C:\Users\彧\Desktop\数据库整理我的课件\第2天\sql.sql   (导入文件)
				//delete from testdelete 或 truncate table testdelete
				//set timing on （最后删除数据表的时候，打开记录时间）
				//select count(*) from testdelete;（查看生成的数据表有多少行内容）
				//drop table testdelete purge （摧毁表，即真的删除表的存在）
				 
			//测试：
					/*SQL > delete from TESTDELETE;
					已用时间:  00 : 00 : 00.02*/
			//测试：（不知道为什么居然和老师的不一样，可能修复了）
					/*SQL > truncate table testdelete;
					已用时间:  00 : 00 : 00.01*/	
	}
	if (47 && 48)
	{
		//数据的增删改查学完了，在上面两课
			//注意：前一课生成了两个奇怪的表，我不会删除，有机会想办法解决（解决了，在//创建和管理表——回收站的课程例里，就是回收站的问题）
			
		//1.事物基本概念：（mysql infonix db2 sqserver 中对事物的处理方式是不一样的，但是事物的基本概念是相通的）
			//概念：一个或多个DML语句的集合：比如之前的抛砖，多个按顺序执行的insert或修改，通过回退，4条都回退了
				//因为那四条语句就组成了一个事物，然后进行事务抛砖，就把事物回退掉了
			//特点：要么都成功要么都失败，就是对事物的操作，那些语句不会值只成功1条，是按事物为单位的成功与失败
			//特性：原子性、一致性、隔离性、持久性
			//事物的隔离性：多个客户端同时操作数据库时，要隔离他们的操作，，避免：脏读、幻读、不可以重复读（百度，老师不讲）
				//使用不同的搁置级来解决
		//2.oracle中的事物
			//事物的起始标志：DML语言（oracle中是默认打开的，mysql中事物默认不打开）mysql写一个insert 就提交一次
			//事物的结束标志
					//提交：有显式提交、隐式提交
						//显示提交：commit。
						//隐式提交：（1）执行DDL语言（如create创建表）
								//create table有一个隐式的提交功能：会提交之前没有提交的DML语言（风险很高，因为万一提交了自己不知道，然后就会造成BUG，开发中要特别注意）
							//（2）正常退出：会隐式提交
					//回滚：显式：rollback，提交事物，使事物失效
						// 隐式：掉电、非正常退出，会造成隐式回滚，就是再上机后，之前写的事物内的语句就失效了，自动回滚
		//3.事物控制
			//保存点：savepoint   设定一个保存点，相当于把事物分页，然后可以用rollback to savepoint 来回退到保存点
		//4.oracle数据的隔离级别（仅支持2 和 4，还有自己设定的级别，下节课有）
			//1.读未提交数据
			//2.读已提交数据
			//3.可重复读（保证重复读不破坏数据）
			//4.串行化

			
		//解释2.
			//实验终端隔离显式提交： 打开两个终端控制界面
					//1.第一个终端先创建一个表，然后第二个终端插入数据，再插入数据，然后用第一个终端select检索看看
							//终端1：创建表  create table T1(tib number, tname varchar2(20));
							//终端2：insert into t1 values(1, '1111');
							//终端2：insert into t1 values(2, '2222');
							//终端1：select * from t1;
						//发现终端1检索不到表里的内容，原因是事物没有提交
					//2.终端2显式提交事物，commit; 然后就能在终端1中查看表新插入的数据了
			//实验隐式提交：
					//终端2新插入数据给表1，再插入一个，然后终端2创建一个表
					//终端1中就能检索到新插入的数据与新的表了，这就是隐式提交（千万避免，如银行中就很严苛重要）

		//3.事物控制，保存点测试
			//例：创建表-插入-插入-设定保存点a-插入-插入-保存点b-回退到a（但是还是没有提交，只能commit或隐式提交才行，隐式提交不要用）
			/*SQL > insert into t1 values(5, '5555');	//插入
			SQL > insert into t1 values(6, '6666')
			SQL > savepoint a;							//设定保存点a
			SQL > insert into t1 values(7, '7777');
			SQL > insert into t1 values(8, '8888');
			SQL > savepoint b;							//设定保存点b
			SQL > select* from t1
			SQL > rollback to savepoint a;				//回退到a
			SQL > select* from t1;						//发现a到b的插入就失效了，但此时还是没有提交事物，a之前的语句还在事物中
			SQL > commit;*/								//commit 提交 不要用隐式提交
	}	
	if (49)
	{
		//4.oracle数据的隔离级别（仅支持2 和 4，还有自己设定的级别，下节课有）
			//1.读未提交数据	（有英文的，自己搜吧）
			//2.读已提交数据
			//3.可重复读（保证重复读不破坏数据）
			//4.串行化
		//oracle还有自己设定的一个专属的级别，介于2 4之间的级别（自己搜了看）
		//oracle级别默认为 2
		//mysql支持1234的级别，默认为2的级别
			
		//不采取隔离级别出现的问题：（百度，老师不讲，说面试用不上）
			//脏读
			//不可重复读（重复读导致读到的数据出错）
			//幻读
	}
	//创建和管理表
	if (50)
	{
		//创建和管理表——表的增删改查

		//常见的数据对象：表、视图、序列、索引、同义词
		//表名和列名必须以字母开头

		//1.创建表/删除表/修改表	
			//创建一个用户时，要考虑用户有没有create table权限 和 表的存储空间（表空间）
		//2.两用户之间查表，需要权限
		//3.oracle的数据类型
			//rowid :行地址、伪列 之前学过rownum编号
			//rowid相当于一个指针，记录表空间内所在行的地址（索引用的就是地址来索引）
		//4.创建表的同时，copy数据
		//5.表列的增删改查：命令不需要记忆，我们也记不住这么多命令（老师有提供命令大全，可查翻）


		//创建表：hiredate date default sysdate 是系统时间自动填充，不需要我们再填入数据时添加时间
						/*create table t3
						(tid number,
						tname varchar2(20),
						hiredate date default sysdate)*/
						//插入数据
						/*SQL > insert into t3(tid, tname) values(1, '11111');*/	
						//查看t3 发现有了添加的时间
						/*select* from t3;*/
		//rowid :行地址 那一行对应的地址
						/*SQL > select rowid, tid, tname from t3;*/

		//创建表的同时，copy数据
						/*create table emp20
						as 
						select* from emp where deptno = 20;*/

		//5.表列的增删改查：命令不需要记忆（老师有提供命令大全，可查翻）
			//增加一列
						/*alter table t3 add tname2 varchar2(40)*/
			//修改对应列的长度
						/*alter table t3 modify tname2 varchar2(20)*/
			//列名的重命名
						/*alter table t3 rename column tname2 to mytname2*/
			//删除列
						/*alter table t3 drop column  mytname2*/
	}	
	if (51)
	{
		//创建和管理表——回收站

		//我们删除一张表，会把它存放到回收站，就和windows类似
			//超级管理员用户没有回收站，只有普通用户有
		//查看回收站 show recyclebin
		//清空回收站 purge recyclebin(之前删表时加的关键字)
		//彻底删除一张表：不经过回收站删除一个表
			//dopr table ..... purge
		//还原表:闪回的内容
		//查看回收站中的表
			//select *from "...."; 注意要用回收站中的表的名字 RECYCLEBIN NAME的那列的名字

		//查看回收站
					/*show recyclebin;*/
		//清空回收站
					/*purge recyclebin;*/
		//彻底删除一张表：不经过回收站删除一个表
					/*SQL > drop table T3 purge;*/
		//查看回收站中的表（之前tab看到的那两张奇怪名字的表就是回收站的表，现在已经删除了，清空回收站即可）
					/*SQL > select* from "BIN$fHYHzzhoTgWzDxEX0jQ4dw==$0";*/

	}
	//管理控制台的基本使用和用户权限（图形界面）
	if(52)
	{
		//Enterprise Manager Console 是10g的图形界面的名字

		//10g企业级管理控制台的使用
			//登录
					//127.0.0.1 orcl 本地登录
			//方案
					//表结构
					//表数据
					//导出报表
			//存储
					//表空间
			//安全性
					//用户角色

		//oracle基于用户的解决方案与生命周期演示
			//创建
			//删除
		
		//oracle用户里面有预定义好的角色供我们使用
			//普通用户一般拥有connect 和 resource角色（只有拥有connect角色才能登陆数据库）
			//把resource分配给一个用户，就不用再给他分配空间了
		//不要在windows文件夹删除任何表的数据或文件，命令行创建的就用命令行删除，否则可能无法运行数据库


				//用户		//角色		//权限

		//权限：看作是一种资源：表的更新、修改、创建的资源（适用于数据库的对象）

		//角色：是权限的抽象集合

		//角色分配给用户user，即把权限通过角色给了用户


		//比如员工角色有：创建表、修改表的权限
		//而它的经理角色有：删除表的权限

		//那因为经理是员工的上级，经理角色也能调用员工角色的权限，经理继承了员工角色的权限
		//再把角色分配给用户user
		
		//这就是oracle这里做得好的地方，也就是oracle基本的管理理念

		
		//老师的经验：公司里做开发，因为报表很难做，尽量不要接报表的工作，很难
	}
	if (53)
	{
		//图形化界面，演示了老师给的案例
		//自己研究下怎么实现的

		//老师说以后要用到就背下来这个就行了

		//案例中安装路径要改

		//最后演示了删除案例，注意不要在命令行rm .... 否则无法运行数据库
		//在图形化界面删除

	}
	if (54)
	{
		//老师留了作业
		//就是把他讲的案例部署一遍再删除
		//然后有一些练习题做一下
		//他的案例我没找到课件，有时间就跟着视频里敲一遍完整的吧（肯定浪费一天或半天时间）
	}
	if (55)
	{
		//课堂考试强化训练

		//求所有部门的平均奖金：注意滤空修正（因为是所有部门）
					/*select deptno, avg(nvl(comm, 0)) 平均奖金 
					from emp*/

		//求各部门的平均工资
						/*select deptno, avg(sal) 平均工资
						from emp
						group by deptno*/

		//求各部门工种的平均工资
					/*	select deptno, job, avg(sal) 平均工资
						from emp
						group by deptno, job*/
		//求各部门每个工种平均工资大于2000的员工
						/*select deptno, job, avg(sal)
						from emp
						group by deptno, job
						having avg(sal) > 2000*/
		//求10号部门的平均薪资：2种写法
						/*select deptno, avg(sal)
						from emp
						where deptno = 10
						group by deptno*/

						/*select deptno, avg(sal)
						from emp
						group by deptno
						having deptno = 10*/
		//创建一个学生表
						/*create table student
						(
						tid number,
						sname varchar2(20),
						id number,
						age number
						)*/
		//表中插入数据
					/*insert into student values(1, 'Yy', 2258, 25)*/

		//显式大于4个人的部门
						/*select deptno
						from emp
						group by deptno
						having count(deptno) >= 4*/

		//显式员工号、姓名、月薪、年薪、年收入、部门名字
						/*select e.EMPNO, e.ENAME, e.SAL, e.SAL * 12 year, (e.SAL * 12 + nvl(e.comm, 0)) good, d.dname
						from emp e, dept d
						where e.deptno = d.deptno*/
		//创建一个表，将上面的表同时装进新表中
						/*create table aaa
						as(
						select e.EMPNO, e.ENAME, e.SAL, e.SAL * 12 year, (e.SAL * 12 + nvl(e.comm, 0)) good, d.dname
						from emp e, dept d
						where e.deptno = d.deptno)*/
					
	}
	if (56)
	{
		//知识点回顾：将上一课的练习题+之前的4道题多练习，熟悉了就学得差不多了
		//那4道题是：查询是经理的员工信息（子查询）
					//相关子查询：查找比所在部门平均薪资高的员工信息
					//top-N问题：rownum的机制与原理，然后双层使其按顺序编号
					//分页问题，接上一条，三层循环，内层排序，中层别名，外层筛选
	}  
	//数据库对象
	if (57 && 58)
	{
		//57 58是同一个视频，应该是上传时搞错了，约束的基本概念没讲，那有时间就自己搜了看吧
		//数据库对象_约束概念

		//写约束都是照葫芦画瓢，照着写就好了
		//我理解的意思就是让其成员的数据得到一个范围保护，输入得数据不能越过约束条件
			
		/*约束针对表而言，
			1.not null 非空约束   如人的名字 不能为空
			2.Unique		唯一性约束   如 电话号码 邮箱地址
			3.Primary Key	主键约束(隐含  非空且唯一  的意思) 实际上主键直接建立了一个索引
			4.Foreign Key	外键约束， 子表x列引用了主表的x列(主键列) 那么子表x就是主表x的外键, 注意!!:子表子表的外键约束必须是主表的主键
			5.check 检查*/

		//用创建表做例子：constraint：创建约束		teacher_tid_PK：约束提示（违反了约束后的提示）	primary key：约束种类
						/*create table teacher
						(
						tid number constraint teacher_tid_PK primary key,
						sname varchar2(20) constraint teacher_sname_nonull not null,
						email varchar2(64) constraint  teacher_email_nonull not null,
						sex number constraint teacher_sex_check check(sex in(0, 1)),
						age number constraint teacher_age_check check(age > 20)
						)*/
		//插入一个数据不满足约束的：会有提示违反约束，并且会提示 约束提示（这是我们自定义写的约束提示）
						/*SQL > insert into teacher values(2258, 'Yy', 'host.com', 1, 18);
						insert into teacher values(2258, 'Yy', 'host.com', 1, 18)
						*
						第 1 行出现错误:
						ORA - 02290 : 违反检查约束条件(SCOTT.TEACHER_AGE_CHECK)*/
		//插入满足约束条件的数据
						/*SQL > insert into teacher values(2258, 'Yy', 'host.com', 1, 26);*/
	}
	if (59)
	{
		//数据库对象——主外键：最后一个列的写法就是主外键
						/*create table teacher2
						(
						sid number constraint teacher2_sid_pk primary key,
						sname varchar2(20) constraint teacher2_sname_notnull not null,
						email varchar2(64) constraint teacher2_email_notnull not null,

						sex number constraint teacher2_sex_min_check check(sex in(0, 1)),
						age number constraint teacher2_age check(age > 20),
						deptno number constraint teacher2_pk references dept(deptno) ON DELETE CASCADE
						)*/

			//references dept(deptno)就是主外键，父表dept的deptno与本表的deptno关联起来
			//级联删除：ON DELETE CASCADE：当父表删除时，级联的本表的此列也删除
			//级联赋空：ON DELETE SET NULL：附表删除时，此列赋空

			//但是企业里一般不用级联删除或者级联赋空
	}
	if (60)
	{
		//数据库对象——视图

		//视图：简化查询  作用就是简化检索
			//就是存储起来的select语句

		//不建议通过视图来修改表（它的功能主要是简化查询）
		//with check option:插入数据的限定：
		//with read only:不能通过视图修改表了
		//修改视图：or replace
		//视图中：不能出现组函数，delete，group by,rownum这些
				

			//比如我们要显式员工号、姓名、月薪、年薪、年收入、部门名字
					/*select e.EMPNO, e.ENAME, e.SAL, e.SAL * 12 year, (e.SAL * 12 + nvl(e.comm, 0)) good, d.dname
					from emp e, dept d
					where e.deptno = d.deptno*/
			//那每次查询都要敲一遍这个代码，就很麻烦
			//此时试图的作用就来了，但是发现没有权限
					/*create view myview1
					as
					(
					select e.EMPNO, e.ENAME, e.SAL, e.SAL * 12 year, (e.SAL * 12 + nvl(e.comm, 0)) good, d.dname
					from emp e, dept d
					where e.deptno = d.deptno
					)*/
			//权限需要登录超级用户
					/*C:\Users\彧 > sqlplus / nolog
					SQL > connect / as sysdba*/
			//然后授权给scott用户：工作中找上级要，一些机密资料不会透露给你的
					/*SQL > grant create view to scott;*/

			//scott再执行创建视图，就可以了
					/*create view myview1
					as ( select e.EMPNO, e.ENAME, e.SAL, e.SAL * 12 year, (e.SAL * 12 + nvl(e.comm, 0)) good, d.dname
					from emp e, dept d
					where e.deptno = d.deptno)*/
			//这样以后再需要查询员工号、姓名、月薪、年薪、年收入、部门名字，直接输入
					/*SQL > select* from myview1;*/
			//极大的简化了代码量，不必每次都写一大堆
			//也体现了视图的功能：简化查询


			//with check option:插入数据的限定：如下，因为select中有where deptno = 10，所以视图只能插入deptno = 10的员工
				/*create view myview1
				as(select EMPNO, ENAME, SAL, SAL * 12 year, (SAL * 12 + nvl(comm, 0)) good
				from emp
				where deptno = 10)*/

			//修改视图：or replace
				/*create or replace view myview1
				as(select EMPNO, ENAME, SAL, SAL * 12 year, (SAL * 12 + nvl(comm, 0)) good
				from emp
				where deptno = 10)*/
	}
	if (61)
	{
		//序列：（老师这一刻讲的很快浅显，说是知道怎么用就好了，如果步，明确，记得上网搜，我记得还有一些关键词没写进笔记，老师一带而过）
		
		//自动提供唯一的数值
		//共享对象
		//最主要用于提供主键值
		//将序列值装入内存可提高访问效率

		//最主要用于提供主键值 ：讲解
		//创建一个序列
					//create sequence myseq
				//【1， 2， 3， 4， ....20】默认一开始为20，往后每次增加20个，就像动态数组
				//序列1，可以给一个表提供主键值，然后序列2给另一个表提供主键值
				//且oracle保证这些序列数值不会重复，是唯一的

		//1.创建序列
					//create sequence myseq
		//2.序列基本概念：放在内存可提高访问效率
					//【1， 2， 3， 4， ....20】默认一开始为20，往后每次增加20个，就像动态数组

		//3.序列的两个属性：序列的应用（我们知道怎么用就好了）
				// -序列有两个域 nextval 下一个值,currval 当前值
			//1. nextval ：指向下一个序列值（最开始默认从序列最前端开始，是没有任何序列值的）
			//2. currval ：返回当前所在序列值的位置，因为默认最开始没有指向任何序列值，所以要先进行nextval后才能使用currval
				//创建一个新序列，必须先使用nextval  给 序列初始化  才可以 查看 序列

		//4.序列的删除
					//dorp sequence myseq;
		//5.序列需要注意的问题：
				//多个表共用一个序列，造成序列不连续
				//回滚，会造成序列不连续
				//系统异常，内存序列丢失，造成序列不连续


			//创建表
					/*	create table tableA
						(
						tid number,
						tname varchar2(40)
						)*/
			//从序列中取序列值当中表的主键值，用nextval取
					/*SQL > insert into tableA values(myseq.nextval, 'aa');*/

		//新创建一个序列，然后用currval获取当前指向的序列值
			//SQL> create sequence myseq1;
			//SQL > select myseq1.currval from dual;
			//发现无法查询，因为上面讲到了，最开始是指向序列最前面，那个位置没有任何序列值
			//要先nextval 跳到第1个序列值，才能用currval
			//SQL > select myseq1.nextval from dual;
	}
	if (62)
	{
		//索引

		//索引，相当于书的目录，提高数据检索速度。提高效率（视图不可以提高效率）
			//一种独立于表的模式对象, 可以存储在与表不同的磁盘或表空间中
			//索引被删除或损坏, 不会对表产生影响, 其影响的只是查询的速度
			//索引一旦建立, Oracle 管理系统会对其进行自动维护, 而且由 Oracle 管理系统决定何时使用索引.用户不用在查询语句中指定使用哪个索引

		//索引和表是单独存放的
		//索引对dba开发人员，使用起来是透明的，只要创建索引

		//什么时候使用索引：
			//当表数据很多很多，而且要检索某一列很多次时，采用检索
			//数据量少时，可以不用，老师说比如100万的数据，索引7秒搞定，不用检索的话70秒

		//1.索引的基本原理
					//表记录						索引表
					//10						10
					//20						10
					//30						10
					//10						20
					//10						20
					//30						30
					//20						30
				//就是说，表中每一个成员，在索引表中是分好类放到一起的，
				//索引是根据指针来查找到成员的，rowid能查看表中成员的地址，用地址也提高了速度
				//select rowid, e.* from emp e	就能查看每一行的地址了

		//2.建立索引、删除索引
			//对1列创建索引 
				//SQL > create index myindex on emp(deptno);
			//对2列创建索引
				//SQL > create index myindex1 on emp(deptno, job);
			//删除索引
					/*SQL > drop index myindex;
					SQL > drop index myindex1;*/
		//3.索引说明
			//自动创建的索引：主键值也是索引、唯一约束也是索引
			//主键值和唯一约束是系统自动创建的索引
	}
	if (63)
	{
		//同义词 ：就是别名
		//老师又讲了他的脚本案例，我应该也要去找一份案例来学习

		//同义词的创建：
			//create synonym syn11 for emp;
			//发现没权限，用超级用户给权限
			//grant create synonym to scott;
			//检查是否能通过同义词进行查询
			//select *from syn11;


		//创建同义词的优点	
			/*就是在本用户下 创建 别的用户独有的表,
			创建后变成本用户自己的表, 方便查询访问
			好处是既不影响对数据的操作，同时又能保证数据的安全。*/
	}
	//proc嵌入式sql语句
	if (64)
	{
		//本课是基本课程介绍
			//介绍了接下来该学什么

		//proc基本概念：嵌入式sql语句，就是将sql语句写到C/C++中
		//大部分数据库如oracle就支持
		//但是mysql不支持
	}
	//启动开发环境搭建
	if (65)
	{
		//CRT登录，或类似登陆工具
		//1.CRT乱码解决，修改linux服务器的配置文件，用root用户登录：cat /etc/sysconfig/il8n	没有这个路径的化：cat /etc/locale.conf 一样的 
					//echo $LANG	//zh_CH.UTF-8 意思是UTF8存储，但是按照zh（中文）显示，所以CRT没显示中文说明是CRT的问题，设置CRT编码方式按照UTF8即可
					//source /etc/profile    保存运行，
		/*
		*	2.启动关闭oracle数据库：
		*		su - oracle		//登录orcle用户
		*		sqlplus /nolog	//开始登录oracle
		*		SQL> startup	//启动数据库
		*		SQL> connect /as sysdba	//登陆超级用户
		*		SQL> shutdown immediate	//关闭数据库		只能在超级用户下能关闭
		* 
		*	3.启动和关闭监听服务：
		*	克隆会话，然后监听，不要在SQL语句中开启监听，这是敲SQL语句的
		*		su - oracle		//登录orcle用户
		*		lsnrctl start	//开启监听
		*		lsnrctl status	//查看监听
		*		lsnrctl stop	//关闭监听
		*/
	}
	if (66)
	{
		/*
		*	有些图片我保存到oracle第三天课件中了
		* 
		*	4.linux下的sqlplus怎么使用edit编辑命令
		*		1 在sqlplus中 键入 ed
		*		2 在另一个会话中，打开afiedt.buf文件，修改 保存 退出
		*		3 回到sqlplus环境中，键入 q
		*		4 在sqlplus环境中输入 /
		*	以下就是实操：
		* 
		*	第三个对话框（上节课克隆的）登录普通用户数据库
		*		su - oracle
		*		sqlplus scott/tiger
		*		SQL> select *from emp;
		*		SQL> set linesize 140	//修改行间距之类的，这两句都是
		*		SQL> set pagesize 140
		*		SQL> select *from emp;
		* 
		*		SQL语句中不能输入ed来修改我们写的命令
		*		方法是，再克隆一个会话：  
		*		然后在前一个会话中，即SQL语句中输入ed，此时会在orcle用户文件夹下生成一个文件，afiedt.buf
		*		su - oracle
		*		ls
		*		Desktop  Documents  Downloads  Music  Pictures  Public  Templates  Videos  afiedt.buf  oradiag_oracle
		*		vi afiedt.buf	//这样就能修改我们在SQL语句输入的命令了
		*		
		*		修改完回到SQL，输入q 回车即可:
		*		SQL> ed
		*		Wrote file afiedt.buf 
		*		27 
		*		q
		*		  1* select *from emp 
		*		SQL> /		然后输入 ‘/’ 就再执行了
		* 
		*	5.用UltraEdit登录虚拟机的oracle，然后就能可视化找到写的.c文件，并编辑编程了，就相当于在windows编程一样
		*		创建一个文件夹day_03 然后创建一个.c文件
		*		通过UE软件来可视化编程，就免掉用vim编程的麻烦
		*		通过这种方式，还可以把学习笔记存到里面，很方便，比如在命令行输入man gcc 得到的东西就能存到文件中，方便查看等
		*		mkdir day_03
		*		cd day_03/
		*		touch dm01_hello.c				//然后就用UE来对这个文件编写代码，然后保存
		*		gcc dm01_hello.c -o dm01_hello	//将.c文件变成可执行文件
		*		./dm01_hello					//运行可执行文件
		*		
		* 
		*		
		*/
	}
	if (67)
	{
		/*
		*	查看用户下的进程
		*		ps -u oracle
		*	修改可执行文件的执行方式，直输入可执行文件名字即可运行
		*		vi .bash_profile
		*			将 ：PATH-$PATH:$HOME/bin:$ORACLE_HOME/lib 
		*			添加符号变为：PATH-$PATH:.:$HOME/bin:$ORACLE_HOME/lib 
		*			保存退出
		*		source .bash_profile	//更新配置使更改生效，然后就能输入可执行文件名字就能运行了 无需加./
		*		
		*	UE使用技巧：
		*		在 菜单栏的-高级-配置（下拉栏） 中，能找到比如：  自动完成（自动补全）  Tab键缩进多少（在自动换行那一栏）  等的修改
		*/
	}
	//proc基本概念
	if (68)
	{
		/*
		*	proc的概念：
		*		是一种用C/C++来访问数据库，并且在C++语句中嵌入SQL语句的形式
		*		除了C++还有java的叫jdbc 还有其他语言的很多方式来访问数据库，proc就是其中一种
		*		之前学的sqlplus也是访问数据库的一种方式，pro*x x是指应用的语言 c就是c/c++
		* 
		*	官方文档：
		*		老师说市面上所有oracle的书籍，都基本是直译官方文档的内容
		*		之前学的知识，在官网文档都有，所以会查看官方文档是很高效的事
		*		此次的proc课程也是按照官方文档的知识架构来学的
		*		
		*/
	}
	//proc初步使用
	if (69)
	{
		/*
		*	proc的重要知识：
		*		一般，我们编写.c文件，然后通过gcc或g++变成.o文件，然后再变成.exe可执行文件
		*		gcc能编译检测到.c文件的语法错误等，但是换成了proc的语法，不属于c++的范畴，就无法检测了
		*		那此时，一开始写好的语法是.pc文件，就是有proc的语法
		*		那proc的语句的作用，或者proc的作用就是将.pc文件编译变成.c文件，这样gcc就能识别编译了
		*		.pc通过proc预编译器变成.c文件
		* 
		*		ORACLE_HOME这些环境变量是在 .bash_profile里定义的（linux）
		*			可以找到proc预编译器的所在目录，即proc.exe
		*		同理windows也有proc的目录（自己找）
		*			cd $ORACLE_HOME
		*			cd bin/
		*			最终的路径为：
		*			pwd
		*			/data/oracle/product/11.2.0/db_1/bin
		*		获取proc的语法，直接输入proc即可（windows命令行也一样）
		* 
		*	小知识（快捷操作）：
		*		!gcc ：执行上一次输入的语法
		* 
		*/
	}
	if (70)
	{
		/*
		*	优化UE编译.pc界面
		*		1.将原来的.c文件用mv变成.pc，再用UE打开.pc
		*		2.UE的视图-下拉框（查看方式）-选择C++，就能将着色变为C++的风格，方便观看
		*	
		*	修改linux配置，解决proc编译.pc出错的问题
		*		1.查看gcc版本 gcc -v
		*		2.打开路径/data/oracle/product/11.2.0/db_1/precomp/admin 找到pcscfg.cfg 文件（路径在下方代码有体现）
		*		3.将/usr/lib/gcc/x86_64-redhat-linux/4.1.1/include 修改为 /usr/lib/gcc/x86_64-redhat-linux/4.8.5/include 即修改为我们安装的gcc版本
		*		4.回到day_03的目录，再proc 那个.pc文件，就能正常编译成.c文件了
		* 
		*		代码部分如下：
		*		proc dm01_hello.pc	//编译出现错误
		*		gcc -v				//获得gcc版本为4.8.5
		*		cd $ORACLE_HOME
		*		cd precomp
		*		cd admin			//进入文件夹，找到pcscfg.cfg
		*		vi pcscfg.cfg		//修改gcc的版本为我们安装的版本
		*		cd /home/oracle/day_03
		*		proc dm01_hello.pc	//再次编译就成功将.pc编译成.c文件了
		*	
		*	打开生成的.c文件，发现比我们写的原代码多了很多代码，这就是proc的工作，（老师说：不是很复杂吧？）
		*/
	}
	//Hello World
	if (71)
	{
		/*
		* 本课最好要看我们写好的源码，思绪就不会乱了
		* 
		* 打印一个hello world的流程，用嵌入式语句：
		*	1.第一次编译：	要添加头文件#include "sqlca.h"
		*		proc dm01_hello.pc
		*	2.第二次编译：	要连接头文件与动态库  
		*		gcc dm01_hello.c -o dm01_hello -I/data/oracle/product/11.2.0/db_1/precomp/public -L/data/oracle/product/11.2.0/db_1/lib -lclntsh
		*	3.运行可执行文件
		*	
		* 
		* .pc文件中要添加或者要写的代码：
		*	定义变量，宿主变量		在上下两个嵌入式语句中间的范围内，定义变量才行
		*		EXEC SQL BEGIN DECLARE SECTION;
		*			char* serversid = "scott/tiger@orcl";
		*		EXEC SQL END DECLARE SECTION;
		* 
		*	C语言中使用宿主变量
		*		printf("serversid: %s \n", serversid);
		*	链接oracle 在嵌入式SQL语句中 使用宿主变量  注意，“ ： ” 不要忘，使用宿主变量的方法
		*		EXEC SQL connect : serversid;
		* 
		*	使用.pc编译成.c时，自动生成的代码中定义好的变量
		*		int ret = 0;
		*		if(0 != sqlca.sqlcode)
		*		{						获取错误码的变量,链接oracle失败的话，就会产生这个错误码
		*			ret = sqlca.sqlcode;
		*			printf("connect error: %d \n", ret);
		*			return ret;
		*		}
		*		printf("connect ok\n");	成功的话就打印ok
		*/
	}
	if (72)
	{
		/*
		* 知识点：
		*		1.要知道proc编译的流程，第一次生成.pc 第二次编译生成.c 顺便链接头文件、动态库
		*		2.知道添加头文件sqlca.h
		*		3.能找到动态库与头文件的路径，注意有快捷方法，也知道动态库的形式与区分方法 .so这种	（找有点费时间说实话）
		*			lclncsh（不知道，也许是动态库的英文） libclntsh(动态库的名字)	
		*		4.知道链接头文件与动态库的方式，尤其是动态库
		*		5.知道写一个脚本
		*		6.知道如何查看错误码:oerr ora 1017 (1017是错误码)
		* 
		* 打印一个hello world的流程，用嵌入式语句：
		*		1.第一次编译：	要添加头文件#include "sqlca.h"
		*			proc dm01_hello.pc
		*		2.第二次编译：	要连接头文件与动态库  
		*			gcc dm01_hello.c -o dm01_hello -I/data/oracle/product/11.2.0/db_1/precomp/public -L/data/oracle/product/11.2.0/db_1/lib -lclntsh
		*				这代码很长，可以写个脚本，然后运行脚本即可，先touch一个文件（比如mycc），然后代码复制进去保存退出：
		*				然后输入chmod 775 mycc，使mycc变成可执行文件，下次执行mycc文件就相当于输入以上代码了
		*		3.运行可执行文件
		*	
		*		头文件sqlca.h的路径为/data/oracle/product/11.2.0/db_1/precomp/public，自己找用$ORACLE_HOME
		*		动态库的路径为/data/oracle/product/11.2.0/db_1/lib， 用ls libcl* lt命令能看到我们要的动态库或快捷方式 *代表所有 libcl是我们要找到文件的前几个字母
		*			其中.so文件就是动态库，.so-> 的是快捷方式 连接动态库的代码 结尾完整的是 -l libclntsh.so 把lib与.so删掉才是可用的代码（为啥？不知道）
		* 
		*	查看错误码：
		*		oerr ora 1017
		*/
	}
	if (73)
	{
		/*
		*	这个课时是课堂留给学员练习刚才操作的
		* 
		*	补充：
		*		可以通过UE，将windows的文件传到linux中，用UE传
		*/
	}
	//编译c文件
	if (74)
	{
		/*
		* 
		*	gcc编译C语言，g++编译C++语言
		*	proc默认编译成c语言的.c文件，并不编译成C++的文件，所以需要用到proc的编译选项
		*	
		*	proc编译选项：（下3个是本次主要用的，还有别的，可自行查看搜索）
		*		parse = none(C++的，默认c语言的是full) 是决定如何解析.pc文件，用C语言还是C++语法规则
		*		code  = cpp(C++的，默认c语言的是ansi_c)是决定编译后生成C++的还是C语言的文件
		*		oname = xxxxx (决定生成的.c文件名)
		*	
		*	流程：
		*		将前几课写好的.pc复制一份，然后UE打开修改成C++的语法（<iostream> 、using namespace std; printf用 cout代替 ）
		*		第一次编译：	//注意编译选项用大小写都行
		*		proc dm02_hello.pc parse=none code=cpp oname=dm02_hello.cc
		*		第二次编译：	//注意，用的是g++ 文件是.cc文件	其它与C语言的一样
		*		g++ dm02_hello.cc -o dm02_hello -I/data/oracle/product/11.2.0/db_1/precomp/public -L/data/oracle/product/11.2.0/db_1/lib -lclntsh
		*		
		*/
	}
	//proc 的 makefile编写
	if (75)
	{
		/*
		* 写makefile：
		*		touch makefile					//创建文件
		*		
		*	UE中写以下代码：
		*		all: dm01_hello dm02_hello		//让两个目标都执行，否则只执行第一个
		*
		*		dm01_hello:						//目标，下面的2行代码是规则，即按规则执行生成目标
		*			echo '=======proc dm01_hello.pc======='		//提示吧，应该是打印提示
		*			proc dm01_hello.pc
		*			gcc dm01_hello.c -o dm01_hello -I${ORACLE_HOME}/precomp/public -L${ORACLE_HOME}/lib -lclntsh
		*
		*		dm02_hello:						//注意这个是g++,编译文件是.cc
		*			echo '=======proc dm02_hello.pc======='
		*			proc dm02_hello.pc parse=none code=cpp oname=dm02_hello.cc
		*			g++ dm02_hello.cc -o dm02_hello -I${ORACLE_HOME}/precomp/public -L${ORACLE_HOME}/lib -lclntsh
		*
		*		clean:							//清除的代码，在SQL语句中输入 make clean 即可执行这个clean
		*			@rm -rf dm01_hello
		*			@rm -rf dm02_hello
		* 
		* 
		*	SQL语句中的操作：
		*		make							//执行这个makefile脚本
		*		make clean						//执行脚本中的clean
		* 
		*	注意点：
		*		执行完 ‘make clean’ ，ls查看就能发现成功删除了
		*		‘${ORACLE_HOME}’ ：是在makefile中环境变量的缩写，$ORACLE_HOME才是原来的样子，加上{}让makefile识别
		*		执行 ‘echo $ORACLE_HOME’ 查看环境变量的路径，我的是/data/oracle/product/11.2.0/db_1
		* 
		*	额外内容：
		*		在dm02_hello.pc中主函数结尾添加下面的代码，可写回退（rollback）、提交(work、commit)、断开链接(release)，
		*			EXEC SQL commit release;	//commit是提交的意思，这句的功能是提交然后退出，写了什么就执行什么
		*/
	}
	//proc的开发基础 proc的增、删、改、查
	if (76)
	{
		/*
		*	//增（插入）insert
		*	
		*	对此前文件夹分类改动，day03下创建 01hello装之前的文件，再创建一个02dbop装数据库课程的文件夹，进入02dbop
		*		cp ../01hello/dm01_hello.pc .
		*		cp ../01hello/makefile .		//将01hello的两个文件复制过来
		*										//dm01_hello.pc 改名为 dm01_baseop.pc
		*										//makefile 改成dm01_baseop的 删除dm02_hello 的内容
		* 
		*	select *from dept; SQL语句中查看dept的表  知道了列名与10~40的成员
		*	desc dept;		   查看列名 分别为DEPTNO，DNAME, LOC
		*	向表中插入数据（proc写法），插入一行，dept的表,主要看文件怎么写的，这里就只能说明有哪些增加的改动
		*		1.添加宿主变量：
		*				int my_deptno;				//需要添加到表的数据
		*				char my_dname[20];
		*				char my_loc[20];
		*		2.宿主变量赋值（我们要插入的数据）
		*				my_deptno = 50;
		*				strcpy(my_dname, "50_dname");
		*				strcpy(my_loc, "50_loc");
		*		3.proc语句书写插入
		*				EXEC SQL insert into dept(deptno, dname, loc) values(:my_deptno, :my_dname, :my_loc);	
		*				可加入之前写的错误码提示
		*		4.提交
		*				EXEC SQL commit work release;
		*/
	}
	if (77)
	{
		/*
		*	update(更新) 与 delete（删除）
		* 
		*	知识点补充：
		*		SQL语句输入中，CRT中用shift+del 能删除已经输入的内容，正常的删除键不管用
		*		SQL语句输入中，输入 / 即快捷执行上一次执行的语句
		* 
		*	笔记只能记住对文件的增加的修改，具体的完整代码看源文件
		*	
		*	//update更新
		*		printf("any key continue, update\n");
		*		printf("\n please enter you loc:");
		*		scanf("%s", my_loc);					//输入修改后的loc
		*	//proc编写update代码,并提交					//提交很重要，否则就无法执行
		*		EXEC SQL update dept set loc = :my_loc where deptno = my_deptno;
		*		EXEC SQL commit;
		*		getchar();								//卡住一下，输入任何就继续了
		*
		*	//delete 删除
		*		printf("any key continue, delete\n");
		*		getchar();
		*	//proc编写delete代码,并提交
		*		EXEC SQL delete dept where deptno = my_deptno;
		*		EXEC SQL commit;
		*		getchar();
		*
		*		printf("any key continue\n")
		*		getchar();
		* 
		*/
	}
	if (78)
	{
		/*
		*	查 select
		*	
		*	知识补充：
		*		当我们代码测试失败了，需要从SQL语句输入删除数据时，一定要记得在SQL语句删完提交
		*		用 commit;  分号不要忘，删完或者改完就要提交一次，否则我们写的makefile无法正常运行，还会出bug等隐患
		* 
		*	流程：
		*		复制一份dm01_baseop 为 dm02_baseop，删掉update与delete代码
		*		修改makefile，使其同时执行dm02_baseop，类似于此前hello_world同时生成俩可执行文件的那个
		*		在dm02_baseop中作代码编写修改，使其执行文件能打印我们插入（或者我们要查的）那一行的数据
		*		最后结果会发现我们宿主变量的数组[20]在打印的时候，不满20字节的用空格补上了，导致两个数据间隔大
		*			原因是因为oracle的数据类型导致的，客户端发报文通过实例到数据库，
		*			实例从数据库拿数据（此时报文已经存到数组了，数据类型为数组），客户端再从实例获取数据（数据类型还是数组），就带了空格
		*			此问题抛砖，就引出了接下来课程要讲的 宿主变量的数据类型
		*	
		*	dm02_baseop代码编写部分：
		*	
		*		//select	查询
		*			EXEC SQL select deptno, dname, loc into :my_deptno, :my_dname, :my_loc from dept where deptno = :my_deptno;	//注意冒号的使用，忘了就会报错
		*			if(0 != sqlca.sqlcode)
		*			{	//错误码,出错提示
		*				ret = sqlca.sqlcode;
		*				printf("select error: %d \n", ret);
		*				return ret;
		*			}
		*			EXEC SQL commit;			//提交不能忘
		*			printf("select ok\n");
		*			printf("%d, %s, %s\n", my_deptno, my_dname, my_loc);
		*			printf("any key continue\n");
		*			getchar();
		*		
		*/
	}
	//proc配置文件问题解答
	if (79)
	{
		/*
		*	问题：		此前需要修改pcscfg.cfg 文件里的配置 /usr/lib/gcc/x86_64-redhat-linux/4.1.1/include
		*	解决方案：	将4.1.1 修改为当前我们安装的gcc版本，使其使用现有gcc版本头文件
		* 
		*	原因：
		*				proc编译器的配置文件 与 操作系统gcc版本的头文件不一致
		*			
		*				.pc 通过proc编译生成.c 的过程，就是将proc的语句 如EXEC SQL这些翻译成C语言的语法
		*				那么翻译的过程中需要用到stddef.h的头文件，proc编译器就按照pcscfg.cfg文件配置的路径去找
		*				但是没有找到，因为这个路径是proc自己记录的路径，但这个头文件是gcc的头文件，gcc版本不同，这个头文件的路径也不一样
		*				所以我们要修改路径，或者说版本号 为当前安装的gcc版本，使其路径能顺利找到头文件
		*				也可以修改为当前安装的gcc版本最近支持的版本
		*	
		*	补充：
		*				网上很多人找这个问题，但一直找不到详细说明，原因就是如此
		*				老师说proc入门难就是这些原因，需要基本功扎实
		*		
		*/
	}
	//80 SQL语法知识的回顾 81proc前几课的回顾
	if (80 && 81)
	{
		/*
		*	80:
		*			多行（组函数、分组、分组过滤） 重要
		*			子查询（top-N、分页）			重要
		*			处理数据		管理表			重要
		*			视图、序列、索引				重要
		*			插入地址符 & 的用法作用
		*			
		*			案例项目：					相当重要
		*			.....						还有一些，请好好复习
		*	81：
		*			oerr ora 1	(查看错误码的具体信息，此处1为错误码)
		*			比如 delete删除一列之后 必须要commit提交， 否则会出问题
		*			.....						还有一些，但不多，看课件就好
		*		
		* 
		*/
	}
	//proc编译器的数据类型
	if (82)
	{
		/*
		*	此次源代码的路径为：
		*			/home/oracle/day_04/01_demo
		* 
		*	数据类型：
		*			char my_dname[20];		宿主变量中的 int char 这些基本数据类型是proc借用C语言的语法
		*			varchar my2_dname[20];	varchar 是proc的独有数据类型，不是借用C语言的
		*									proc编译器 是在编译时，将宿主变量翻译（转换）成C语言能够识别的语法
		*									varchar被proc翻译成了typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
		*									是一个结构体，在生成的.c文件中能找到
		*	代码改动：
		*		在day_03的dm02_baseop.pc 代码基础上的改动：
		*		1.添加了int my2_deptno;	varchar my2_dname[20];	varchar my2_loc[20]; 这三个宿主变量
		*		2.添加了查询新添的宿主变量的语句：
		*				EXEC SQL select deptno, dname, loc into :my2_deptno, :my2_dname, :my2_loc from dept where deptno = :my_deptno;
		*				printf("%d, %s, %s\n", my2_deptno, my2_dname.arr, my2_loc.arr);
		*	观测结果：
		*		1.只是添加了查询，居然查到了，可能该语句为：把查到的数据赋值给语句中的宿主变量，因为查之前就已经插入过了
		*		2.查询结果有两个，一个是借用C语言的数据类型的查询结果，一个是varchar数据类型的结果：
		*				60, 60_dname           , 60_loc             
		*				60, 60_dname, 60_loc
		*			可以观察到，采用varchar的，自动将空白部分不显示，借用的则将空的空间补空格打印
		*		3.printf varchar的变量时，因为proc将其编译成了结构体的关系，我们打印的应该是结构体成员.arr
		*/
	}
	//proc 数据类型知识体系搭建（程序员角度）
	if (83)
	{
		/*
		*	数据类型的知识体系（框架）：
		*		有三种数据类型：
		*				宿主变量数据类型、外部数据类型、内部数据类型
		*		数据流通整体流程：
		*				1. .pc（应用程序）通过libclntsh.so（动态库）编译成.c文件 ，（宿主变量类型转换成外部数据类型）
		*				2. .c文件数据通过网络传输到oracle实例
		*				3. 实例将数据写入oracle数据库，							（数据库中则将外部数据类型转换成内部数据类型）
		*				4. 数据库被检索，数据又返回到应用程序						（内部数据类型此时 不转换 成外部数据类型）
		*		与程序员相关的类型：
		*				只有宿主变量类型是程序员能操控、关注的
		*				宿主变量与外部数据类型之间的转换能够操作：
		*					宿主变量到外部数据类型，有两种转换方式：1.自动转换（就像我们之前写的代码都是自动转换）2.手工转换（需要特定操作）
		*					就比如varchar自动转换成结构体，如果选择手动转换，就能转换成特定的
		*		数据类型之间的转换，及各自特点：
		*				1.外部数据类型（我简称外数吧）写入到数据库里时，外数 转变成 内数
		*				2.但是检索时， 内数从数据库出来，不能转换成 外数 （不做无用功）
		*					因为外数不一定是固定的形式，有java的类型，C++的类型等
		*					所以不转换成外数 而是内数 转换成 .c能识别的基本数据类型
		*				3.外数是在传输过程中会出现的数据类型，所以自然也就包含了内数与宿主数 的数据类型 有重合的地方，外数的数据类型有编号
		*				4.内数 的每种类型都有编号 外数也同样有编号，
		*					但是问题来了：内数到外数的过程中，二者同样的数据类型但编号不同
		*					所以内数出来，需要指定转换成哪种类型（特殊的方式吧，还没学）
		*				5.宿主变量到外部数据类型，有两种转换方式：1.自动转换（就像我们之前写的代码都是自动转换）2.手工转换（需要特定操作）
		*
		*/
	}
	//proc 数据类型的转换
	if (84)
	{
		/*
		*	知识点补充：
		*		指针也是一种数据类型，是所指内存空间的 数据类型
		*		string是char能转换成的外部数据类型的一种
		*		宿主变量不能随意转换，要外部数据类型支持这种转换才行，比如char能转成string、varchar...等，但不能转成int
		*		可以查看老师的图表，知道哪些能转成哪些
		* 
		*	对day_04下的 dm01_baseop.pc 修改
		* 
		*	代码增改，改动位置请看源代码：
		*		1.声明数组 数据类型（	固定大小内存块的别名，就是要转换成谁就给谁起别名）
		*		2.程序员手工干预（编写代码），进行数据类型的转换（只能是 宿主变量类型 ===> 外部数据类型 ）
		*		代码如下：
		*			typedef char DnameType[20];				//1.声明数组 数据类型 别名
		*			typedef char LocType[20];
		*		
		*			EXEC SQL TYPE DnameType is string(20);	//2.程序员手工干预（编写代码），进行数据类型的转换 转换成string
		*			EXEC SQL TYPE LocType is string(20);
		* 
		*			int my3_deptno;	
		*			DnameType 	my3_dname;					//3.proc编译器对这个数据类型进行转换
		*			LocType		my3_loc;
		* 
		*													//检索打印，结果string与varchar一样，是不带空格补全的
		*			EXEC SQL select deptno, dname, loc into :my3_deptno, :my3_dname, :my3_loc from dept where deptno = :my_deptno;
		*			printf("%d, %s, %s\n", my3_deptno, my3_dname, my3_loc);
		* 
		*/
	}
	//宿主变量与 指示变量的作用
	if (85)
	{
		/*
		*	此课的源代码：
		*		将day04下的dm01_baseop.pc 复制一份为dm02_ind.pc
		*		删掉几个select，留一个即可，宿主变量的声明同理，留一组即可（给测试指示变量用）
		* 
		*	宿主变量的性质：
		*		1.宿主变量分别连接着 ： 嵌入式SQL语言群 、 C语言群
		*		2.故宿主变量相当于一个缓冲区， 两个群之间的缓冲区
		*	宿主变量的作用：
		*		1.通过SQL语言群，即EXEC SQL写入数据库（输入）
		*		2.通过SQL语言群，即EXEC SQL读出数据库（输出）
		*	
		*	指示变量的知识：
		*		1.指示变量是一个标识变量，值为-1 时 被识别到，则代表了 空值 NULL
		*		2.这个标识需要被引用才行，引用该标识的变量，不论值为多少，只要标识为-1 那么不论读写，都被识别成 空值 NULL
		*		3.由于数据库读写量大，所以空值的情况很常见，所以指示变量很重要
		*		4.指示变量声明时，规定只能是short类型
		*	指示变量的使用：
		*		1.写入时：
		* 
		*	代码增改：
		*		short loc_ind;		//指示变量的声明
		*		loc_ind = -1;		//初始化
		*	
		*		//proc编写插入语句	//写的指示变量应用
		*		EXEC SQL insert into dept(deptno, dname, loc) values(:my_deptno, :my_dname:loc_ind, :my_loc);
		*		//检索				//读的指示变量应用
		*		EXEC SQL select deptno, dname, loc into :my3_deptno, :my3_dname:loc_ind, :my3_loc from dept where deptno = :my_deptno;
		*		//检索下添加指示变量判断
		*		if(-1 == loc_ind)		
		*			strcpy(my3_dname, "null");
		* 
		*	代码解析：
		*		1.指示变量的引用方式：   :loc_ind
		*		2.写的时候用了指示变量修饰		:my_dname:loc_ind	  不管my_dname是什么，都当做空值了，因为标识loc_ind为-1
		*		3.读的时候（select）：		:my3_dname:loc_ind	  此时原本读到的是空值。但因为指示变量判断语句，将my3_dname初始化成"null"，
		*	打印结果：
		*		读：60, null, 60_loc
		*		写：60                60_loc			（通过select dept的表得知成功插入，dname因为指示变量为-1所致为 空值）
		*/
	}
	//oracle存储，中文乱码问题
	if (86 && 87)
	{
		/*
		*	分析存储的整体框架，分析问题可能出在2个方面，2方面思路：
		*		1.我们使用 UE（应用程序） 保存到 服务器， 服务器 链接到 数据库
		*		2.所以中文乱码 可能是 服务器---数据库  时出现了问题，即数据库本身存储配置导致
		*		3.也有可能是UE（应用程序） 写入时 就出现了问题，导致传输了乱码过去
		*	判断是哪一种问题：
		*		1. 直接在SQL语句中 手写sql命令插入中文，即直接存入数据库，然后查看表，就知道是否是数据库存储问题了
		*		2. 在.pc文件代码中，给宿主变量赋值中文，然后看.pc文件就知道是否是我们的UE（应用程序）的问题了
		*	
		* 
		*	(1)sqlplus(数据库存储的问题)：
		*		SQL语句直接插入带中文的行、查询，如果没显示中文则说明sqlplus没有配置中文：
		*			insert into dept(deptno, dname, loc) values(60, '60_我的dname', '60_我的loc');
		*			commit;
		* 
		*		sqlplus 通过 .bash_profile 中的NLS_LANG 环境变量决定显示的语言：
		*			vi .bash_profile		//最下面添加如下代码，把原来的NLS_LANG注释掉 用#
		*				export NLS_LANG="SIMPLIFIED CHINESE_CHINA.AHS16GBK"
		*			保存退出后，source执行，或者退出到root 再登录oracle，环境变量错误的话会有提示
		* 
		*	（2）CRT（应用程序）输入的问题
		*		1.复制 dm02_ind.pc 为 dm04_langue.pc,然后插入的宿主变量我们赋值为中文，运行或不运行都行
		*		2.我们用CRT打开（注意不是UE）dm04_langue.pc 会发现注释或者我们的中文都变乱码了，说明UE保存到服务器时出现了乱码问题
		*			UE菜单栏--文件--转换--ASCII 转 UTF_8  这样改动就好了 
		*			CRT那边退出到root再重进即可
		*	（3）也有可能是linux的字符编码问题，在 65 课有解决方法
		*		
		* 
		*	本课代码改动dm04_langue.pc：
		*		把指示变量注释掉，它的引用也去掉
		*		makefile添加dm04_langue的代码
		*		出现：connect error: -12705 问题，是NLS_LANG配置出错
		*		delete dept where deptno>=60;	可删掉多个
		* 
		*	93课又出现问题，不是中文乱码，而是提示的信息乱码了
		*		不知道设置哪个有用啊，
		*		设置LANG=zh_CN.UTF-8 or LANG=zh_CN.GBK等解决. linux用source .bash_profile命令生效.
		*		 NLS_LANG=
		*						"SIMPLIFIED CHINESE_CHINA".ZHS16GBK	
		*						"SIMPLIFIED CHINESE_CHINA".AL32UTF8
		*						"AMERICAN_AMERICA.AL32UTF8"				//这个是以前的
		*						"SIMPLIFIED CHINESE_CHINA.UTF8"
		*						"AMERICAN_AMERICA.ZHS16GBK"	
		*			最终我用了LANG=zh_CN.UTF-8 还有 CHINA.AL32UTF8的解决了,连提示也换成中文的了
		*			
		*		linux查看nls_lang
		*			echo $NLS_LANG
		* 
		*		后面登陆不了用户了，只能登陆sysdba 
		*			先查看监听，把监听打开lsnrctl start
		*			然后在sysdba下输入 shutdown immediate; 关闭数据库
		*			再startup启动数据库		
		* 
		*		oracle超级用户登录，查看内部字符集的两个命令
		*			SELECT * FROM v$nls_parameters;
		*			select userenv('language') from dual;
		* 
		*	三. locale常用命令
		*		1. 查看现有语言环境：locale
		*		2. 所有可用语言环境：locale -a，可用来查看是否安装某种字符集，如果没有，就安装
		* 
		*	CRT暂时无法显示中文问题：
		*		CRT无法显示中文的原因找到了：操、操操，是因为CRT字体设置原因，有一些字体不支持中文显示，我的Linux还是中文的
		*			vi /etc/locale.conf     写入信息：
		*				LANG="zh_CN.UTF-8"					//这一句最重要，其他俩是显示保存的吧，这句必须有
		*				SYSFONT="latarcyrheb-sun16"
		*				SUPPORTED="zh_CN.UTF-8:zh_CN:zh"
		*/
	}
	//oracle 通讯区与错误处理机制
	if (88 && 89)
	{
		/*
		*	我写了老师的错误处理机制到dm05里面，这里我就不写了
		*	记得写makefile
		* 
		*	会UE的查找 ctr+f 勾选所有打开文件 就能方便查找了
		*	linux中也有许多垃圾代码，不要完全迷信权威
		*	许多动态库的API不知道啥意思，用本课知识点去查
		* 
		*	通讯区：
		* 
		* 
		*	错误处理机制：
		*		不需要背，知道基本的，会查看即可，
		*		1..pc编译成.c时，加了很多代码，当SQL语句出错时，会把错误放到 sqlca.h 的结构体中
		*		2.我们打开windows下的oracle文件夹里的sqlca.h，找到sqlca，发现是一个结构体，有许多成员，sqlca.sqlcode就是我们之前用来获取错误码的
		*			他的许多成员都定义好，有功效的，所以我们才能直接使用，要会查这个
		*			例如：sqlerrnl是错误长度 sqlerrmc是错误信息
		*		3.写一个错误处理函数：	EXEC SQL WHENEVER SQLERROR DO sqlerr();
		*								EXEC SQL connect : serversid;
		*			SQLERROR是条件 DO sqlerr();是动作
		*			就是，EXEC SQL connect : serversid; 出错时  会自动执行sqlerr();函数
		*		4.sqlerr()函数：
		*			EXEC SQL WHENEVER SQLERROR CONTINUE;
		*			printf("err reason:%.*s\n", sqlca.sqlerrm.sqlerrml, sqlca.sqlerrm.sqlerrmc);
		*			EXEC SQL ROLLBACK WORK RELEASE;
		*			exit(1);
		*		5.sqlerr()函数中 ，printf("err reason:%.*s\n", sqlca.sqlerrm.sqlerrml, sqlca.sqlerrm.sqlerrmc);
		*			其中%.*s 其实是%%ds == %70s   但是c语言语法不支持，所以就搞了这种写法 就是限制%s的长度，左对齐  这里70是sqlerrnl，
		*		6.sqlerr()函数中，CONTINUE不是循环中的continue，这里的意思是，两个EXEC SQL之间的代码出错了，也不管，继续执行，就执行了exit
		*			如果没有CONTINUE，那么代码出错，sqlerr()---EXEC SQL ROLLBACK WORK RELEASE;---sqlerr()
		*			就形成了递归，且是一个死循环递归，所以CONTINUE保证不会递归
		*		6.dm05中，我们故意把connect 给登陆错误，然后make，会发现打印了错误信息，而且没有执行此前一直用的错误码打印（就是每个插入，查询下都写一个错误码提示）
		*			原因是一出错，就跳到sqlerr();执行，然后exit（1）退出了
		*		7.EXEC SQL WHENEVER SQLERROR DO sqlerr(); 也可以用sqlerr02()；
		*			这个会打印详细信息，包括出错的语句，其中sqlgls(stm, &stmlen, &sqlfc);就是将出错的SQL语句、长度放进去，（内存打包）
		* 
		*		8.重点：sqlerr(); 、 sqlerr02()； 都不用我们写，是头文件已经定义好的，我们使用就可以了
		*			有了EXEC SQL WHENEVER SQLERROR DO sqlerr();，就不必每个检索、插入、删除、登录下都获取错误码了
		*			直接就能打印错误
		*		
		*	代码测试：
		*		我们故意把登录的用户密码写错,make编译后执行看看
		*		本课笔记有点多，杂乱，主要记住的就是要会查看源码头文件分析，会查看文档，知道有提供的错误处理机制
		*		
		*
		*/
	}
	//数组操作数据
	if (90 && 91)
	{
		/*
		*	代码改动：
		*		将dm05_err.pc复制dm06_array.pc
		*		删除错误码打印、插入、检索、宿主转外部、宿主变量初始化等 使代码尽量简洁
		*		sqlca.sqlerrd[2]
		* 
		*		主函数：
		*			int ret = 0, i = 0;
		*		添加数组宿主变量（删除以前的）：
		*			int 		count;
		*			int 		my2_deptno[100];			
		*			varchar 	my2_dname[100][20];		
		*			varchar		my2_loc[100][20];
		*			short 		loc_ind[100];
		*		批量从表中获取数据：
		*			EXEC SQL select deptno, dname, loc into :my2_deptno, :my2_dname, :my2_loc:loc_ind from dept;
		*		批量打印数组：：
		*			count = sqlca.sqlerrd[2];		//sqlca.sqlerrd[2];存放有效的数组的个数
		*			printf("count: %d\n", count);
		*			for(int i = 0; i < count; i++)
		*			{
		*				printf("%d\t%s\t%s\t\n", my2_deptno[i], my2_dname[i].arr, my2_loc[i].arr);
		*			}
		*	
		*	注意：
		*		用了varchar 所以打印要打印.arr的成员
		*		loc_ind[100]; 它的数量不能低于宿主变量数组元素个数 每个宿主变量都要有一个指示变量对应
		*		sqlca.sqlerrd[2] 获取有效数组元素个数
		*/
	}
	if (92)
	{
		/*
		*  ps -u oracle 查看oracle进程
		* 
		*	纠错：
		*		1.SQL语句输入，dept插入一个带空值的行
		*				insert into dept(deptno, dname) values(70, '70');
		*		2.然后批量获取数据不引用指示变量
		*				EXEC SQL select deptno, dname, loc into :my2_deptno, :my2_dname, :my2_loc from dept;
		*		3.然后保存，make编译执行，发现出错了，因为如果不引用指示变量的化，就无法处理空值的情况了
		* 
		*	创建新表,SQL语句中输入：
		*		create table dept2 as select *from dept where 1=2;
		* 
		*	批量将获取的数据导入到新表中：
		*		EXEC SQL For:count insert into dept(deptno, dname, loc) values(:my2_deptno, :my2_dname, my2_loc:loc_ind);
		* 
		*	遇到的问题：
		*		不知道表里什么时候多了一个只有 deptno == 0 的行 其他两个都为空值
		*			而我的空值判断只判断了loc 所以一直出错 结果我发现以后，获取，导入我都改成了 :my2_dname:loc_ind 就没问题了
		*			我单独给my2_dname创建一个指示变量，改成:my2_dname:dname_ind
		*			但是有警告：PCC-W-02344 说是数组数量不对等，原来是int my2_deptno[100]; 我写成20了，其它都是100个数组，这个只有20，改回100即可
		*/
	}
	//游标
	if (93 && 94)
	{
		/*
		* 
		*	游标存在的意义：
		*		假设表里数据有10万行，不可能通过数组操作全给导出
		*		此时就用到了游标，找到特定的那一行获取数据
		*		游标是为了某一次查询而生的，所以与select有关（定义游标时就关联上了）
		* 
		*	游标的操作：
		*		1.定义游标	关联对应的select语句（查询）
		*		2.打开游标	打开并使用
		*		3.提取数据	将查到数据into到宿主变量中  
		*		4.关闭游标
		*	
		*	EXEC SQL 标准：
		*		ANSI定义了嵌入式标准，各个厂商开始实现 db2、 informix、 oracle 等厂商陆续实现 
		*		标准规定 100 表示没数据了，但是Oracle自己定义了 11403 表示同样效果
		* 
		*	游标代码部分：
		*		源文件路径：/home/oracle/day_04/02_demo  将上次课的dm06 与makefile 复制到这里成了dm01
		* 
		*		1.定义游标
		*					EXEC SQL DECLARE c CURSOR FOR select deptno, dname, loc from dept; 
		*		2.打开游标
		*					EXEC SQL OPEN c;
		*		3.获取数据	每获取一行数据，游标自动跳到下一行
		*					当sqlca.sqlcode为100 或 11403 时，就代表表中数据获取尽了
		*					打印游标当前获取到的那一行
		*					while(1)
		*					{
		*						EXEC SQL FECTH c INTO :my2_deptno, :my2_dname:dname_ind, :my2_loc:loc_ind;
		*						if(100 == sqlca.sqlcode || 11403 == sqlca.sqlcode)
		*						{
		*							break;
		*						}
		*						printf("%d\t%s\t%s\t\n", my2_deptno, my2_dname.arr, my2_loc.arr);
		*					}
		*		4.关闭游标
		*					EXEC SQL CLOSE c;
		* 
		*	注意点：
		*		本课没采用二维数组，且宿主变量用的是varchar，所以打印时要加.arr
		*					
		*/
	}
	if (95)
	{
		/*
		*	UE使用注意：
		*			当保存到桌面时，会自动打开桌面上的文件，而不是服务器上的文件，此时要格外注意
		*			区分桌面上还是服务器上的文件，请看UE的拖拽栏，会显示该文件的路径，由此区分
		*			如果不注意的话，一直在编辑桌面版，而服务器上的文件没变化，就会很费时间的找问题
		* 
		*	上两节课代码的问题遗漏：
		*			1.发现打印的结果与表中数据不符（varchar的特性）
		*					对比发现 如 30 它的dname 与 loc 多了 RCHNG  与  K 
		* 
		*			2.原因分析：因为varchar 重新赋值后不会删掉此前记录的数据，而是将新的数据覆盖旧数据，且记录的有效字节数没有变化
		*			
		*			3.解决方案：
		*					1.用memset(),每次获取完数据打印后，都将宿主变量重新清空
		*					2.用string的宿主变量类型（手工转换 宿主变量转成外部数据类型）
		*							string的外部数据类型不会出现保留旧数据的情况，放心使用
		*			错误打印结果如下：
		*					0
		*					10      ACCOUNTING      NEW YORK
		*					20      RESEARCHNG      DALLASRK
		*					30      SALESRCHNG      CHICAGOK
		*					40      OPERATIONS      BOSTONOK
		*					90      60_我的dname    60_我的loc
		*			实际表中数据如下：
		*					 0
		*					10		ACCOUNTING      NEW YORK
		*					20		RESEARCH        DALLAS
		*					30		SALES           CHICAGO
		*					40		OPERATIONS      BOSTON
		*					90		60_我的dname    60_我的loc
		*	
		*	对源代码代码修改部分：
		* 
		*			1.memset（）重新清空varchar的成员，（添加在打印语句后）
		*					memset(my2_dname.arr, 0, 20);
		*					memset(my2_loc.arr	, 0, 20);
		*		
		*			2.宿主变量手工转换成string的外部数据类型
		*					全局区添加：
		*							typedef char dnametype[20];
		*							typedef char loctype[20];
		*					宿主变量区添加：
		*							//手工转换，宿主变量 转换 外部数据类型的 string，不会出现varchar的旧数据清理不干净问题
		*							EXEC SQL TYPE dnametype	is string(20);
		*							EXEC SQL TYPE loctype	is string(20);
		*
		*							int 		my3_deptno;								
		*							dnametype 	my3_dname;						
		*							loctype		my3_loc;
		*							short 		loc_ind3;
		*							short 		dname_ind3;
		*					剩下将my2_dname.arr 等 替换成 my3_dname等 即可
		*					memset注释掉
		*/
	}
	//数据库课程总结，面试的重点标注
	if (108 && 109)
	{
		/*
		*	本课老师大概回顾了一下之前的课程，并且说了哪些是需要重点掌握的（面试、工作用得多）
		*		比如proc就不是重点掌握的，尤其最后的动态sql不作要求（但可以写成案例的形式）
		*		安装oracle也不是必须会的，公司会有人专门安装，但老板要求的话还是得会
		*/
	}
	//windows下配置proc
	if (110 && 111 && 112 && 113)
	{
		/*
		*	windows下配置proc需要攻克的问题：
		*			1.把proc编译器集成到 vc6.0 或者 vs2019 中
		*					1）找到proc.exe
		*					2）让编译器能找到proc头文件
		*					3）让编译器能找到文件动态库
		*			2.需要让proc编译器能找到vc6.0的include头文件（即便是VS编译器也需要vc6.0的include头文件，VS本身的不可以）
		*					1）proc要编译1.pc要使用gcc头文件 vs头文件
		* 
		*	具体操作步骤：
		*			1.详情看112（VS下配置proc编译环境）
		*			2.注意点：
		*					1）在最后的一个步骤中，需要点击应用然后才会弹出相关的操作框，才能继续操作
		*	
		*	注意点：
		*			要用到的时候再看视频吧，现在暂时用不到
		* 
		*/
	}


	//Mysql的课程 正式启动					快速学习的技巧：多看原始资料，穿一手鞋
	//案例出现在P122 中 （生成、创建表的脚本）
	//版本下载安装与课程重点
	if (114)
	{
		/*
		*	课程重点：
		*			1.主要讲与oracle不一样的点，重复的就不讲了
		*			2.中文乱码是难点
		* 
		*	版本安装：
		*			0.我的安装是按照这个帖子的来装的：https://developer.aliyun.com/article/47237#slide-11 没有用老师的方法
		*			1.查看当前版本（linux），卸载旧版本
		*						rpm -qa | grep -i mysql	查询服务器上曾经安装的版本 会出现名字
		*						which mysql				检查在哪里，会出现目录
		*						rpm -e ( mysql名字)			
		*								或：rpm -e (mysql名字) --nodeps --allmatches		//不理会依赖关系，删除第一步找出来的相同的mysql
		*						rm -rf /var/lib/mysql  该目录（第二步找到的目录）
		*						旧版本还要删除一些文件夹：
		*								rm -r /etc/my.cnf
		*								rm -rf /var/lib/mysql
		*								rm -rf /var/share/mysql
		*								rm -rf /usr/bin/mysql*
		*							或：
		*								find / -name mysql
		*								删除查询出来的所有东西
		*						删除mysql自动生成的用户：
		*								sudo userdel -r mysql	//删除用户及其主目录，有时会出现进程在继续无法删除，service mysql stop 关闭数据库继续操作即可
		*						
		*			2.上传安装包安装
		*						老师有三个安装包上传，有服务器、客户端、devel （我不知道我的安装好了没）
		*			3.安装好以后：
		*						mysql安装后设定了默认密码，需要修改，默认密码放在/root/.mysql_secret文件中，可修改	（我的版本没有这个玩意，用别的方式修改的：下一课笔记有）
		*	mysql的版本：
		*			1.mysql创建时是开源的、免费的，用开源来换取世界上优秀程序员的维护，所以有社区版与个人版
		*			2.但是oracle公司收购mysql以后，搞了个企业版（收费）
		*			3.oracle对中国地区的mysql下载有限制，老师说是因为免费，然后大陆的公司有许多让人不开心的操作，oracle就封锁了中国地区ip
		*						所以需要在官网（oracle官网）注册下载
		* 
		*/
	}
	//mysql的启动与退出
	if (115)
	{
		/*
		*	初次接触mysql：
		*			1.mysql是一个服务，所以是在root用户下启动和关闭
		*			2.安装后会虚拟一个mysql用户，不是真的用户，可以su - mysql登录 用户名字叫mysql
		*			3.创建一个用户为 Mymysql (啥名都可以) 来作为操作mysql的用户 （linux是多用户的操作系统）
		*			4.需要修改mysql的root的密码，不修改无法登录，修改方式的链接在下面的笔记中有提到
		*			5.启动并登录mysql ： root用户：直接输入mysql即可 非root用户：下面有笔记
		*			6.用oracle的查询时间的命令，会发现mysql不支持，说明mysql与sqlplus有不一样的地方、命令等
		*					oracle查询时间：
		*							select sysdate from dual;		//虚表打印时间
		*					mysql查询时间：
		*							select now() from dual;			//虚表打印时间
		*							select now() ;					//简化版本
		*	
		*	centos创建新用户与删除：
		*			1.创建用户
		*					sudo adduser mysql01					//创建一个名称为"mysql01"的新用户
		*					sudo passwd mysql01						//修改密码
		*					sudo usermod -aG wheel mysql01			//授予sudo权限
		*			2.删除用户：
		*					sudo userdel mysql01					//删除用户但不清除主目录
		*					sudo userdel -r mysql01					//删除用户及其主目录
		*	
		*	用root用户启动与关闭数据库：
		*			1.查看进程
		*					ps -u mysql 
		*			2.启动
		*					////service mysql start	老师的版本应该很旧了，旧方法
		*					systemctl start mysqld		5.6版本方法
		*			3.关闭
		*					////service mysql stop
		*					systemctl stop mysqld		5.6版本方法
		*			4.终止MySQL进程： 
		*					killall  mysqld
		*			
		*	用mysql01用户来登录数据库：		
		*			1.登录mysql01用户：
		*					su - mysql01
		*			2.登录mysql	(-u 是超级用户 -p 是密码)
		*					////mysql -uroot -proot		//旧方法
		*					mysql -uroot -p    我的版本的方法： 5.6以后都是这种方式了，输完回车然后输入root的密码
		*		
		*			3.我遇到无法登录的问题：ERROR 1045 (28000): Access denied for user 'root'@'localhost' (using password: YES)
		*					我按照这个解决了：https://blog.csdn.net/Roy_70/article/details/78798815	就是退出mysql，用非密码状态登录修改密码，再重启
		*					不同版本的解决方式不一样以5.7版本为界
		*					且我的要用到的路径为：/usr/bin/mysqld_safe
		*/
	}
	//root用户无法启动mysql kill杀进程
	if (116)
	{
		/*
		*	问题与解决方案：
		*			1.root无法启动mysql，或者无法正常关闭mysql
		*			2.可能是后台进程还在运行的问题，用 ps -u mysql 查看进程，记录PID号
		*			3.用命令来杀掉进程（2种方式）：
		*						1.kill -9 PID号		把对应的mysql进程杀掉
		*						2.killall  mysqld	杀掉所有mysql进程
		*			4.重新启动mysql
		*						systemctl start mysqld
		*/						
	}
	//数据库的	增删改查 
	if (117)
	{
		/*
		*	知识点：
		*		1.oracle 与 mysql 在数据库方面的差异（以目前我的知识点来说）
		*					1.oracle是基于用户的管理系统，有一个信息系统就创建一个用户，在用户之下创建表空间，不同用户的权限不同（比如sysdba、scott）
		*								所以数据库的所有字符集在安装oracle时，就已经配置好了，所有表共用一个字符集，比如utf8
		*								oracle需要提交
		* 
		*					2.mysql是一个基于数据库的管理模型，有一个信息系统就创建一个数据库，在数据库之下创建表空间（N个），但问题也就来了
		*								每个表都是一个独立数据库，那么每个数据库就有不同的字符集的情况了，实际也是这样的，但不特定指定的话有一个默认类型
		*								mysql不需要提交
		*	
		*					3.一个基于用户，一个基于数据库，那么mysql的数据库的增删改查就与oracle的不一样了
		*								mysql就是真的数据库的增加、删除、修改，oracle就是用户的增删改查
		* 
		*		2.mysql就是真的数据库的增加、删除、修改，oracle就是用户的增删改查
		*		
		* 
		*	基本语法：
		*		1.显示mysql当前有的数据库：
		*					show databases;
		*		2.显示数据库创建过程的语句（其实就是显示有哪些指定信息，比如字符集，校对规则啥的）
		*					show create database db_name;
		*		3.修改数据库：就是修改字符集啥的
		*					alter database db_name character set utf8;		character不用刻意记，显示床过程就会有它，表示字符集
		*		4.数据库删除语句
		*					drop database [if exists] db_name;				[if exists]不知道啥，不要记
		* 
		* 
		*	练习快速熟悉：
		*	增：
		*		1.创建一个名为mydb1的数据库
		*					create database mydb1;
		*		2.创建一个使用utf-8字符集的mydb2的数据库
		*					create database mydb2 character set utf8;
		*		3.创建一个使用utf-8字符集，并带校对规则的数据库mydb3
		*					create database mydb3 character set utf8 collate utf8_general_ci;
		*	查：
		*		4.显示所有数据库
		*					show databases;
		*		
		*		5.显示数据库的语句信息
		*					show create database mydb2;
		*	改：
		*		6.修改mydb1的字符集为gbk（utf8）
		*					alter database mydb1 character set utf8;
		*	删：
		*		7.删除数据库mydb2
		*					drop database mydb2;
		* 
		*	数据库的语句信息（以mydb2为例）：
		*		CREATE DATABASE `mydb2` /*!40100 DEFAULT CHARACTER SET utf8 
		*					其中 `mydb2` 这俩不是单引号，而是 ~ 键（esc下面那个），意思是这个单词大小写敏感（数据库名嘛）
		* 
		*	字符集：
		*		不指定的话，如mydb1，字符集默认为latin1（拉丁）：
		*					mydb1    | CREATE DATABASE `mydb1` /*!40100 DEFAULT CHARACTER SET latin1
		*							
		*/
	}
	//表（数据）	增删改查
	if (118 && 119 && 120)
	{
		/*
		*	118 119 是重复的 120是讲分组 group by 在mysql的问题（最下面的例子）
		*	
		*	基本语句：
		*		1.进入对应数据库的方式，或者数据库之间的跳转
		*				USE name_db;
		*		1.1显示当前数据库下的所有表
		*				show tables;
		*		2.指定查看表，并起别名： as可不加、  “”也可以不加（但不能有空格，oracle也是一样的）、 可以做运算
		*				select id, name as "名字", salary*12 年薪 from employee where id >= 2;
		*		2.在对应数据库中创建表：
		*				
		*		3.表中插入新的列
		*				ALTER TABLE table	ADD (column);
		*		4.表中修改列
		*				ALTER TABLE table MODIFY (column);
		*		5.表中删除列
		*				ALTER TABLE table DROP (column);
		*		6.查看当前数据库中的表名：
		*				show tables;
		*		7.分组：
		*				group by（是作为关键字加在select语句上的）
		*	
		*	注意点：
		*		mysql中的分组（group by）分组不严格，最下方的案例有说明
		*
		*
		*	创建一个员工表，Employee,并添加一些记录：
		*				由于mysql对换行输入的空格处理得不好，要多行复制的话，换行时不能带空格（oracle是能支持空格的），所以必须左对齐才能复制输入*/
	
//创建一个员工表，Employee,并添加一些记录：
/*
========>进入对应的数据库
use mydb1;

========>在对应数据库中创建表
create table employee(
id int,
name varchar(20),
sex bit,
birthday date,
salary double,
entry_date date,
resume text
);

========>查询该表创建过程的语句
show create table employee;

========>表中插入数据
insert into employee(id, name, sex, birthday, salary, entry_date, resume) values(1, '张三', 1, '1983-09-21', 15000, '2021-06-24', '一个技术高手');
insert into employee(id, name, sex, birthday, salary, entry_date, resume) values(2, '李四', 1, '1984-09-22', 10000, '2021-07-24', '一个技术老鸟');
insert into employee(id, name, sex, birthday, salary, entry_date, resume) values(3, '王五', 0, '1989-09-23', 7000, '2021-05-24', '一个技术新手');
提示错误：ERROR 1366 (HY000): 
原因：数据库的编码问题，修改为utf8即可
解决：alter database mydb1 character set utf8;

再次插入提示错误：ERROR 1366 (HY000):
原因：name的字符编码格式有问题
解决：
	SHOW FULL COLUMNS FROM employee; 查看建表信息，发现varchar(20) | latin1_swedish_ci 不是utf8
	修改它的字符集为utf8_unicode_ci
	alter table employee change name name varchar(20) character set utf8 collate utf8_unicode_ci not null default ''; 

再次插入提示错误：ERROR 1366 (HY000):
原因：这一次是resume，但是不能直接修改修改text，有报错：ERROR 1101 (42000):
解决：
创建数据库的时候加上这个：character set utf8 collate utf8_general_ci;
创建表的时候末尾加上这个（不加也可，但数据库必须有校对规则）：ENGINE=InnoDB DEFAULT CHARSET=utf8;	
即建库和建表时都使用相同的编码格式

删除该表：drop table employee; ，修改数据库为 character set utf8 collate utf8_general_ci;
进入数据库重新建插入数据，并查看
	select *from employee;

========>指定查看，起别名
select id, name as "名字", salary*12 年薪
from employee
where id >= 2;
	

*/

		/*
		*	综合案例，帮助学习：
		*		创建一个学生表
		*				create table student(id int, name varchar(20), chinese int, english int, math int);
		*		插入数据
insert into student(id,name,chinese,english,math) values(1, '范建',80,85,90);
insert into student(id,name,chinese,english,math) values(2,'罗况',90,95,95);
insert into student(id,name,chinese,english,math) values(3,'杜子腾',80,96,96);
insert into student(id,name,chinese,english,math) values(4,'范冰',81,97,85);
insert into student(id,name,chinese,english,math) values(5,'申晶冰',85,84,90);
insert into student(id,name,chinese,english,math) values(6,'郝丽海',92,85,87);
insert into student(id,name,chinese,english,math) values(7,'郭迪辉',75,81,80);
insert into student(id,name,chinese,english,math) values(8,'拎壶冲',77,80,79);
insert into student(id,name,chinese,english,math) values(9,'任我行',95,85,85);
insert into student(id,name,chinese,english,math) values(10,'史泰香',94,85,84);
		* 
		* 
		*	练习，快速熟悉：
		*		1.查询表中所有学生的信息
		*				select *from student;
		*		2.查询表中所有学生的姓名和对应的英语成绩
		*				select name, english from student;
		*		3.查询所有出现的英语成绩（去掉重复：过滤，关键字distinct）
		*					select english from student grup by english;
		*				select distinct english from student;	
		*		4.在所有学生英语分数上加10分特长分
		*				select name, english+10 from student;
		*		5.统计每个学生的总分（要用别名）
		*				select name, chinese+english+math 总分 from student;
		*		6.查询姓名为罗况的学生成绩
		*				select *from student where name = '罗况';	//"罗况" 双引号也行
		*		7.查询英语成绩大于90分的同学
		*				select *from student where english > 90;
		*		8.查询英语分数在 85－95之间的同学
		*				select *from student where english between 85 and 95;
		*				select *from student where english>=85 and english<=95;
		*		9.查询数学分数为84,90,91的同学
		*				select *from student where math=84 or math=90 or math=91;
		*				select *from student where math in(84,90,91);
		*		10.查询数学分>85，语文分>90的同学
		*				select *from student where math>85 and chinese>90;
		*		11.对数学成绩排序后输出
		*				select *from student order by math;
		*		12.对总分排序后输出，然后再按从高到低的顺序输出
		*				select *, chinese+english+math 总分 from student order by chinese+english+math desc;
		*		13.对姓任的学生总成绩倒序输出
		*				select *, chinese+english+math 总分 from student where name like "任%" order by chinese+english+math desc;
		*		14.统计总分大于250的人数有多少？
		*				select count(*) 人数 from student where chinese+english+math > 250;
		*		15.求全班各科总成绩
		*				select sum(math) 数学总成绩, sum(chinese) 中文总成绩, sum(english) 英语总成绩 from student;
		*		16.求全班总成绩
		*				select sum(math)+sum(chinese)+sum(english) 总成绩 from student;
		*				select sum(math+chinese+english) 总成绩 from student;
		*		17.求全班英语平均分
		*				select avg(english) 英语平均分 from student;
		*		18.求最高分和最低分
		*				select max(math+chinese+english) 最高分, min(math+chinese+english) 最低分 from student;
		*		19.给学生表增加一列，class_id（班级） int类型
		*				
		*		20.将学生id为1-5的修改为1班，将学生id为6-10的修改为2班
		*				
		*		
		*	综合性学习：为学生表增加一个班级列，然后序列分组查询（查出各个班级的总分，最高分）
		*		1.给表添加一个字段,(添加后未赋值，默认为NULL)
		*				alter table student add column classid int;
		*		2.将序号1~5的同学分配到 1班（1 == classid），序号6~10的同学分配到 2班
		*				update student set classid = 1 where id between 1 and 5;
		*				update student set classid = 2 where id>=6 and id<=10;
		*		3.查询1、2班的总分，最高分
		*				select classid, sum(math+chinese+english) 总成绩 from student group by classid;
		*				
		*				select classid, max(math+chinese+english) 最高分 from student group by classid;
		*		4.错误写法，看mysql是否能打印（Oracle不能打印的），这个很重要
		*				1.select name, classid, avg(math+chinese+english) 平均分 from student group by classid;
		*				2.发现能打印，打印了两组的第一个成员，这在oracle是不允许的， group by后面有什么，才能打印什么，没有的不能打印（计算式除外）
		*						也侧面说明了mysql不严谨的问题，这里支持的不好
		*				3.这点要特别注意，比如不小心写成打印 a,b 但其实我们要看b，也写了group by b 但结果显示的第一列是a，就会出问题
		*						即oracle的规则中，group by 后有的变量，才能在select中打印
		*		
		*/
	}
	//时间与日期 字符串相关
	if (121)
	{
		/*
		*	mysql 时间相关函数:
		*			1.当前时间、日期、时间戳(时间戳就是完整的时间信息)
		*						日期:CURRENT_DATE()	
		*						时间:CURRENT_TIME()
		*						时间戳:CURRENT_TIMESTAMP()
		*						例子：
		*									select CURRENT_DATE() 日期, CURRENT_TIME() 时间, CURRENT_TIMESTAMP() 时间戳 from dual;
		*			2.当前时间：
		*						now()
		*			3.返回datetime的日期部分
		*						DATE(datetime)
		*			4.两个日期相加、相差
		*						相加：ADDTIME(date2, time_interval)
		*						相差: DATEDIFF(date1, date2)
		*						例子：
		*									select ADDTIME('02:30:30', '01:01:01');
		*									select ADDTIME(time, '1 1-1 10:09:09') from student;	//这句没看懂
		*			5.在date2中加上一个时间日期、减去一个时间日期
		*						加：DATE_ADD(date2, INTERVAL d_value_d_type)
		*						减：DATE_SUB(date2, INTERVAL d_value_d_type)
		*						例子，打印昨天，今天，明天：
		*									错误写法：select now()-1 昨天, now() 今天, now()+1 明天 from dual;  oracle的写法，但mysql不支持
		*									正确写法：select DATE_ADD(now(), INTERVAL -1 day) 昨天, now() 今天, DATE_ADD(now(), INTERVAL +1 day) 明天 from dual;
		*			6.年月日						
		*						YEAR|MONTH|DAY|DATE (datetime)
		*						例子:
		*									select now() 当前时间, year(now()) 年, month(now()) 月, day(now()) 日 from dual;
		* 
		*	字符串相关函数：
		*			1.连接字串
		*						CONCAT(string2,[...])
		*						例子:
		*									select concat('hello', ' world', ' my name', ' is Yy!') from dual;	//成功打印连接好的字符串
		*									oracle支持但mysql不支持的：select 'hello' || ' world' from dual;		//打印为0
		*									|| 在mysql下不支持
		*/		
	}
	//表的约束
	if (122)
	{
		/*
		*	约束的意义：
		*			我理解的意思就是让其成员的数据得到一个范围保护，输入得数据不能越过约束条件
		*			mysql有一个独有的约束：auto_increment（自动增长，即被它约束的变量会自动增加）很好用
		*	
		*	约束针对表而言，mysql的：
		*			1.not null			非空约束   如人的名字 不能为空
		*			2.Unique			唯一性约束   如 电话号码 邮箱地址
		*			3.Primary Key		主键约束(隐含  非空且唯一  的意思) 实际上主键直接建立了一个索引
		*			4.Foreign Key		外键约束， 子表x列引用了主表的x列(主键列) 那么子表x就是主表x的外键, 注意!!:子表子表的外键约束必须是主表的主键
		*			5.auto_increment	定义主键自动增长(mysql独有)
		*		
		*	用创建表做例子：constraint：创建约束（mysql可不用）		teacher_tid_PK：约束提示（违反了约束后的提示）	primary key：约束种类
		*			创建一个表t1，它有两列，列名为：tid、tname，其中tid被主键自动增长约束，tname不能为空
		*								create table t1	(tid int primary key auto_increment, tname varchar(40) not null);
		*							=====>连续多次插入相同数据
		*								insert into t1(tname) values('aaa'); 
		*							=====>查看表，观察到，tid自动增加排序了（我们没有对它赋值过）
		*								select *from t1;
		*							=====>查看表成员的数据类型
		*								desc t1;
		*									+-----+-------+
		*									| tid | tname |
		*									+-----+-------+
		*									|   1 | aaa   |
		*									|   2 | aaa   |
		*									|   3 | aaa   |
		*									|   4 | aaa   |
		*									|   5 | aaa   |
		*									+-----+-------+
		* 
		*/
	}
	//回顾 上午
	if (123)
	{
		/*
		*	知识点回顾：
		*			1.对表操作要先进入对应数据库，用 use db_name;
		*			2.对表添加一个字段（增加一列）：alter table table_name add column class_id int;
		*			3.日期转字符串：（msql的方法）		oracle的：to_char 日期格式：yyyy-mm-dd		mysql的格式：%Y-%c-%d
		*						select date_format(now(), '%Y-%M-%D') from dual;
		*						select date_format(now(), '%Y-%c-%d %h:%i:%s') from dual;
		*			4.字符串转日期：（msql的方法）		oracle的：to_date
		*						select str_to_date('2015-2-04 05:15:26', '%Y-%c-%d %h:%i:%s') from dual;
		* 
		*	现在mysql的基本API已经打通了
		*/
	}
	//mysql 多表查询案例（上、下）
	if (124 && 125)
	{
		//安装了几个oracle的表，写在一个.sql的脚本中，我照着视频给把代码敲下来了,但是发现有一些插入语句居然漏掉了，句子没写错
		{
			/*
-- 	用root用户登陆系统，执行脚本

-- 	创建数据库
create database mydb61 character set utf8;

-- 	选择数据库
use mydb61;

--	增加 dbuser1 用户
--	创建用户 ‘dbuser61’ 密码为 ‘dbuser61’ 拥有操作数据库 mydb61的所有权限
	GRANT ALL ON mydb61.* TO dbuser61 IDENTIFIED BY "dbuser61";
	flush privileges;
	
--	grant select,insert,update,delete on mydb61.* to dbuser61@localhost identified by "dbuser61";
--	grant select,insert,update,delete on mydb61.* to dbuser61@'%' identified by "dbuser61";

--	创建表

--	创建部门表 并赋值
DROP TABLE IF EXISTS `dept`;		
CREATE TABLE dept (
	`deptno` int(2) PRIMARY KEY,	
	`dname` varchar(14) NOT NULL,
	`loc` varchar(13)
)DEFAULT CHARSET=utf8;
--	`` 是esc下面那颗键 意思是被括起来的单词，如dept 已经是大小写敏感的了
--	PRIMARY KEY 是约束 NOT NULL同理
--	DEFAULT CHARSET=utf8; 是设置表的字符集

INSERT INTO dept VALUES(10, 'ACCOUNTING'	, 'NEW YORK');
INSERT INTO dept VALUES(20, 'RESEARCH'		, 'DALLAS');
INSERT INTO dept VALUES(30, 'SALES'			, 'CHICAGO');
INSERT INTO dept VALUES(40, 'OPERATIONS'	, 'BOSTON');

commit;

--	注意mysql的sql语言 约束如果起名字，需要单独写在表后面
--	创建员工表 并赋值
DROP TABLE IF EXISTS `emp`;
CREATE TABLE `emp`(
	`empno` int(4) PRIMARY KEY,
	`ename` varchar(10) NOT NULL,
	`job` varchar(9),
	`mgr` int(4),
	`hiredate` DATE,
	`sal` int ,
	`comm` int ,
	`deptno` int(2),
	constraint emp_deptno_fk foreign key(deptno) references dept(deptno)
)DEFAULT CHARSET=utf8;

--	创建索引
--	CREATE INDEX MYSCOTT.IX_CAtbAuditOperInfo_OT ON MYSCOTT.EMP(ENAME) TABLESPACE ts_myscott2;
create index emp_ename_index on emp(ename);

--	注意 日期格式不一样
INSERT INTO emp VALUES(7369, 'SMITH',  'CLERK', 7902, '1980-12-17', 800, NULL, 20);
INSERT INTO emp VALUES(7499, 'ALLEN',  'SALESMAN', 7698, '1981-02-20', 1600, 300, 30);
--	INSERT INTO emp(empno, ename, job, mgr, hiredate, sal, deptno) VALUES(7499, 'ALLEN',  'SALESMAN', 7698, '1980-12-17', 1600, 30);
INSERT INTO emp VALUES(7521, 'WARD',  'SALESMAN', 7698, '1981-02-22', 1250, 500, 30);
INSERT INTO emp VALUES(7566, 'JONES',  'MANAGER', 7839, '1981-04-02', 2975, NULL, 20);
INSERT INTO emp VALUES(7654, 'MARTIN',  'SALESMAN', 7698, '1981-09-28', 1250, 1400, 30);
INSERT INTO emp VALUES(7698, 'BLAKE',  'MANAGER', 7839, '1981-05-01', 2850, NULL, 30);

INSERT INTO emp VALUES(7782, 'CLARK',  'MANAGER', 7839, '1981-06-09', 2450, NULL, 10);
INSERT INTO emp VALUES(7788, 'SCOTT',  'ANALYST', 7566, '1987-04-19', 3000, NULL, 20);
INSERT INTO emp VALUES(7839, 'KING',  'PRESIDENT', NULL, '1981-11-17', 5000, NULL, 10);

INSERT INTO emp VALUES(7844, 'TURNER',  'SALESMAN', 7698, '1981-09-08', 1500, 0, 30);
INSERT INTO emp VALUES(7876, 'ADAMS',  'CLERK', 7788, '1987-05-23', 1100, NULL, 20);
INSERT INTO emp VALUES(7900, 'JAMES',  'CLERK', 7698, '1981-12-03', 950, NULL, 30);

INSERT INTO emp VALUES(7902, 'FORD',  'ANALYST', 7566, '1981-12-03', 3000, NULL, 20);
INSERT INTO emp VALUES(7934, 'MILLER',  'CLERK', 7782, '1982-01-23', 1300, NULL, 10);
commit;

--	创建工资级别表 并赋值
DROP TABLE IF EXISTS `salgrade`;
CREATE TABLE `salgrade`(
	`frade` int ,
	`losal` int ,
	`hisal` int
)DEFAULT CHARSET=utf8;

INSERT INTO salgrade VALUES(1, 700, 1200);
INSERT INTO salgrade VALUES(2, 1201, 1400);
INSERT INTO salgrade VALUES(3, 1401, 2000);
INSERT INTO salgrade VALUES(4, 2001, 3000);
INSERT INTO salgrade VALUES(5, 3001, 9999);
commit;

--创建奖金表
DROP TABLE IF EXISTS `bonus`;
CREATE TABLE `bonus`(
	`ename` VARCHAR(10),
	`job` VARCHAR(9),
	`sal` int,
	`comm` int
)DEFAULT CHARSET=utf8;

commit;
			*/
		}

		//124~125 内连接、左外、右外连接
		/*
			多表查询的语法有两套：
					1.SQL99标准的
					2.oracle自己的，（已学过）
			连接有几种：
					1.内连接
					2.左外连接、右外连接（其中一边有值才会显示）
					3.满外连接（任意一边有值就会显示）
					4.交叉连接（就是笛卡尔积）

做几个练习题，加速熟悉：
		1.查询与员工信息，员工号，姓名，月薪，部门名称
					分析： 部门名称是在dept的表中，其它员工信息在emp表中

					======>测试：用 等于 连接条件  ‘=’ 测试mysql能否支持
select e.empno, e.ename, e.sal, d.dname
from emp e, dept d
where e.deptno = d.deptno;
					======>结论：mysql支持 ‘=’ 连接条件

					======>SQL99 语法的内连接
select e.*, d.*
from emp e inner join dept d
on e.deptno = d.deptno;
					======>结论：对比oracle ，就是把 , 换成inner join	    把where 换成on



		2.显示所有部门信息、显示各部门人数
					分析： 分组、多表

					======>测试，用oracle的语法(左、右外连接)打印40号部门信息
select d.deptno, d.dname, count(e.deptno)
from emp e, dept d
where e.deptno = d.deptno (+)
group by d.deptno, d.dname;
					======>结论：无法使用 (+) 

					======>SQL99 语法的左、右外连接
					======>左外连接
select d.deptno, d.dname, count(e.deptno)
from dept d
left outer join emp e
on e.deptno = d.deptno
group by d.deptno, d.dname;

					======>右外连接
select d.deptno, d.dname, count(e.deptno)
from emp e
right outer join dept d
on e.deptno = d.deptno
group by d.deptno, d.dname;
					======>	注意左外连接，就是打印左表所有的数据，比如左外连接的dept d 



		3.自链接：-- 查询员工信息 ，老板信息，显示*** 的老板是 ***
					分析：emp 用员工号empno 找对应员工的上司员工号mgr，那么就应该把emp看成两个表（员工号表，上司号表）

				
					======>1.oracle的语法来，concat字符串拼接
select concat(emp1.ename, ' 的老板是： ', boss.ename)
from emp emp1, emp boss
where emp1.mgr = boss.empno;

					======>2.SQL99语法，发现KING没打印，用SQL99的左外连接,把所有员工都打印
select concat(emp1.ename, ' 的老板是： ', boss.ename)
from emp emp1
left outer join emp boss
on emp1.mgr = boss.empno;

					======>3.发现KING为NULL，用滤空修正：	oracle的滤空修正：nvl(b.ename , '他自己')
					======>  mysql无法使用nvl（oracle的语法）
select concat(emp1.ename, ' 的老板是： ', nvl(boss.ename , '他自己'))
from emp emp1
left outer join emp boss
on emp1.mgr = boss.empno;
					

					======>4.mysql的滤空修正 ifnull
select concat(emp1.ename, ' 的老板是： ', ifnull(boss.ename , '他自己'))
from emp emp1
left outer join emp boss
on emp1.mgr = boss.empno;

		*/
	}
	//mysql 字符集问题（六处字符集、中文乱码原因）
	if (126 && 127 && 128)
	{
		//Mysql 有6处使用了字符集
		/*
			
			Mysql 有6处使用了字符集
					1.client		客户端	：客户端显示的字符集
					2.connection	连接处	：客户端即向服务器（数据库）发送信息 发出去在网络上是啥字符集
											  连接数据库的字符集，未指明就按照服务器默认字符集
					3.database		数据库	：数据库服务器中某个服务器使用的字符集设定，如果建库时未指定，会使用服务器安装时指定的字符集
					4.results		返回值	：数据库返回数据给客户端时使用的字符集设定，未指定的话使用服务器默认
					5.server		服务器	：服务器安装时指定的默认字符集
					6.system		系统		：数据库系统使用的字符集设定

			程序员需要关注的，程序员能操作的只能是与客户端有关的，所以主要有三个与客户端有关
					1.client		客户端	：程序员在客户端的显示
					2.connection	连接处	：我们以什么类型的字符集发报文
					3.results		返回值	：我们以什么类型收到数据库返回的信息

			查看字符集配置情况：
					show variables like 'character%';	 查看所有应用的字符集，不同的数据库中会看到不一样的结果，如下是 mydb61 的：
					+--------------------------+----------------------------+
					| Variable_name            | Value                      |
					+--------------------------+----------------------------+
					| character_set_client     | utf8                       |
					| character_set_connection | utf8                       |
					| character_set_database   | utf8                       |
					| character_set_filesystem | binary                     |
					| character_set_results    | utf8                       |
					| character_set_server     | latin1                     |
					| character_set_system     | utf8                       |
					| character_sets_dir       | /usr/share/mysql/charsets/ |
					+--------------------------+----------------------------+

		*/
		//导致中文乱码的因素
		/*
			mysql中文问题的三大因素
					第1层原因.mysql自身的设计（6处字符集）
					第2层原因.操作系统的语言集的问题
					第3层原因.文件存储格式：比如936中文

第1层原因：mysql自身的设计（6处字符集）
			代码实验：
					1.我们修改登录mysql时的字符集为gbk，再查看字符集，
								mysql -uroot -p --default_character_set=gbk
								show variables like 'character%';
						=======>影响了最外层（3处）的字符集，发现客户端、连接、返回值，被改为了gbk，因为它们与程序员的操作显示端有关

					2.进入mydb1数据库，查看此前utf8时期存储带中文的表
								use mydb1;
								select *from student;
						=======>发现中文乱码了，原因:utf8时期按照utf8格式存储，然后用gbk登录查看，utf8格式从数据库返回，没有进行格式转换，依然是utf8
						=======>而我们客户端是gbk，两者格式不同，就导致显示乱码，为何不转换，请看下方的解释。
			
			为何results为gbk，但数据库utf8的返回值不进行格式转换成gbk显示：
						==>数据库返回的信息，不会转换成其他格式，而是按照数据库里的格式来返回，（不作为）
						==>因为数据库只是提供一种数据的存储操作的机制，里面是什么数据，就完整的保留格式与类型取出来
						==>并且客户端不一定是中文的，可能是日文、韩文、俄文，数据库返回的信息转换格式没什么意义，存是什么样，取就什么样，保留数据的完整性

					3.在用gbk格式登录mysql的情况下（接第2步），我们插入带中文数据到表中
								insert into student values(11, '大头', 99, 12, 55, 2);
						==>居然插入成功，此时的中文 '大头' 是gbk的，但是插到utf8的表中了，详细在第2层原因时会有讲
								insert into student(id, name, chinese, english, math, classid) values(11, '哎哎哎', 99, 12, 55, 2);
						==>这种写法没有插入成功，会提示name格式不对

第2层原因：操作系统的语言集的问题
			1.linux是一个多用户的操作系统，
			2.linux操作系统的语言环境 与 用户配置的语言环境LANG相互影响（下面会有例子说明）

			代码实验：
					1.查看root用户的语言配置
								echo $LANG	或者 cat /etc/locale.conf
						==> zh_CN.UTF-8  以zh_CN显示，以UTF-8格式存储
					2.登录mysql01 查看语言配置
								su - mysql01
								echo $LANG
						==> zh_CN.UTF-8
					3.改变mysql01用户的语言配置
								vi .bash_profile
								添加：export LANG=C
								source .bash_profile	//执行配置，或者退出用户再登陆会自动执行
								ls						//查看带有中文的文件夹，中文是乱码
						==>仅将mysql01用户 的LANG配置成C，然后发现文件夹中文乱码，原因是utf8时创建的，而现在用户为C格式，当然无法查看utf8格式的中文

					4.mysql01用户更改玩语言配置，登录mysql，查看字符集
								mysql -uroot -p
								show variables like 'character%';
									+--------------------------+----------------------------+
									| Variable_name            | Value                      |
									+--------------------------+----------------------------+
									| character_set_client     | latin1                     |
									| character_set_connection | latin1                     |
									| character_set_database   | latin1                     |
									| character_set_filesystem | binary                     |
									| character_set_results    | latin1                     |
									| character_set_server     | latin1                     |
									| character_set_system     | utf8                       |
									| character_sets_dir       | /usr/share/mysql/charsets/ |
									+--------------------------+----------------------------+
						==>很恐怖的发现，linux的用户改变了默认字符集，此用户登录的mysql的字符集也发生了惊天变化，查看表也肯定是中文乱码
						==>登录mysql的 用户的LANG会影响mysql的字符集设置（特别注意哦）
					5.接上，再试一试插入表
								use mydb1
								insert into student(id, name, chinese, english, math, classid) values(11, '哎哎哎', 99, 12, 55, 2);
						==>再次恐怖的发现，居然插入成功了，但无法显示中文
						==>工作中万一别人改动了LANG配置然后登录mysql且向我们的表插入了数据，那么程序能运行，但是有错误，这个很恐怖，因为查不到错误在哪
						==>所以在银行等大公司有严格要求，一个用户单独管理一个程序，不准让别的程序接触这个用户（程序）
						==>项目中千万不要两个厂商在同一个用户下部署环境，要分开，否则一方变动，另一方就出大错了

第3层原因.文件存储格式：比如936中文
			知识讲解：
					1.比如我们用UE 编辑服务器上的文件，此时编辑时，默认按照windows的格式来存储，windows默认为936
						==>那么存到服务器上就是936格式了，但服务器我们配置的为utf8，服务器打开这个文件就会出现乱码
					2.所以我们要用UE设置，存到服务器上时，转换成UTF-8的格式，这样文件存储到服务器上就是UTF-8的了
						==>那么服务器打开文件，就能正常显示中文了
			分析原因：
					=======>就是服务器或数据库有一个设置的字符集
					=======>但是我们存储进去的文件，不是这个设置的字符集格式，就出现乱码了

		*/
	}
	//迅速适应开发环境 多练基础
	if (129)
	{
		/*
			快速适应是一种能力：
					1.CTR就是模拟一个终端，登录到服务器上
					2.公司中还更复杂，一个终端要先跳到云终端，再跳到中转堡垒机，再跳到各式各样的服务器上，且IP很多，来回跳
							===>这个就类似于我实习时的RRU，HUB，等机器，IP很多跳来跳去，不熟悉的话就不知道干嘛，一个网卡两个IP，上下各有一个
					3.快速适应的能力要训练一下
		*/
	}
	//mysql_helloworld应用程序搭建编写
	if (130)
	{
		/*
		
			本课要点：
					1.学习难度：比proc编程容易得多
					2.学习方法：多看原始资料，穿一手鞋
					3.mysql的官方文档有中文的，很方便，本课的在mysql c API那一栏
					4.API 就是嵌入式语句，有C语言 PHP C++ java等

			查文档得知：
					1.libmysqlclient, mysql提供了动态库，让我们连接到服务器，
							===>所以首先要找到他在哪里，然后知道怎么使用调用这个动态库
							===> find / -name "libmysqlclient.*"	在 / 根目录查找叫libmysqlclient.*的文件
					2.查找

			代码实验：
					1.找到libmysqlclient动态库，登录mysql01，创建测试文件夹与dm01_hello.c文件
							find / -name "libmysqlclient.*"
							===>/usr/lib64/mysql/libmysqlclient.a
							su - mysql01
							mkdir day_05
							cd day_05
							touch dm01_hello.c
							可以：(应该类似于复制一份，且是vi能识别的类型)
							===>nm libmysqlclient.a >2log
							===>vi 2log 

					2.UE打开dm01_hello.c，写一个简单的打印程序,然后gcc编译成可执行文件，运行程序
							printf("hello Yy, good moning!");
							gcc dm01_hello.c -o dm01_hello
							./dm01_hello

					3.找头文件，已经找到动态库了，.c文件添加头文件
							find / -name "mysql.h"
							===>没找到的话，可能是一个依赖没有安装，安装一下，这个是安装头文件的，包括libmysqlclient.a
							===>sudo yum install mysql-community-devel.x86_64
							===>/usr/include/mysql/mysql.h

					4.在.c文件中编写嵌入式语句：
							1.初始化，得到一个句柄
										msql_init函数来初始化，如果参数为一个MYSQL空间，则会将该空间地址返回，如果参数为NULL，则会开辟一个空间并返回（很好用）
										MYSQL mysql;
										MYSQL *connect;
										connect = mysql_init(&mysql);
										if(connect == NULL)	{
											ret = mysql_errno(&mysql);					//mysql_errno函数获取错误码
											printf("func mysql_init() err:%d\n", ret);
											return ret;		}
										printf("connect ok\n");
							2.建立连接，连接到服务器		
							3.执行一个查询语句
							4.获得结果
					4.用gcc将头文件与动态库集成
							gcc dm01_hello.c -o dm01_hello -I/usr/include/mysql/ -L/usr/lib64/mysql/ -lmysqlclient
							===>出来一大堆问题，挨个搜索解决，原因是64位系统下，许多需要的环境找不到，所以就报错了
							===>在32位下可能不报错就通过了



		*/
	}
	//mysql_helloworld应用程序编译问题排查
	if (131)
	{
		/*
		
			接上节课内容讲解，报错问题
					1.用gcc将头文件与动态库集成
							gcc dm01_conn.c -o dm01_conn -I/usr/include/mysql/ -L/usr/lib64/mysql/ -lmysqlclient
							===>出来一大堆问题，挨个搜索解决，原因是64位系统下，许多需要的环境找不到，所以就报错了
							===>在32位下可能不报错就通过了
							===> 一个个解决报错（上网搜）  -lstdc++   函数API去加载动态库 ：  -ldl  添加线程库函数 ：-lpthread  添加数学函数 -lm 运行时 -lrt
							gcc dm01_conn.c -o dm01_conn -I/usr/include/mysql/ -L/usr/lib64/mysql/ -lmysqlclient -lstdc++ -ldl -lpthread -lm -lrt
					2.主要不是知道怎么改错，而是知道怎么查找错误，怎么快速分析错误

		*/
	}
	//mysql_api的结果获取_结果集内存模型分析（上、下）
	if (132 && 133)
	{
		/*
			声明：
					本课时的所有嵌入式函数都是从mysql的官方手册找到的，注意使用方法以及参数的区别、还有错误判断的条件
					查看MYSQL_ROW的声明，发现是一个二级指针
					因为mysql都封装好了函数，所以用起来很方便

			流程：
					调用mysql_query 一查询，mysql就向后台发送报文，结果集马上就返回来了
					mysql_store_result就把结果集全部接收，而后我们调用mysql_fetch_row （类似游标）一行一行的检索打印（从mysql_store_result中检索）
								因为mysql_store_result已经存储了返回的全部结果集

					此时mysql_fetch_row的底层模型的运作如下（仅对此案例的emp）
								char** mysql_fetch_row()
								{
								======>先申请空间
									char **tmp = (char **)malloc(sizeof(char *) * 9);	先申请了一个指针数组，因为emp有9列，所以*9
									for(int i=0, i < 9; i++)
									{
										tmp[i] = (char *)malloc(100);
									}
								======>再copy数据到空间里
									strcpy(tmp[0], "7369");
									strcpy(tmp[1], "SMITH");
									strcpy(tmp[0], "CLERK");
									strcpy(tmp[0], "7902");
									...........

									return tmp;
								}

		
			2.连接：
					函数原型：
								mysql_real_connect(MYSQL *mysql,				句柄，初始化得到的句柄
													const char *host,			
													const char *user,			用户名
													const char *passwd,			密码
													const char *db,				要操作的数据库的名称
													unsigned int port,			端口号，TCP使用，不用的话填0（默认）
													const char *unix_socket,		socket套接字或命名管道，TCP使用，不用填NULL
													unsigned long client_flag)	客户端相关，默认为0，可设置一些宏，指定特定功能
					返回值：返回一个链接句柄，真正的链接句柄（与初始化的是同一个，但是那时的句柄还没有链接功能）

			获取结果集：
					MYSQL_RES * mysql_store_result(MYSQL *mysql)

			3.执行一个查询语句
					用函数：	int mysql_query(MYSQL *mysql, const char* stnt_str)	参二可以是一个任意语句  Mysql的优势也体现在这里，有特定函数支持动态sql，不必像oracle那样麻烦
					注意：此函数参2只支持 以0结尾的字符串 ，如果带0 请用mysql_real_query取代
								char* stnt_str = "select *from emp;";
								ret = mysql_query(connect, stnt_str);
								if(0 != ret)
								{
									printf("func mysql_query() err:%d\n", ret);
									return ret;
								}
								printf("mysql_query ok\n");


			4.获得结果 获取结果集 两种方式1.全部获取，2.一行一行获取
								MYSQL_RES * result = mysql_store_result(connect);	执行完查询，获得的结果放到了connect中
								if(NULL == result)
								{
									ret = mysql_errno(connect);
									printf("func mysql_store_result() err:%d\n", ret);
									return ret;
								}
					解析结果集，此时结果集已经放到缓冲区了（应用程序的，因为是数据库返回的值）
					一行行的获取：mysql_fetch_row函数
								printf("\n");
								MYSQL_ROW row = NULL;
								while(row = mysql_fetch_row(result))				返回值该函数返回的内存模型（空间），MYSQL_ROW row是一个char** 的变量，所以能接住函数返回值
								{
									printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n", row[0], row[1], row[2], row[3], row[4], row[5], row[6], row[7]);
								}
								printf("\n");
					释放结果集
								mysql_free_result(result);
		*/
	}
	//第1天 作业
	if (134)
	{
		/*
			作业：
					上一课中，connect获取到了结果集，所以应该能获取到列数，还能获取表头，故作业为
						
					1.查看MySQL文档，API函数，获取列数
					2.获取表头
		*/
	}
	//第1天 回顾
	if (135)
	{
		/*
			1.创建数据库时指定字符集（很重要）
			2.创建表
			3.查询语句、分组、排序等
			4.日期函数，昨天、今天、明天
			5.时间日期 与 字符串的转换
			6.约束
			7.多表查询 SQL99 的语法 左、右外连接等 left outer join dept d on .... mysql支持等号链接
					xxx 的老板是 xxx
			8.中文乱码问题：三层因素（面试可能会问）6处字符集 3种与程序员有关

			9.嵌入式的那些API函数

		*/
	}
	//mysql常用api函数_检索	(就是第一天的作业)
	if (136)
	{
		/*
			第一天作业：
					搜索mysql文档，查找对应API函数完成：1.打印表有多少列	2.打印表头

					编译.c文件的代码：
								gcc dm01_conn.c -o dm01_conn -I/usr/include/mysql/ -L/usr/lib64/mysql/ -lmysqlclient -lstdc++ -ldl -lpthread -lm -lrt

			解答：
					
					1.查找mysql文档，得到：
							======>获取多少列
								1) unsigned int mysql_field_count(MYSQL*mysql)			
								2) unsigned int mysql_num_fields(MYSQL RES *result)		返回结构体数组的首地址
										共同点：实现的功能都是一样的
										不同点：1 是从句柄获取， 而2是从结果集获取列数
										优劣：	老师推荐使用1，因为有时候工程里，执行sql语句，会出现没有结果集的情况
							======>获取表头
								1）MYSQL_FIELD *mysql_fetch_dield(MYSQL RES *result)
								2）MYSQL_FIELD *mysql_fetch_dields(MYSQL RES *result)
										共同点：都是获取表头
										不同点：1 是一次获取1列，2是获取多列
										优劣：	明显2更好，1的话还要循环打印，2的话一行代码即可
										代码使用：要配合获取列数的函数使用

					2.UE编辑 /home/mysql01/day_05/dm01_hello.c 写入代码
							======>打印检索的表有多少列，位置在执行完查询语句的下方：

								int num = mysql_field_count(connect);
								printf("此表的列数为：%d\n", num);
									
									注意：此时下方的 解析结果集，可以使用此步骤获取到的列数，来获取数据，让代码适用性更强（此前是人工确定有多少列再获取打印）
										
								int i;						我的gcc编译器提示不能用C99将i的声明放到for中，只能写在外面
								for(i = 0; i < num; i++)
								{
									printf("%s\t\n", row[i]);
								}
								printf("\n");

									//旧逻辑舍弃掉，适用性不强
	 										//printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n", row[0], row[1], row[2], row[3], row[4], row[5], row[6], row[7]);

							======>打印表头，代码位置在获取结果集的下方
									代码使用：fields是一个结构体，.name就是我们要用的表头（列名）

								printf("\n");
								MYSQL_FIELD * fields;
								fields = mysql_fetch_dields(result);
								int i;		
								for(i = 0; i < num; i++)
									{
										printf("%s\t", fields[i].name);
									}
								printf("\n");


		*/
	}
	//mysql应用程序makefile编写
	if (137)
	{
		/*
			本课出现的警告：
					dm01_conn.c:81:2: 警告：建议在用作真值的赋值语句前后加上括号 [-Wparentheses] while(row = mysql_fetch_row(result))
			解决：再加一层括号即可（编译器的问题，别深究）: while((row = mysql_fetch_row(result)))

			老师口述：
					1.编写makefile是很简单的事情，不用想得很复杂
					2.觉得困难是因为，makefile语句太多记不住，只要经常写就记住了，很简单

			源代码：
					与此前代码不同，此处是先生成.o然后再根据.o生成可执行文件

					.PHONY:clean all

					CC=gcc
					CFLAGS=-Wall -g -I/usr/include/mysql/
					LFLAGS=-L/usr/lib64/mysql/ -I/usr/include/mysql/ -lmysqlclient -lstdc++ -ldl -lpthread -lm -lrt -lz
					BIN=dm01_conn
					all:$(BIN)

					%.o:%.c
						$(CC) $(CFLAGS) -c $< -o $@
	
					dm01_conn:dm01_conn.o
						$(CC) $(CFLAGS) $^ $(LFLAGS) -o $@
	
					clean:
						@rm -f *.o $(BIN)

			代码讲解：
					1.以下就是单纯的文本替换，就是类似C语言的宏，CC 就代表gcc

							CC=gcc
							CFLAGS=-Wall -g -I/usr/include/mysql/
							BIN=dm01_conn

					2.makefile的语法体系有三个板块：依赖、目标、规则， 如下代码所示：

							dm01_conn:dm01_conn.o
							$(CC) $(CFLAGS) $^ $(LFLAGS) -o $@

							======>依赖：dm01_conn.o
							======>目标：dm01_conn
							======>规则：$(CC) $(CFLAGS) $^ $(LFLAGS) -o $@

							======>依赖 根据规则 来生成目标文件

					3.各种符号的意义：
							1.文本替换：$(CC) 就是调用CC的形式，即相当于，把gcc 替换到这里，但是要用 $()
							2.%		通背符：百分号相当于‘所有’， %.c 是指所有.c的文件，就类似于linux的 *	
							3.$<	这个意思是位于最左边的依赖（依赖可以有多个，这个符号就是将最左边的以来替换到这里） 比如
									dm01_conn:dm01.o dm02.o dm03.o dm04.o
									======>使用了 $< 就会把最左边的依赖dm01.o 替换到$<的位置

							4.$@	代表目标，即把 目标 替换到此符号位置
							5.$^	代表所有依赖替换到此位置（不论多少依赖，都替换到此处）

							6.@rm -f *.o $(BIN)	即删除所有.o文件 与$(BIN) BIN本课已定义为可执行文件 dm01_conn （可连续定义多个）

					4.代码解析：
							======>比如下面代码 
							dm01_conn:dm01.o dm02.o dm03.o dm04.o
							$(CC) $(CFLAGS) $^ $(LFLAGS) -o $@
							======>把所有符号都解释后，规则就变成了：
							gcc -Wall -g -I/usr/include/mysql/ dm01.o dm02.o dm03.o dm04.o -L/usr/lib64/mysql/ -I/usr/include/mysql/ -lmysqlclient -lstdc++ -ldl -lpthread -lm -lrt -lz
							======>根据规则生成dm01_conn


					5.清除语句详解：
							.PHONY:clean all
							clean:
							@rm -f *.o $(BIN)
							======>makefile文件不会主动执行clean。 因为按照语法，clean语句没有依赖，只有目标与规则，也就不会产生叫clean的文件
							======>所以我们平常是要在命令行输入make clean 意思是强制执行clean的语法，也就执行了 @rm -f *.o $(BIN) 删除语句
							======>但是如果目录中有一个叫clean的文件，这个规则就会被打破，make clean再也不会生效，

							======>原因: 按照makefile 的基本语法，就是依赖根据规则生成目标文件，一旦有了目标文件，那这个语句生成目标的目的完成了
							======>语句执行需要依赖变动才能执行，没有依赖的话，‘clean’将一直是最新的。也就意味着再也无法执行这条语句，make clean再也不会生效

							======>加上：.PHONY:clean all 的话，就是告诉编译器，有没有clean的文件，都必须执行clean
			
			}
					

		*/
	}
	//初学者把ftp工具和crt工具使用起来
	if (138)
	{
		/*
			UE把telnet与CRT、ftp的功能都集成了，很强大
			不要直接在windows上直接用虚拟机打开linux，一定要用CRT这种远程连接工具（模仿工作需求）
			实际应用中，服务器可能离我们非常远，所以必须要会用远程连接工具操作

		*/
	}
	//makefile规则再说明
	if (139)
	{
		/*
			本课改动：
					1.添加一个dm02_tool.c的文件
					2.makfile里添加dm02_tool.c 的编译逻辑

			makefile语句规则再补充：
					源码：
							%.o:%.c
								$(CC) $(CFLAGS) -c $< -o $@
					解说：
							======>这个语句功能：将目录下所有.c文件（依赖） 按照规则 生成.o文件（目标）	%：通背符
							======>比方本课我们加了dm02_tool.c 如果不用这个带通背符的语句，本来的写法为：

							dm01_conn.o:dm01_conn.c
								$(CC) $(CFLAGS) -c dm01_conn.c -o dm01_conn.o
	
							dm02_tool.o:dm02_tool.c
								$(CC) $(CFLAGS) -c dm02_tool.c -o dm02_tool.o

							======>可以发现，有两个.c文件就要写两个语句，如果有N个文件也就要写N个语句
							======>用了带通背符的语句，就只要写一条就够了，将目录下所有.c 按照规则生成 .o文件
		*/
	}
	//自己动手写一个mysql的小工具tool（就像之前oracle的仿sqlplus ，动态sql）
	if (140)
	{
		/*
			本课要点：
					还是直接打开源文件比较好理解

			代码改动：
					1.删掉多余注释，添加一个char数组，存储我们键入的命令
					2.改动原来的第三步：执行查询，将参2改为我们的char数组
					3.查询步骤前添加一个while(1)
					4.while(1)中添加如下代码：
							memset(sqlbuf, 0, sizeof(sqlbuf));
							printf("\n请输入您的sql语句：");
							gets(sqlbuf);
							strcmp(sqlbuf, "SELECT", )
					5.从‘查询’ 开始，到 ‘释放结果集’ 的代码，移动到循环中来
					6.执行语句下，添加一个对比函数，用于确认为什么语句 if(strncmp(sqlbuf, "select", 6) == 0)			else的话就break即可
					7.将‘打印表列数’到 ‘释放结果集’ 的代码，移动到 select的判断语句中
					8.将 return 改为 goto END 但是要把END的逻辑写好
					9.设置打印字符集的命令，添加在执行语句的上方

			注意点：
					1.可修改代码中的连接的函数，选择到哪一个数据库下操作
					2.scanf不能输入空格，请用gets
					3.mysql_query也可用于执行设置打印字符集的命令（避免打印中文乱码），如：
							mysql_query(connect, "set names utf8");

		*/
	}
	//mysql工具的回显问题、上下键问题。即删除键无法删除（就像sqlplus一样），无法按上、下方向键就能快速跳到此前输入的命令
	if (141 && 142)
	{
		//回显问题
		/*
			准备：
					1.将dm02复制一份dm03
					2.dm03添加进makefile中
			
			问题：
					1.命令行界面用back无法删除反而出现 ^H^H^H 这种符号，只能shift + del 删除
					2.这就是回显问题

			解决，（老师说有两种解决方案）：
					1.用shell命令来解决（简单的方法），但随着back能删除的同时，shift + del 不能删除了
								======>添加如下函数
								void setstty()
								{
									system("stty erase ^H");//执行shell命令，也可以，用来设置读取用户键盘输入的时候，退格键不回显
								}
								======>修改main函数参数
								int main(int arg, char* args[])
								======>main函数中添加如下代码，在连接之前：
								if(arg < 4)
								{
									printf("please enter: %s localhost user passwod dbname\n", args[0]);
									return -1;
								}
								setstty();

								======>按照提示，执行./dm03_backspace 时，后面跟上端口、用户、密码、对应数据库，然后就能用回退键了
								./dm03_backspace localhost root root mydb1
						
					2.用编程：tty的API函数，能完美解决，但问题是这一块知识点很多，只能以后工作用到了，再来学习，目前知道有这个东西就可以
								解决的思路，就是将我们输入的内容存储起来，当退格键按下，或者shift + del 就会回退到此前的输入

								======>添加的函数请看源代码，有点多
								======>使用方法与shell的一样，setstty2() 是编程解决的函数名
								int main(int arg, char* args[])
								======>main函数中添加如下代码，在连接之前：
								if(arg < 4)
								{
									printf("please enter: %s localhost user passwod dbname\n", args[0]);
									return -1;
								}
								setstty2();

								======>程序结束时需要恢复系统的termios设置
								returnstty();

								======>执行./dm03_backspace 时，后面跟上端口、用户、密码、对应数据库，然后就能用回退键了
								./dm03_backspace localhost root root mydb1

								
		*/

		//上下键问题
		/*
			上下翻页功能：
					按上、下方向键就能快速切换到此前输入的命令

			实现的思路：
					1.当执行此程序 1 的时候，另外一个程序 2 随时监控着，记录着我们输入的命令等
					2.当按下上、下键，程序2 就会按照一定规则把记录的命令传递到此程序中 
					3.有一个开源软件：rlwrap,需要手动安装，安装好以后，输入rlwrap sqlplus /as sysdba 就能使用了
					4.如果工作项目有需求，不能使用软件，那我们就把该软件源码给扣下来，放到我们的程序中即可
			学习的重点：
					1.主要是学习这种解决思路，即1个程序拉起N个程序，思想很棒
					2.比如遥控器与机顶盒，遥控器就能控制机顶盒中多项不同的功能
					3.比如一些服务器软件，1个程序拉起4个程序，当第4个挂了的时候，程序1又把它拉起来，实现24小时不间断运行
		
		*/
	}
	//预处理AIP函数（上）
	if (143)
	{
		/*
			学习方法：
					1.预处理AIP函数一大堆，通过案例来学习更高效
					2.API函数不值得花很多时间来学习，要快速上手
					3.快速上手陌生领域的方法，以本课为例：
								1.我们知道了大概有4个步骤来完成预处理机制
								2.那么找哪个步骤最关键，第4步是执行，123都是为第4步做准备，故第4步最关键
								3.知道了哪个最关键，所以上网搜第4步相关，就能得到一大堆的资料供我们参考
					4.像这种API，快速上手，就不要通过一行行敲代码去学习，不知道敲到什么时候，
								而且像这种，敲一遍也不知道它的用法，由于是API嘛，别人封装好的
								所以更重要的是快速理解它的思路构架
					5.最重要的是学习思路
			准备工作：
					1.copy dm03 为 dm04 删掉大部分，保留初始化和连接，其它全删掉（保留大体框架）
					2.dm04添加到makefile中
					3.去官方文档，搜索第4步的API函数，会得到使用案例，将使用案例全复制到dm04中，待会再考虑哪些需要不需要
					4.本课代码量大，请看源文件的笔记，因为有一些辅助的函数、步骤等，无法详说
					
			预处理的流程：
					1.初始化预处理环境句柄
								mysql_stmt_init()
					2.向预处理句柄添加sql语言（？？？） 笔记里我用？代表占位符
								mysql_stmt_prepare()
					3.向预处理句柄中添加？的参数值
								mysql_stmt_bind_param()
					4.执行预处理的sql语言
								mysql_stmt_execute()
					======>就像一个流程图一样，4执行完，会回到3继续添加参数值，因为第一次添加，只是构建框架并初始化，第二次才是插入数据

			预处理的好处：
					数据库中，永恒不变的话题就是 优化调试
					预处理大体分为了两步完成，第一步先将语句用占位符填充输入
					第二步再输入少量参数赋值，就完成了语句输入
					这样能提升效率

			代码改动：
					1.请查看源文件
					2.改动完控制台编译一下
		
		*/
	}
	//预处理AIP函数（下）
	if (144)
	{
		/*
			本课重点：
					1.讲了bind的底层原理，以及为何要进行二次插入
					2.重点是学习它的设计理念，底层原理思想

			要点：
					1.bind的数组有三个元素，每个元素是一个结构体,我用0、1、2来称呼他们
					2.代码中创建的表有3列，0则负责第一列，1负责第二列，2负责第三列
					3.0、1、2 它们的成员是不一样的，因为不同列的数据类型不一样（数字、字符、日期）
					4.可以查找到bind的函数，看它的源代码。它在头文件mysql.h中,vi打开 然后冒号输入 ：MYSQL_BIND 就找到了
					5.不同元素结构体 管控的列，第一次插入时，是构建结构并初始化，且插入sql语句
					6.执行完 再次插入，此时则是插入真正的数据
					5.desc table 能查看此表的数据类型信息
		*/
	}
	//中午课程回顾
	if (145)
	{
		/*
			主要讲了使用UE的好处：
						1.能同时多用户登录，就像查看windows一样逛linux的目录，查找文件很方便
						2.比如root用户就可以多个一起登录，不必用一个用户完成查找，编辑，观察，可以多用户同时打开，同时编辑多个文件
		*/
	}
	//mysql的时间类
	if(146)
	{
		/*
			
		*/
	}

	//数据库后面需要用到linux的oracle，我下载安装了好久没弄好，暂时不弄了，先学Qt

	//Qt第1天（第1天学好了，后面会轻松很多）
	if (1)
	{
		//Qt介绍：Qt是一个跨平台的C++图形用户界面应用程序框架。（跨平台、应用程序框架、图形界面）
			//跨平台，在windows上的Qt程序，能直接在linux上运行，java也如此，这就是跨平台
			//应用程序框架：就是Qt提供很多封装好的类，我们直接调用即可
			//图形界面：是构建图形界面的（GUI），用户侧就像QQ或steam的软件那样
		//Qt的安装路径，项目的存放路径都不要有中文

		//linux的图形界面kde就是Qt写的，还有初代苹果的界面

		/*Qt的优点
			跨平台，几乎支持所有的平台
			接口简单，容易上手，学习QT框架对学习其他框架有参考意义。
			一定程度上简化了内存回收机制
			开发效率高，能够快速的构建应用程序。
			有很好的社区氛围，市场份额在缓慢上升。
			可以进行嵌入式开发。*/

		/*1）学习GUI编程，市场上任何一款产品几乎都带图形界面，市场上很火的Android、IOS编程无非也是GUI app编程，GUI编程都是差不多，学习Qt后再学习Android、IOS，那是 So easy。就算不学习Android、IOS，由于Qt跨平台特性，通过Qt写的程序可以在Android、IOS平台上运行。

			2）锻炼编程能力，GUI编程比后台编程更能锻炼人，因为你除了核心数据处理外，还需要协调界面，同时懂得前端和后台编程，才能更好地写好程序。

			3）为了更好地使用C++，学习Qt的框架（Qt是C++实现的应用程序框架），很多游戏、后台服务器框架都是使用C++实现。

			wps  virtual box

		如何学习Qt？Qt帮助文档
		库函数的调用
		strcpy();
		1)功能
		2)参数
		3)返回值*/
	}
	if (2)
	{
		//Qt应用程序框架
		//详情看Qt写的的程序笔记

		//有三个基类（父类），Qt提供给我们的
		//第1个是PC（暂不清楚）
		//第2个是图形界面的基类（应该是有很多基础图形功能吧）
		//第3个是按键之类的功能

		//父类 == 基类
		//子类 == 派生类


		/*1）帮助文件：F1 （光标在函数名字或类名上，按 F1 即可跳转到对应帮助文档，查看其详细用法）

			2）.h 文件和对应.cpp 文件切换：F4

			3）编译并运行：Ctrl + R

			4）函数声明和定义(函数调用和定义)切换：F2

			5）代码注释取消注释：Ctrl + / （选中代码再按快捷键）

			6）字体变大变小：Ctrl + 鼠标滚轮向上向下

			7）移动代码：选中所要移动的代码->按住 ctrl + shift->键盘方向键

			8）查找替换关键字：ctrl + f

			9）快速打开代码所在目录：编辑模式下->选中项目文件->右击->选择“显示包含的目录”，即可显示项目所在目录（此方法同样可以打开代码文件所在目录）*/


	}

}

int main(void)
{



	system("pause>0");
	return 0;
}