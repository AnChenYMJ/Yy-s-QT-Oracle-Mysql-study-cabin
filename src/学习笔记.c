#include <stdio.h>
#include <stdlib.h>


void AAA()
{
	if (0)
	{
		//һ��
		//oracleʵ����oracle���ݿ�Ĺ�ϵ��
		//���ݿ⣺�����������ļ����ϡ�ʵ�����ڴ�ӳ�䣨�ڴ����ݽṹ��
		//������ͨ��ʵ�� ������ ���ݿ��
		// ʵ���Ƿ����ڴ��е�
		//1��oracle��������oracleʵ�� + oracle���ݿ�
		

		//ԭ�ȣ��ͻ���---web������---���ݿ�
		//�����web������---���ݿ�֮��Ͽ����Ǿ��޷��������ݿ���
		//��һ������������ٴ���һ��������������һ��������ʱ���Ϳ�������һ��
		//���õĽ��������������ͨ��һ��app ���ӵ� ʵ�� ʵ���ٲ������ݿ�
		//���ͻ���---ʵ��---���ݿ�
		//��һ��ʵ��������ʱ�����Դ�����һ��ʵ����ʵ���Ĵ����ɱ��ͺܶ�
		// ���ؽ���app�ı��ݣ����ܽ���24Сʱ����ϵķ���
		//ʵ����Ⱥ�ĺô���1.���ؾ��⡢2.ʧ��Ǩ�ơ�
		//RAC(real application cluster)(�����ɶ��˼��Ҳ��һ���Ǻô����Լ����˿�)
	}
	if (1)
	{
		//oracle�����������
		//app----ʵ��----���ݿ�			//ʵ��----���ݿ�֮����е��Ƕ�д�����������֪ʶ�ǣ���̨���̱��
		//app----(PGA--SGA)----���ݿ�	//app--PGA��PGA--SGA �������ύ��֮���������ά����Ա�Ĺ�����ȷ��д�������ܵ������ݿ�
		//app----PGA֮����app��һ��commit����

		//�����ύ����1���ύ��app�������ύ��PGA����2���ύ��PGA�ύSGA����д��
		//���أ�����һ���Ѿ�commit�Ĳ���
		//����oracle���ƶ�����=����dba����γ̵����ݣ�����Ȥ��ѧϰ=�������ύԭ��

		//oracle���ݿ������ṹ���߼��ṹ
		//���鿴�μ���������ṹ
		//���潲һ��Ŀ¼һЩ��Ӧ����Ҫ���ļ�
		//sqlplus.exe:PATH���õ�·��ȥ�ҵ�
		//orcl���������ṹ�ı��ļ� Ŀ¼������Щ.DBF���ļ�
		//LIB����̿�����ͷ�ļ����Ϳ���Դ�ļ�
		//������Ŀ¼��Ҫ�ر�С��ע���


	}
	if (2)
	{
		//oracle server �������İ�װ
		//���ݿ������ɳ��������ʵ���Ĵ����� ������ orcl root 123456 sys
		//��������У�oracle���ݿ�Ĭ����һ����û�����ȥ�����ͽ����ˣ��̳̽����� soctt �� hr�û� ����Ӧ�þ�������һ����

		//oracle client �ͻ��˵İ�װ
		//�ͻ������ã����ͱ��ĵ�oracle���ݿ�
		//OracleServiceORCL����������Ҫ�˽�ģ���oracleһ��ѽ��̵ķ��� �������\ϵͳ�Ͱ�ȫ\������\���� �ҵ���
		//����·�����ҵ�����Ϊd:\oracle\product\10.2.0\db_1\bin\ORACLE.EXE ORCL
		//OracleOraDb10g_home1TNSListener �˿ڣ�1521���� ���ں�̨��������� ���񡣺�̨��������
		//OracleDBConsoleorcl �ǿ���̨���񣨾��������в�����

		//oracle ������ �ṩһ��ȫ�����ݿ���orcl
		//���Կͻ���Ҫ��������orcl

		//oracle client �ͻ����кܶ���
		//1.ͼ�ν��棺��ҵ���������̨
					//ͨ���ɹ��������������\��Ĳ�ѯ��

		//2.sqlplus:�ַ�����
					//ͨ�������п��Դﵽ��ͼ�ν���һ���Ĺ��ܣ�������������⣬�Ƽ���

		//sqldevelop.exe ��11g�İ汾�Ĺ��ߣ��еĴ�Java����� ���еĲ�����java�������װ��������ʦ˵û���ã�̫�Σ�
	}
	if (3)
	{
		//sql������Ҫ�Ժ�ѧϰ����
		//sql���ԣ��ǽű����ԣ�Ϊ���ܶ��������ԣ���ssh ongl html paython shell ��Щһ��
		//����ٵ�ѧϰ��ʽ�����ڽű������������Բ�һ��������ͨ��������ѧϰ��죬��ΪҪ��ס����
		//����Ҫ���ô��룬�ð���

		//��ͨ�û���¼��
		// ��ʽһ��sqlplus		//��½������
		//			scott		//�û���
		//			scott		//����
		// ��ʽ����sqlplus scott/scott	�û���/����
		//�����û���¼������Ҫ���룩
		//sqlplus /nolog		//��ʼ��¼
		//connect /as sysdba	//���ӳ����û�	connect������	sysdba�������û�
		//����Ҫ�����ԭ�������ǰ�װoracleʱ��Ĭ�Ͼ��Ѿ���windows���û����ӣ����������ˣ��Զ�����
		//sys system�û��Ѿ���ӵ������û����У��������н��׵�֪ʶ����֪����ô��ӵģ�����Ȥ��ѧ�γ� ������Ա�γ̡���
	}
	if (4)
	{
		//select�������  ����ѯ��䣩	���˾Ϳ�����μ����������
		//�ؼ��ֲ�����д�����ܷ��У� �Ӽ��˳������з������ȼ���ע����������Ӣ�ĵı�����
		//�����µ��������ϵ���ͷ�����Ķ�������������ô������
		// 1.�鿴�У�
			//SQL > select * from emp;		//emp�Ǳ���	
			//2	;						//Ҫ�ӷֺţ����Լ������������
					
		// 2.�������ݣ�ʹ�������ࡢ���з�ҳ������
			//SQL > set linesize 140		//�������ͼ�����ʾ���������ݣ���������࣬�����׿���ÿ�����140���ַ�							
			//SQL > set pagesize 140		//����������˼�ǣ�140�г�һҳ
			//*SQL> host cls				//�����ǰ��Ļ����ʾ�����ݣ�����
		// 3.�鿴��
			//SQL > select* from tab
		// 4.�鿴���ÿ���ֶ�
			//SQL > desc dept	
		// 5.��ѯ��
			//��ѯ������
			//SQL > select* from emp;
			//��ѯ������
			//SQL> select empno, job, mgr, sal from emp;		//ѡ������ض��� ��ʶ��
			//SQL> ed											//��������Ҫ�ģ�����ed������뵽���±�������������޸ĺ󱣴�ر�
			//��д�� file afiedt.buf
			//SQL > /											//Ȼ������/ �Ϳ���ִ�������޸Ĺ�������
			//����ʶ�����
			//SQL > select empno as "Ա�����", ename "Ա������", job ����, sal "�� н" from emp;
			//ȥ���ظ����� distinct
			//SQL> select distinct deptno from emp;
		//6.����
			//*SQL> host cls									//�����ǰ��Ļ����ʾ�����ݣ�����
		
		//SQL > select * from emp		//�鿴��empӦ�����ļ���
		// 2 ��							//����2 ���Ǽ��� ���س�����
		// ���ִ�ӡ����������̫����
		//SQL > set linesize 140		//ÿ�����140���ַ�	
										//�������л�ҳ���⣬�ż��оͷ�ҳ��
		//SQL > set pagesize 140		//����������˼�ǣ�140�г�һҳ

		//*SQL> host cls				//�����ǰ��Ļ����ʾ�����ݣ�����

		//SQL > select* from tab		//��ӡscott�û��ı�������4����
		//2 ;			��tab�������ֵ䣺��������Ա�������ͨ�û�����Դ����ϵͳ������ʱ����Ѿ������ˣ�
		/*TNAME                          TABTYPE  CLUSTERID
			------------------------------ ------ - ----------
			DEPT	//�����ű�            TABLE
			EMP                            TABLE
			BONUS                          TABLE
			SALGRADE                       TABLE*/

		//SQL > desc dept				//�鿴���ű��ÿһ���ֶ�	//3���ֶ�
			/*����                                                                          �Ƿ�Ϊ�� ? ����
			---------------------------------------------------------------------------- - -------- ----------------------------------------------------
			DEPTNO  //���ű��                                                              NOT NULL NUMBER(2)
			DNAME	//����                                                                  VARCHAR2(14)
			LOC     //��������λ��                                                           VARCHAR2(13)*/

		/*SQL > select* from dept		//�鿴���ű�
			2;*/						
		/*DEPTNO DNAME          LOC		//�ֱ�Ϊ����š����֡�λ��
			---------- -------------- ------------ -
			10 ACCOUNTING     NEW YORK	//ŦԼ
			20 RESEARCH       DALLAS	//����˹
			30 SALES          CHICAGO	//֥�Ӹ�
			40 OPERATIONS     BOSTON*/	//��ʿ��

		//SQL > select* from emp;		//���Լ��� ; �������2������ ;
		//���   ����       ����		 �ϼ��ı��  ��ְʱ��				��н			����		���ű��
		/*EMPNO ENAME      JOB              MGR HIREDATE              SAL       COMM     DEPTNO
			---------- ---------- -------- - ---------- -------------- ---------- ---------- ----------
			7369 SMITH      CLERK           7902 17 - 12�� - 80            800                    20
			7499 ALLEN      SALESMAN        7698 20 - 2�� - 81           1600        300         30
			7521 WARD       SALESMAN        7698 22 - 2�� - 81           1250        500         30
			7566 JONES      MANAGER         7839 02 - 4�� - 81           2975                    20
			7654 MARTIN     SALESMAN        7698 28 - 9�� - 81           1250       1400         30
			7698 BLAKE      MANAGER         7839 01 - 5�� - 81           2850                    30
			7782 CLARK      MANAGER         7839 09 - 6�� - 81           2450                    10
			7788 SCOTT      ANALYST         7566 19 - 4�� - 87           3000                    20
			7839 KING       PRESIDENT            17 - 11�� - 81           5000                    10
			7844 TURNER     SALESMAN        7698 08 - 9�� - 81           1500          0         30
			7876 ADAMS      CLERK           7788 23 - 5�� - 87           1100                    20
			7900 JAMES      CLERK           7698 03 - 12�� - 81            950                    30
			7902 FORD       ANALYST         7566 03 - 12�� - 81           3000                    20
			7934 MILLER     CLERK           7782 23 - 1�� - 82           1300                    10*/

		//select������䣺
		//select  ѡ����Щ��ʶ
		//from	  ��ʶ���ĸ�����ѡ��
		//select * ѡ��ȫ����

		//��ѯ������
		//SQL > select* from emp;
		//��ѯ������
		//SQL> select empno, job, mgr, sal from emp;		//ѡ������ض��� ��ʶ��
		//SQL> ed											//��������Ҫ�ģ�����ed������뵽���±�������������޸ĺ󱣴�ر�
		//��д�� file afiedt.buf
		//SQL > /											//Ȼ������/ �Ϳ���ִ�������޸Ĺ�������
		//����ʶ�����
		//SQL > select empno as "Ա�����", ename "Ա������", job ����, sal "�� н" from emp;
				//��1�μ� as ������ �ڶ��ο��Բ���as�� ��3�� as ���� �����ӣ� ��4����Ϊ�пո�����Ҫ���ϡ���
				//��3�ַ�ʽ����������� ��4�ֱ���ӡ��� ��Ϊ�пո�
		/*Ա����� Ա������   ����           �� н
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

		//��ʶ��������
		//SQL > select sal*12 "�� н" from emp;	//ע��sal*12 ����Щ��ʶ���Խ��� +-*/ ������
		/*�� н									//��ֻ������ΪԪ�صĳ�Ա�����㣬�ַ��Ĳ�����
			----------
			9600		//�Ա������ӡ���У�����12
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

		//ȥ���ظ����� distinct
		//SQL> select distinct deptno from emp;
			/*DEPTNO
			----------
			30			//���ظ����ж�ȥ����
			20
			10*/
	}
	if (5)
	{
		//NULL��ֵ����
		//1.NULL��ʾ�ա���Ч��δָ���� ��������0��ո�NULL���κ������㶼ΪNULL
		//2.��NULL ��= NULL 
		//���濪ʼ��ʾ��

		//1.NULL���κ������㶼ΪNULL
			//SQL > select ename, job ����, sal ��н, sal * 12 ��н, comm ����, (sal * 12) + comm ������ from emp;
			//��Ϊ�еĽ���ΪNULL�����Խ���������е�������Ҳ��ΪNULL��
				/*	ENAME      ����            ��н       ��н       ����     ������
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

			//�޸�������Ϊ ��0����
			//SQL > select sal ��н, sal * 12 ��н, comm ����, ((sal * 12) + nvl(comm, 0)) ������ from emp;
			//((sal * 12) + nvl(comm, 0)) �� nvl(comm, 0)����ʹΪNULL��ֵ��Ϊ0
					/*	��н       ��н       ����     ������
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

		//2.NULL ��= NULL 
			//��ѯ������NULL����
			/*SQL > select* from emp		//Ҫ�������룬��һ�žͲ��ӷֺ�
				2  where comm is NULL;*/	//���������ѡcommΪNULL����
					/*	EMPNO ENAME      JOB              MGR HIREDATE              SAL       COMM     DEPTNO
						---------- ---------- -------- - ---------- -------------- ---------- ---------- ----------
						7369 SMITH      CLERK           7902 17 - 12�� - 80            800                    20
						7566 JONES      MANAGER         7839 02 - 4�� - 81           2975                    20
						7698 BLAKE      MANAGER         7839 01 - 5�� - 81           2850                    30
						7782 CLARK      MANAGER         7839 09 - 6�� - 81           2450                    10
						7788 SCOTT      ANALYST         7566 19 - 4�� - 87           3000                    20
						7839 KING       PRESIDENT            17 - 11�� - 81           5000                    10
						7876 ADAMS      CLERK           7788 23 - 5�� - 87           1100                    20
						7900 JAMES      CLERK           7698 03 - 12�� - 81            950                    30
						7902 FORD       ANALYST         7566 03 - 12�� - 81           3000                    20
						7934 MILLER     CLERK           7782 23 - 1�� - 82           1300                    10*/

			//��ѯ����ΪNULL����
			/*SQL > select* from emp
				2  where comm is not NULL;*/	//ע��notֻ�ܼ����Ǹ�λ��

					/*	EMPNO ENAME      JOB              MGR HIREDATE              SAL       COMM     DEPTNO
						---------- ---------- -------- - ---------- -------------- ---------- ---------- ----------
						7499 ALLEN      SALESMAN        7698 20 - 2�� - 81           1600        300         30
						7521 WARD       SALESMAN        7698 22 - 2�� - 81           1250        500         30
						7654 MARTIN     SALESMAN        7698 28 - 9�� - 81           1250       1400         30
						7844 TURNER     SALESMAN        7698 08 - 9�� - 81           1500          0         30*/

			//��һ���ܲ����� ��= NULL
			/*SQL > select* from emp			//���ֲ�������д ���� NULL ��= NULL
				2   where comm is != NULL;*/	
					/*where comm is != NULL
						*
						�� 2 �г��ִ���:
					ORA - 00933 : SQL ����δ��ȷ����*/
	}
	if (6)
	{
		//���ӷ������
		//1.���ӷ��� || 
		//2.���Ҳ��α����	dual	�������ֵ䣺��������Ա�������ͨ�û�����Դ����ϵͳ������ʱ����Ѿ������ˣ�ר���ṩ�������õģ������ǵ��������κα�û�й���ʱ���������������ʱ��
		//�������ʵ��ó���select���ļ����� �������κ���Դ
		//��סȥ�صĹؼ��� distinct

		//1.���ӷ��� || 
			//SQL > select '111' || '222' ����, ename from emp;	//ע���ǵ�����
			//���ִ�ӡ��14�У���Ϊemp�ı����14�У����滻��dual�������
					/*	����   ENAME
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

		//2.α��
			//SQL > select '111' || '222' ���� from dual;	//�ɹ����ò�������α���ӡ1��

					/*	����
						------
						111222*/

			//����α���ӡʱ��	//ע����sysdate   e��β ����data
			//SQL > select sysdate from dual;

					/*	SYSDATE
						--------------
						01 - 12�� - 21*/
	}
	if (7)
	{
		// SQL��SQLplus������
		//SQL���Ե��﷨��select update delete	
		//SQLplus���ߵ�������������:ed set col
		//SQL��һ������ ������д�ؼ��� ʹ�����������ݿ��еı�Ķ�����Ϣ������
		//SQLplus��һ�ֻ���������򡢹��ߣ��ؼ��ֿ�����д�����ܸı����ݿ��е�ֵ
		//���Կ���SQL���޸����ݿ�����ݣ���SQLplus�ǶԷ��ص����ݽ�����ʾ����

		//ͼ�ν��棬��SQL*plus��β���Ǹ������ṩ���Լ���
		//��11g�汾�У�web����ҵ���������̨��ͼ�ν��涼ȡ����
		//ͼ�ν���Ƚ�ϸ�£��ʺ����֣�����11gȡ���ˣ�ԭ���ƺ�����Ϊ���䱨�����ױ��۸�

		//�޸��п�
		//SQL> col ename for a20;			//ʹename��һ�к���п��Ϊ20��				�����ַ���
		//SQL > col empno for 999999999;	//ʹempno��ʼ����������������е�ǰ�п���		�������֣�
		//��������ʾ

		//SQL > help topic //������ص����йؼ��֣����ֶ��Ƕ࿴�����ۣ�
		{
			//������help�������SQLplus �����

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

		//���Ӧ�Ĺؼ��ֵ��÷� �������ed
					/*SQL > ? edit

						EDIT
						----

						Invokes an operating system text editor on the contents of the
						specified file or on the contents of the SQL buffer.The buffer
						has no command history list and does not record SQL * Plus commands.

						ED[IT][file_name[.ext]]

						Not available in iSQL * Plus*/

		//ed����д�뵽��Ӧ�ļ�	����д��d���µ�1.exe
			//SQL > ed d : / 1.exe

		//�޸��п�
			//SQL> col ename for a20;		//ʹename��һ�к���п��Ϊ20��				�����ַ���
			//SQL > col empno for 999999999;//ʹempno��ʼ����������������е�ǰ�п���		�������֣�
			//SQL > select* from emp;

					/*	EMPNO ENAME                JOB              MGR HIREDATE              SAL       COMM     DEPTNO
						---------------- -------------------- -------- - ---------- -------------- ---------- ---------- ----------
						7369 SMITH                CLERK           7902 17 - 12�� - 80            800                    20
						7499 ALLEN                SALESMAN        7698 20 - 2�� - 81           1600        300         30
						7521 WARD                 SALESMAN        7698 22 - 2�� - 81           1250        500         30
						7566 JONES                MANAGER         7839 02 - 4�� - 81           2975                    20
						7654 MARTIN               SALESMAN        7698 28 - 9�� - 81           1250       1400         30
						7698 BLAKE                MANAGER         7839 01 - 5�� - 81           2850                    30
						7782 CLARK                MANAGER         7839 09 - 6�� - 81           2450                    10
						7788 SCOTT                ANALYST         7566 19 - 4�� - 87           3000                    20
						7839 KING                 PRESIDENT            17 - 11�� - 81           5000                    10
						7844 TURNER               SALESMAN        7698 08 - 9�� - 81           1500          0         30
						7876 ADAMS                CLERK           7788 23 - 5�� - 87           1100                    20
						7900 JAMES                CLERK           7698 03 - 12�� - 81            950                    30
						7902 FORD                 ANALYST         7566 03 - 12�� - 81           3000                    20
						7934 MILLER               CLERK           7782 23 - 1�� - 82           1300                    10*/
	}
	//���⿪ʼ���Ͷ�Ӧ��ʦ����Ƶ�Ŀ�ʱ�ˣ�������p12��
	if (12)
	{
		//sql���������ں��ַ���
		//��ȡϵͳ���ò������鵽�˲��������ܸ���Ӧ�Ĳ����޸���
			//SQL > select* from v$nls_parameters;
		//�޸����ڸ�ʽΪ����ϰ�ߵ�
			//SQL > alter session set NLS_DATE_FORMAT = 'yyyy-mm-dd'; 
		//�ٸĻ�ȥ	//����ὲsession����˼
			//SQL > alter session set NLS_DATE_FORMAT = 'DD-MON-RR';
		//ע�����ʱ�����ڵĸ�ʽ�Ǻ����еģ���ʽ�������ձ�׼��ʽ��д
		//����ע�⣬�ַ����� �����š����� ������ ˫���� ����
		//��ע�⣬�����������ַ����������ܹ��Ƚϣ�oracle���ַ�����������������ת�����������ש�����Գ��ʵ��������Ҳ�ͬ�����ݿ⴦��һ��������mysql
			//SQL> select *from emp
				//2  where HIREDATE < '28-9�� -81'; 
		  
		//ed���±��е����Ҫ�ӷֺ� �� 
	
		//�����Ǽ�����ʱ�����������ַ�ʽ��ע��where ����д���� ���Լ�����
		//SQL > select* from emp
			//1. where sal = 800;				//����salΪ800��Ա����Ϣ �ɸĳ�< >
			//2. where sal between 800 and 2000;//����sal��800~2000֮���Ա����Ϣ
			//3. where sal in(800, 1000);		//����salΪ800��1000��Ա����Ϣ

		//�����޸�
			//SQL> select sysdate from dual;
			//�ᷢ��oracleĬ�ϵ����ڸ�ʽ���������й��˵�ϰ�ߣ���������޸�
					/*	SYSDATE
						--------------
						01 - 12�� - 21*/

		//��ȡϵͳ���ò������鵽�˲��������ܸ���Ӧ�Ĳ����޸���
			//SQL > select* from v$nls_parameters;
			//ע�⿴��Щ��������Ӧ��ʲô�����ڵ���NLS_DATE_FORMAT  
						/*PARAMETER                                                        VALUE
						---------------------------------------------------------------- ----------------------------------------------------------------
						NLS_LANGUAGE                                                     SIMPLIFIED CHINESE
						NLS_TERRITORY                                                    CHINA
						NLS_CURRENCY                                                     ��
						NLS_ISO_CURRENCY                                                 CHINA
						NLS_NUMERIC_CHARACTERS                                           .,
						NLS_CALENDAR                                                     GREGORIAN
						NLS_DATE_FORMAT   //����		                                     DD - MON - RR
						NLS_DATE_LANGUAGE                                                SIMPLIFIED CHINESE
						NLS_CHARACTERSET  //�ַ���		                                 ZHS16GBK
						NLS_SORT                                                         BINARY
						NLS_TIME_FORMAT                                                  HH.MI.SSXFF AM
						NLS_TIMESTAMP_FORMAT                                             DD - MON - RR HH.MI.SSXFF AM
						NLS_TIME_TZ_FORMAT                                               HH.MI.SSXFF AM TZR
						NLS_TIMESTAMP_TZ_FORMAT                                          DD - MON - RR HH.MI.SSXFF AM TZR
						NLS_DUAL_CURRENCY                                                ��
						NLS_NCHAR_CHARACTERSET                                           AL16UTF16
						NLS_COMP                                                         BINARY
						NLS_LENGTH_SEMANTICS                                             BYTE
						NLS_NCHAR_CONV_EXCP                                              FALSE*/

		//�޸����ڸ�ʽΪ����ϰ�ߵ�
			//SQL > alter session set NLS_DATE_FORMAT = 'yyyy-mm-dd';

					/*�Ự�Ѹ��ġ�

						SQL > select sysdate from dual;

					SYSDATE
						----------
						2021 - 12 - 01*/
		//�ٸĻ�ȥ
			//SQL > alter session set NLS_DATE_FORMAT = 'DD-MON-RR';

		//ע�����ʱ�����ڵĸ�ʽ�Ǻ����еģ���ʽ�������ձ�׼��ʽ��д
		//����ע�⣬�ַ����� �����š����� ������ ˫���� ����
		//��ע�⣬�����������ַ����������ܹ��Ƚϣ�oracle���ַ�����������������ת�����������ש�����Գ��ʵ��������Ҳ�ͬ�����ݿ⴦��һ��������mysql
			//SQL> select *from emp
				//2  where HIREDATE < '28-9�� -81';

						/*EMPNO ENAME      JOB              MGR HIREDATE              SAL       COMM     DEPTNO
						---------------- ---------- -------- - ---------- -------------- ---------- ---------- ----------
						7369 SMITH      CLERK           7902 17 - 12�� - 80            800                    20
						7499 ALLEN      SALESMAN        7698 20 - 2�� - 81           1600        300         30
						7521 WARD       SALESMAN        7698 22 - 2�� - 81           1250        500         30
						7566 JONES      MANAGER         7839 02 - 4�� - 81           2975                    20
						7698 BLAKE      MANAGER         7839 01 - 5�� - 81           2850                    30
						7782 CLARK      MANAGER         7839 09 - 6�� - 81           2450                    10
						7844 TURNER     SALESMAN        7698 08 - 9�� - 81           1500          0         30*/
	}
	if (13 && 14)
	{
		//�й�where��������
		//�ð�����˵������
		//ע�⣬�ַ����õ����š������ҵ������ڴ�Сд����

		//1.��ѯ������1000~2000֮���Ա����Ϣ
				//SQL> select *from emp where sal >= 1000 and sal <= 2000;
				//SQL> select *from emp where sal between  1000 and 2000;
			//����д���� ԭ���ǰ���˳��һ��һ�е��ȱȽ� 2000 ���͵���û��������2000�ģ���Ϊfalse
				//SQL> select *from emp where sal between 2000 and 1000;
			//������չ�� �����﷨��û����ģ�1>2�൱��false��0��
				//SQL> select *from emp where sal 1>2;
			//��֮������ܰ�emp���������ж���ӡ��������Ϊ2 > 1Ϊtrue
				//SQL > select* from emp where sal 2 > 1;

		//2.��ѯ���ű��Ϊ 10 20��Ա����
				//SQL> select *from emp where DEPTNO in (10, 20);
			//��ѯ����10 20 ��Ա��
				//SQL> select *from emp where DEPTNO not in (10, 20);

		//3.����������п�ֵNULL�����ϵ����⣨�ص㣩
			//����û����ģ��൱��c���Ե�if�жϣ��ҷ����������� 
				//SQL> select *from emp where DEPTNO in (10, 20, null);
				//if(DEPTNO == 10 || DEPTNO == 20 || DEPTNO == NULL){}	//����û�����
			//������ģ��ᷢ��not in��ļ�������null������Զ�����н������ΪDEPTNO�����κβ�������߼������������
				//SQL> select *from emp where DEPTNO not in (10, 20, null);
				//if(DEPTNO != 10 && DEPTNO != 20 && DEPTNO != null){}	//�����������
		//���ۣ�not in ��ļ���null���ܳ��֣�������ȫû�н������in���䵹��û����

		//4.like��ģ����ѯ����%��ƥ���������ַ�; ��_��ƥ��һ���ַ�����\���� ת���ַ������永��˵�����ʹ��
		//��ѯ������s��ͷ��Ա��
		//��ѯֻ��4����ĸ��Ա��
		//��ѯ���ֺ����»��ߵ�Ա��
			//��ѯ������s��ͷ��Ա����	S��ͷ%�����������ַ�����like��ɸѡ������
				//SQL> select *from emp where ename like 's%';
			//��ѯֻ��4����ĸ��Ա����һ��_��ʾ1���ַ�����4���ʹ�ָ4���ַ�
				//SQL> select *from emp where ename like '____';
			//��ѯ���ֺ����»��ߵ�Ա��
				//��Ҫ�����һ�����»��ߵ�Ա��,��ӷ�ʽ����
					//SQL> insert into emp(empno, ename, job, mgr, hiredate, sal, comm, deptno) values(7399, 'Y_y', 'CLEAR', 7900, '17-12��-21', 1000, 0, 10);
				//����д���������»��߻��ǵ�������һ���ַ�
					//SQL> select *from emp where ename like '%_%';
				// %\_% ��ʾ ��_ת�塣escape '\'���Ǹ���ϵͳ\��ת���ַ���_���»����ַ�
					//SQL> select *from emp where ename like '%\_%' escape '\';

		//5.�߼����������SQL�Ż�
		//oracle����where��ʱ�������������������Ϊ�٣�����ߵľͲ��ý����ˣ�������sql�Ż�
			//����ѧϰ���������ֵز������ݿ���Ż���������ʱ�Ļ��� 
		//��ѯнˮ����1000���������к���m�ַ���Ա����Ϣ
			//SQL> select *from emp where sal>1000 and like '%M%';
		//ע�⣬�ַ����õ����š������ҵ������ڴ�Сд����
					
						

	}
	if (15)
	{
		//����ʦ���������ܽ�ع�֮ǰ�ε�֪ʶ��
		//���ڸ�ϰʱ��һ���Ƕ���Ƶ
	}
	if (16)
	{
		//���ݿ����������order by ... 
		//���������ݿⷵ�صĽ����������sqlplus��������

		//1.Ĭ�������򣨴�С����
				//select *from emp order by sal;	
			//order by desc ..0  ����Ϊ���򣺴Ӵ�С��
				//SQL> select *from emp order by sal desc;
			//order by asc ...	  (��Ϊ���򣺴�С����)
				//SQL > select* from emp order by sal asc;

		//2.order by + ���������ʽ����š������������ֶ����Լ��ں��棬��ʶ��
			//����н�ʲ�ѯԱ����Ϣ	//�����ͱ��ʽ
				//SQL> select ename,sal*12 from emp order by sal*12 asc ;
			//������н��ѯԱ����Ϣ	//�б���
				//SQL > select ename ����, sal * 12 ��н from emp order by ��н desc;
			//����ţ����2����ʾ��ӡ�ĵ�2�н�������ע����select������ĵ�2��
				//SQL > select ename, sal from emp order by 2 asc;

		//3.order by �����ж���У��������������������Ϊ׼��Ȼ������ͬ���������ٽ���ʣ�µ�����
		//���ж����ʱ���ܶԲ�ͬ���ж���������
			//���ղ��Ž�������
				//SQL > select ename, sal, deptno from emp order by deptno asc, sal asc;
			//���ղ��ź͹��ʽ�������
				//SQL > select ename, sal, deptno from emp order by deptno asc, sal asc;
			//�ᷢ�֣�order by �������������Ϊ��׼���˴�Ϊ���ţ�Ȼ������ͬ�������ٰ��չ�������

		//4.null������null����뵽�����У��������������൱������
				//null�Ĳ���عˣ�1.null���κ�ֵ�������㶼Ϊnull 2.null != null
				//3.where not in () ��ļ����г���null������Զ�����н��
				//4.���䣺null����뵽�����У��������������൱������
			//��ӡ����鿴������Խ����Żᷢ��null������ǰ���ˣ�����ֵ�ĳ�Ա��������
				//SQL > select ename, comm from emp order by comm desc;
			//������۲⣺����null�����˺���
				//SQL > select ename, comm from emp order by comm;
			//nulls last :Ϊ��null��Ӱ������������������ôһ������
				//SQL > select ename, comm from emp order by comm desc nulls last;
			//nulls last :������������null�����ں��棬��Ӱ������ֵ�Ĳ���
	}
	if (17)
	{
		//���к������ַ���
			//�����ж��к����뵥�к��������к����У��ַ��ࡢ��ֵ�ࡢͨ���ࡢת���ࡢ������
			//����-������-���������������û�в��������Ǳ����з���ֵ
			
		//1.lower / upper ���ַ����� ��Сдת����lower ��д��Сд�� upper��Сд���д��
			//SQL > select lower('HELLO WORLD,YY IS COMING!') ��д��Сд, upper('hello world,Yy is coming!') Сд���д from dual;

		//2.initcap:����������ĸ��ɴ�д
			//SQL > select initcap('hello world,yy is coming!') ��������ĸ���д from dual;

		//3.�ַ������ӷ�ʽ��1. || 2.������concat ע�⣺concatһ��ֻ��ƴ�������ַ��������ǿ�����Ƕ����ɶ���ַ���������
			//SQL> select 'hello world,'|| 'yy is coming!'||'Keep going!'�ַ���ƴ�� from dual;
			//SQL> select concat('hello world,',concat( 'yy is coming!','Keep going!')) �ַ���ƴ�� from dual;

		//4.substr(a,b); substr(a,b,c) //���ַ���a�е�bλ��ʼȡ�ַ���ȡc����û��c������ȡ��
			//SQL> select substr('hello world,yy is coming!', 4) ���ַ���a��bλ��ʼȡ from dual;
			//SQL > select substr('hello world,yy is coming!', 4, 8) ȡc�� from dual;

		//5.length��ȡ�ַ�����lengthb��ȡ�ֽ��� ��1�����Ķ�Ӧ��1���ַ���2���ֽڣ�
			//SQL> select length('Ԭ�������chunhuo') ȡ�ַ���, lengthb('Ԭ�������chunhuo') ȡ�ֽ��� from dual;

		//6.instr��a, b������ĸ��a�в����ִ�b���ҵ��򷵻�b��ĸ��a�е�λ�ã��Ҳ�������0
			//SQL > select instr('hello world,yy is coming!Keep going!', 'Keep going') a�в���b from dual;

		//7.lpad/rpad :һ���ַ���a���ַ�������b�������ַ�cȥ�����lpad�������rpad�������
			//SQL > select lpad('abcdefg', 11, '+') ��λ��11, rpad('abcdefg', 11, '++') �Ҳ�λ��11 from dual;

		//8.trim('b' from a):�ַ���a��ɾ��ǰ��λ�õ��ַ���b�����м�Ĳ�ɾ����ǰ�����ظ�������Ҳɾ
			//SQL > select trim('h' from 'hello hh worldhhhh') ǰ��ɾh from dual;

		//9.replace(a, b, c) :�ַ���a�� ��b ���� c		b�������ַ�Ҳ�������ַ���
			//SQL > select replace('hello world', 'world', 'Yy~') a��b����c from dual;
	
	}
	if (18)
	{
		//���к�������ֵ��

		//1.round��a, n��:�������룬�ұ���С�����nλ�������дn�����Ǹ�λû��С����-1����ʮλ���Դ�����
			//select round(45.926, 2) �ٷ�λ,round(45.946, 1) ʮ��λ,round(45.926,0) ��λ,round(45.926,-1) ʮλ,round(45.926, -2) ��λ from dual;
						//�������룬��Ҫ��������һλ�ĺ���һ�����������жϽ�λ�ģ�����Сѧ��ѧ�Ĵ���ĩ����ǰ��
						/*�ٷ�λ     ʮ��λ       ��λ       ʮλ       ��λ
						---------- ---------- ---------- ---------- ----------
						45.93       45.9         46         50          0*/

		//2.trunc�������ض�
			//SQL > select trunc(45.926, 2), trunc(45.926, 1), trunc(45.926, 0), trunc(45.926, -1), trunc(45.926, -2) from dual;

						/*TRUNC(45.926, 2) TRUNC(45.926, 1) TRUNC(45.926, 0) TRUNC(45.926, -1) TRUNC(45.926, -2)
						-------------- - -------------- - -------------- - ---------------- ----------------
						45.92            45.9              45               40                0*/

		//3.mod(1600, 300)������
			//SQL > select mod(1600, 300) ���� from dual;

						/*����
						----------
						100*/
	}
	if (19 && 20)
	{
		//���ں�������Ҫ��

		//1.to_char���޸����ں�ʱ���ʽ��������ʱ���룩			hh24����24Сʱ��	
			//SQL > select to_char(sysdate, 'yyyy-mm-dd hh24-mi-ss') ��ǰ��ʱ�� from dual;
						/*��ǰ��ʱ��
						------------------ -
						2021 - 12 - 01 20 - 15 - 28*/
		//2.��������
			//��һ��Ա������ְ���	//round���������� ע���õ���ְ����emp���ǿձ�dual��hiredate��ְ������Ա������ְʱ��
				//SQL> select round((sysdate-hiredate)) ��, round((sysdate-hiredate)/7) ��, round((sysdate-hiredate)/30) ��, round((sysdate-hiredate)/365) �� from emp;

		//3.���㣺���졢���졢����	to_char �Ǹı����������ʽ��
			//SQL> select to_char((sysdate-1), 'yyyy-mm-dd') ����, to_char((sysdate), 'yyyy-mm-dd') ����, to_char((sysdate+1), 'yyyy-mm-dd')���� from dual;

		//4.months_between����ȷ�ļ������·ݲ�ֵ //֮ǰ��2�Ǵ���
			//SQL > select(sysdate - hiredate) / 30 ����, months_between(sysdate, hiredate) ���� from emp;

		//5.add_months('' , n):��������·��ϼ�n����
			//SQL > select add_months(sysdate, 2) ���n���� from dual;

		//6.next_day('a', 'friday'):�������ڵ���һ�����壬ע�⣺�����������4������һ������������
			//SQL > select NEXT_DAY(sysdate, '������') �¸����� from dual;
			//����'friday'��ʾ���󣬵�����'������'�Ϳ��ԣ�emm ����ʦ˵�Ǳ��ػ�

		//7.last_day():�������ڵ������·ݵ����һ��
			//SQL > select last_day(sysdate) ���µ����һ�� from dual;

		//8.round ( , 'month'):���ڵ���������
			//���·��������룺�������������Ƿ����㵱�µ�15�ţ�ע����month ����s
				//SQL> select round(sysdate, 'month') ���·� from dual;
			//������������룺���������·��Ƿ�����6��
				//SQL > select round(sysdate, 'year') ����� from dual;
			
		//9.trunc :���ڵĽض�
			//���·ݽض�
				//SQL > select trunc(sysdate, 'month') ���·ݽض� from dual;
			//����ݽض�
				//SQL > select trunc(sysdate, 'year') ����ݽض� from dual;
	}
	if (21)
	{
		//�������൱��Ҫ�����Ի��õ�����ע��
		//����==�ַ���==���� ���������͵�ת��
			//�������͵�ת���У���ʽ����ת������ʽ����ת��
			//����<==>�ַ���<==>���� �����ߵ�ת��ͨ������TO_CHAR TO_DATE TO_NUMBER ��ת�������ں����ּ�Ҫ��ת���ַ�����ת���Ƚ�
			//���ڵĸ�ʽ��YYYY �ꡢYEAR �ꡢMM �¡�MONTH �¡�DAY��DY��DD�� 
		//SQL���Ż�������ʹ����ʾת��
			//��ʽת������ǰ��ģ���ת�������ǿ���ת���ģ��������ֲ���ֱ��תΪ���ڣ�Ҫ�ֱ���ַ���
			 
		//1.�ַ���=>����ת�������£����Ϊ333 ��������������������ת����
			//SQL > select '111' + 222 from dual;

		//2.����=>�ַ���ת�������£�	���Ϊ��111222 �������ַ���ƴ�ӣ���Ϊ||���ַ���ƴ�ӵķ���
			//SQL > select '111' || 222 from dual;

		//3.���������ǳ���Ҫ���������ã���ѯ�� 1981-01-01ʱ����ְ���Ա����Ϣ��ע�⣺���ڸ�ʽ����
			//��ʽ����ת����Ҫת��˭����TO_˭
			//to_char:����ת�����ַ�������HIREDATEת�����ַ�����ʽ�ٱȽ�
				//SQL > select* from emp where to_char(HIREDATE, 'yyyy-mm-dd') > '1981-01-01';
			//to_date���ַ���ת��������
				//SQL > select* from emp where HIREDATE > to_date('1981-01-01', 'yyyy-mm-dd');
				
			//��ʽ����ת�����ַ���ת�������ڸ�ʽ�����ڸ�ʽ���У������ַ����ĸ�ʽһ��Ҫд��
				//������Ҫ�ã���Ϊ�б��ػ�ԭ����������ڸ�ʽ���ܲ�ͬ��ֱ����ʽת�����������ڸ�ʽ���У����׳���
				//SQL > select* from emp where HIREDATE > '01-1��-81';
	}
	if (22)
	{
		//TO_CHAR���������ֵ�ת��//��֪ʶ�㳣��
			//TO_CHARת�����ø�ʽ��9�����֡�0���㡢$����Ԫ��L�����ػ��ҷ��š�.��С���㡢,��ǧλ��

		//1.��ѯԱ��нˮ�����ػ��������
			//���ַ���ʽ
				//SQL> select ename,to_char(sal, 'L9,999.99') �ַ���ʽ from emp;
			//��������ʽ���������������ַ���ʽת�������֣����ն�Ӧ��ʽ��ת��������
				//SQL> select to_number('��1,600.00', 'L9,999.99') ������ʽ from dual;

		//����Ϊͨ�ú�������ʦ˵��㿴һ�¾Ϳ�����
			//nvl(a, b) �� ��aΪnullʱ������b�����򷵻�0
				//SQL > select ename, sal * 12 + nvl(comm, comm) ������ from emp;
			//nvl2(a, b, c):��aΪnullʱ������c�����򷵻�b
				//SQL > select ename, sal * 12 + nvl2(comm, comm, 0) ������ from emp;
			//nullif(a, b)����a == b ʱ����null�����򷵻�a
				//SQL > select nullif(10, DEPTNO) from emp;	//�˴��������壬����Ϊ�˲���
			//coalesce(a, b, c ......):���ص�һ����Ϊnull��ֵ
				//SQL > select coalesce(comm, comm) ���� from emp;	//����һ��ѭ��������һ��
	}
	if (23)
	{
		//��������ʽ��������Ҫʱ�������������Ƶ��
		//��Ա���ǹ��ʣ����Ҵ�ӡ�������ܲ�+1500������+1200������+1400������Ա��+100
			//�����ֺ�������ʹ�ã�
			//CASE���ʽ��SQL99�ı��ʽ���ȽϷ���
			//DECODE:oracle��˾�Լ����﷨������java���Ƚϼ��

		//��һ�ַ�����CASE���ʽ
		/*select ename, job, sal ��ǰ��н,(case job when 'PRESIDENT' then sal + 1500
													when 'MANAGER' then sal + 1200
													when 'ANALYST' then sal + 1200
													else sal + 100
											end
										 )�Ǻ���н from emp;*/

		//�ڶ��ַ�ʽ��decode�﷨����Ȼ�����
		/*select ename, job, sal ��ǰ��н, (
				decode(job, 'PRESIDENT', sal + 1500,
							'MANAGER', sal + 1200,
							'ANALYST', sal + 1200,
				sal + 100
					)
			)�Ǻ���н from emp;
			*/

	}
	//���к���
	if (24)
	{
		//���к��������麯��	AA	//�ѣ�������ѧ�������Ժ����������벻���������
			//�ؼ��ʣ�MAX()���ֵ�� MIN()��Сֵ�� AVG()ƽ��ֵ�� SUM()��͡� SCONT()����
		 
		//1.��Ա�����С����ʵ����ֵ����Сֵ��ƽ��ֵ�����й���
			//SQL > select max(sal) ��߹���, min(sal) ��͹���, avg(sal) ƽ������, sum(sal) ���й��� from emp;
		//2.�󽱽�ƽ��ֵ
				//SQL > select avg(comm) ��ʽ1, sum(comm) / count(empno) ��ʽ2, sum(comm) / count(comm) ��ʽ3 from emp;
						/*��ʽ1      ��ʽ2      ��ʽ3
						---------- ---------- ----------
						550 157.142857        550*/
			//�ᷢ�ַ�ʽ2��ֵ��һ����ԭ����1��3�����麯���������Զ��˿ա�null���ˣ����ǲ�����null�����ȥ
			//�˿մ��������Ҫ�����繫˾�Ĺ��ʱ�Ū���ˣ����Ǻ����ص�
				//SQL > select sum(comm) / count(nvl(comm, 0)) �˿մ��� from emp;
			//���Ǹ���������ȷ���Ƿ�Ҫ��null�ĳ�Ա���ǽ�ȥ


	}
	if (25)
	{
		//�������� GROUP BY
			//�ع�һ��order by ��֪ʶ���йؼ���desc������asc�����򣩣������ܽ� ���������ʽ����������ţ�
			//�����ж�������򣬵��ǻ������order by���н���������飬Ȼ����ֵ��ͬ�Ľ���ʣ�µķ���
		
		//������ŵ�ƽ�����ʣ�group by ���������
				/*select deptno, avg(sal)
				from emp
				group by deptno		
				order by deptno asc*/
			//���ϴ������˼�ǣ���deptnoΪ���飬������avg(sal)������˳��������

		//���麯����������SQL��׼������ô���
			//��ȷд��
				/*select a, b, c	//������ȷ��д��������abc���Ƿ��������abc����֮ͬ��
				from emp
				group by a, b, c
				*/
			//����д��
				/*select a, b, c	//���Ǵ���д������Ϊ������˸�e���������ݵļ����ǽ����ڷ�����֮�ϵ�
				from emp			//��Ȼavg(sal) ���㣬���Ǻ�������ֵ
				group by a, e, c
				*/

		//���ղ��š�ְλ���飬��ƽ������
				/*select deptno,job,avg(sal)
				from emp
				group by deptno, job
				order by 1 asc*/		//��ţ�������һ��������������
			//����Ľ��Ϊ��  �����������Բ���Ϊ���飬Ȼ������ְλ���飬�����ŵ�Ա�����Ӧְλ���غ�ʱ�������ֳ�һ�飬���������������
						//����10�Ų��ž�û��ְλ�غϵģ�����3������������
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
		//��ǿ��һ��,������ǵ��ʹ�����Ϊ����������������Ҫ��ȫ��ͬ������Ҫ����Ľ������
			//��avg(sal)������Ҫ��ӡ��ֵ����������飬���Բ����С�
			///�����кܶ��˲�֪����������������е����ݿⲻ�ϸ񣬾Ͳ�֪��������
				/*select deptno,job,MGR,avg(sal)
				from emp
				group by deptno, job
				order by 1 asc*/
	}
	if (26)
	{
		//�������		

		//1.��ѯ���ŵ�ƽ������
						/*select deptno, avg(sal)
						from emp
						group by deptno*/
		//2.��һ������ѯƽ�����ʴ���2000�Ĳ��ţ�having�ǹ�����䣬��where�������
						/*select deptno, avg(sal)
						from emp
						group by deptno
						having avg(sal) > 2000*/

		//3.where��having������
			//��������having��������麯����where��䲻�����麯��

		//4.����10�Ų��ŵ�ƽ������
				//4.1�ȹ��ˣ��ٷ���	��Ч�ʸ��ߣ�SQL�Ż�
						/*select deptno, avg(sal)
						from emp
						where deptno = 10
						group by deptno*/
				//4.2�ȷ��飬�ٹ���
						/*select deptno, avg(sal)
						from emp
						group by deptno
						having deptno = 10*/
			//�������ַ������ȹ��ˡ��ٷ����Ч�ʸ��ߣ�SQL�Ż�
			//��Ϊ������̸������������ʣ��ȹ��ˣ������ٷ��������
	}
	//����ѯ
	if (27 && 28 && 29)
	{
		//����ѯ�ؼ���
		//��ֵ�����벻��ֵ���ӣ��൱��Ҫ�������о��Ի�������
		//������

		//�ѿ�����������ͬʱ���м������ᵼ��һ����ѧ�ϵ����󣨲���Ҫ���������ģ�
			//�������������֮��
			//�������������֮�˻�
			// ���£���ӡ��56�� 4*14 dept��4��
			//SQL> select e.ename from emp e, dept d;
			 
		//���������������ͱ����˵ѿ����������£��ͻָ�������14�� dept��Ҳ������Ϊdeptno
			//SQL > select e.ename from emp e, dept d where e.deptno = d.deptno;

		//1.��ֵ���ӣ���ѯԱ����Ϣ��Ա���š���������н���������ƣ���dept���У�
				//��3�о��ǵ�ֵ���ӣ��������ж���deptno��ʹ���ǹ�������
						/*select e.ename, e.empno, e.sal, d.deptno
						from emp e, dept d
						where e.deptno = d.deptno;*/

		//2.����ֵ���ӣ���ѯԱ����Ϣ��Ա���š���������н��нˮ������SALGRADE���У�
				//����һ��
					/*select e.ename, e.empno, e.sal, s.grade
					from emp e, salgrade s
					where e.sal >= s.losal and e.sal <= s.hisal;*/
				//��������
					/*select e.ename, e.empno, e.sal, s.grade
					from emp e, salgrade s
					where e.sal between s.losal and s.hisal;*/
			//����ֵ���ӣ������ӹ�����û�� = �������������������ˣ�����ǲ���ֵ����

		//3.�����ӣ�������ͳ��Ա�����������źš��������ơ�����������
			//�������õ����顢����ѯ
				//����1����δ��ɣ���û�õ�������
						/*select e.deptno, d.dname, count(e.deptno)
						from emp e, dept d
						where e.deptno = d.deptno
						group by e.deptno, d.dname*/
			//�ᷢ��dept������һ��40����û����ʾ����������Ϊemp����û����40���ŵ�Ա������������
			//����������ʣ���Ϊ��ֵ���Ӳ�����e.deptnoû��40��Ա�� ����d.deptno��40������ţ����µ�ֵ���Ӳ�����
			//�����oracle��˾�Ĵ������ǣ���һ��ǿ��Լ�����Ǿ��ǣ�ϣ���˱���������Ϣ��ʾ�����ڶԵȷ����ȺŶ��棩���ϣ�+��
			//���� = �Ⱥŵ��Ҳ�������������ӣ����� = ����������������
				//����2�������ӣ�����sql��ǿ��Լ��
						/*select e.deptno, d.dname, count(e.deptno)
						from emp e, dept d
						where e.deptno (+) = d.deptno
						group by e.deptno, d.dname;*/
			//�ɹ���40���Ŵ�ӡ������,ע��(+)�Ǽ���e.deptno�ĺ��棬������ϣ��d.deptno��������Ϣ��ӡ
	}
	if (30 && 31)
	{
		//��ʦ�ĵ�1�����
		//�������ǻعˣ���ϰ��ʱ����Կ�������
	}
	if (32 && 33)
	{
		//�����ӣ���ͬһ�ű������ݱ�Ȼ���Լ������Լ�
		
		//��ѯԱ����Ϣ�����Ҳ�ѯ��Ӧ���ϰ���Ϣ
			//��ʾ��XXX���ϰ���XXX
			//����1�� ��һ�������������Ż����䣩����û����ʾ��Ϣ
						/*select a.ename, b.ename
						from emp a, emp b
						where a.mgr = b.empno;*/
			//����2�������ʾ��Ϣ������KINGû�д�ӡ����
						/*select a.ename || '  BOSS is  ' || b.ename
						from emp a, emp b
						where a.mgr = b.empno;*/
			//����3����KING��ӡ����������KING���ϰ���null
						/*select a.ename || '  BOSS is  ' || b.ename
						from emp a, emp b
						where a.mgr = b.empno(+)*/
			//����4�������˿�����������ˣ�KING  BOSS is  his self
						/*select a.ename || '  BOSS is  ' || nvl(b.ename, 'his self')
						from emp a, emp b
						where a.mgr = b.empno(+)*/

		//33���ǲ��䣺��ֵ������oracle�Լ����﷨����SQL���﷨��һЩ��SQLҲ����ص��﷨
				//�Ժ�ѧmysql��ʱ��Ὣsql���﷨
				//N����������������N-1��������
	}
	//�Ӳ�ѯ���ص��е��ѵ㣩
	if (34)
	{
		//�Ӳ�ѯ���ϣ���������select���Ե�Ƕ��
		//һ���Ӳ�ѯ���Ӳ�ѯ�е����ݸ�����ѯʹ��
		//����Ӳ�ѯ������ѯ�Ĳ������ݵ��Ӳ�ѯ��

		//֪ʶ�ܹ�
		//1.�������д���
		//2.�Ӳ�ѯ�ģ�����Ҫ����
		//3.�Ӳ�ѯ������ѯ���Բ���ͬһ�ű�ֻҪ�Ӳ�ѯ���صĽ��������ѯ���þ���
		//4.����������ѯ��ʲô�ط���һ���Ӳ�ѯ
			/*select .....������ŵ����Ӳ�ѯ��
			from .....���Է��Ӳ�ѯ
			where.....���Է��Ӳ�ѯ
			group by.....����
			order by .....����
			having.....���Է��Ӳ�ѯ*/
		//5.�Ӳ�ѯ�ķ���
			/*--�����Ӳ�ѯֻ���õ��бȽϲ�����(= < >)
			--�����Ӳ�ѯֻ���ö��бȽϲ�����(in any all)
			�����Ӳ�ѯ������ѯ��ִ��˳������
				һ���Ӳ�ѯ ���Ӳ�ѯ�ѽ�����ظ�����ѯ...һ��
				����Ӳ�ѯ������ѯ��select���еĲ������ݸ��Ӳ�ѯ*/
		//6.�Ӳ�ѯ���ؿ�ֵ������
		//7.

		//��ον�ǰ3��֪ʶ�ܹ����ð�����ѧϰ

		//����1��2
		//1.˭�Ĺ��ʱ�scott��
			//��1������֪��SCOTT�Ĺ��ʣ�ע���ַ�����Сд����
					/*	select sal
						from emp
						where ename = 'SCOTT'*/
			//��2�����ҵ����ʱ�3000 �ߵ���
						/*select*
						from emp
						where sal > 3000*/
			//��3������1Ƕ�׵�2�У��γ��Ӳ�ѯ��1��2���Ӳ�ѯ
						/*select*
						from emp
						where sal > (select sal		
						from emp
						where ename = 'SCOTT')*/
			//����д�����׶�����������Ҫ����������֪ʶ�ܹ���1��2
			//�Ӳ�ѯ��������select���Ե�Ƕ��
			
		//����3
		//2.��ѯ������ SALES��Ա����Ϣ��������֪ʶ�ܹ�3
			//�������ȴӲ��ű��в鵽SALES�Ĳ��ű��
						/*select  deptno
						from dept
						where dname = 'SALES'*/
			//��2������ѯ���ű��Ϊ30��Ա��
						/*select*
						from emp
						where deptno = 30*/
			//��3������1Ƕ�׵�2�У���Ϊ2���Ӳ�ѯ
						/*select*
						from emp
						where deptno = (select  deptno
						from dept
						where dname = 'SALES')*/
			//�����Ӳ�ѯ������ѯ����ͬһ�ű������ܸ�����ѯʹ��

		//������⻹��һ�ַ�ʽ��ʹ�ö���ѯ
						/*select e.*
						from emp e, dept d
						where d.deptno = e.deptno and d.dname = 'SALES'*/
	}
	if (35)
	{
		//�Ӳ�ѯ���У�

		//SQL�Ż��Ļ��⣺
			//select *			
			//select a, b, c	//Ч�ʸ��ߣ���Ϊ����ȫ������
			
			//�Ӳ�ѯ				//��ΪǶ�ף���ѯ��2��
			//����ѯ			//Ч�ʸ��ߣ���Ϊֻ��ѯ��1�Σ����Ǿ��ǿռ任ʱ�䣬��Ϊ2�ű�ռ����

		//4.����������ѯ��ʲô�ط���һ���Ӳ�ѯ
			/*select .....������ŵ����Ӳ�ѯ��
			from tab1, tab2 ,���Է��Ӳ�ѯ
			where.....���Է��Ӳ�ѯ
			group by.....����
			order by .....����
			having.....���Է��Ӳ�ѯ*/

		//����4.1
		//���ӣ�select�� �ܼ����ܶණ�������Ƿ����˹��ɣ�����˳�������ʱ��һ���Ǽ���1������
						/*select ename, job, sysdate, 'BOSS' || ' ME', (select dname from dept where deptno = 10)
						from emp*/
			//���ʹ���	����һ��ֻ�ܼ���1�����ݣ����ǵ���������Ӳ�ѯ��һ������4�����ݣ�һ�Զ࣬�ʹ����ˣ��޷�����
						/*select ename, job, sysdate, 'BOSS' || ' ME', (select dname from dept)
						from emp*/
			//���������ͽ�����select .....������ŵ����Ӳ�ѯ��
			//Mysql�ǿ���һ�Զ�ģ����������mysql��û���ˣ�ԭ����mysql��ⲻ��ϸ�����������仹�ǲ��õ�

		//����4.2
		//from tab1, tab2 ,���Է��Ӳ�ѯ
			//��Ϊtab1��tab2���Ǽ��ϣ����Ǽ��ϣ����Ӳ�ѯҲ�Ǽ��ϣ������ܷŵ�from����ȫû����
		//�����⣺
			//���ʣ���ղ�ѯԱ�������ͱ��
					/*select *
					from
					____________*/
			//��������Ϊselect * ����* �Ѿ�����ȫ�������ű������ټ��κα��Ѿ�û���ˣ�ֻ������Ӳ�ѯ
			//�������ǿ����Ӳ�ѯ�ģ�
					/*select *
					from
					(select ename, empno from emp)*/
	}
	if (36)
	{
		//�˿�ʱ�Ƚ���Ҫ�����п���û��4�ĸ�����������ǰҪ��һ��

		//5.�Ӳ�ѯ�ķ���
			/*--�����Ӳ�ѯֻ���õ��бȽϲ�����(= < >)
			--�����Ӳ�ѯֻ���ö��бȽϲ�����(in any all)
			�����Ӳ�ѯ������ѯ��ִ��˳������
				һ���Ӳ�ѯ ���Ӳ�ѯ�ѽ�����ظ�����ѯ...һ��
				����Ӳ�ѯ������ѯ��select���еĲ������ݸ��Ӳ�ѯ*/

		//����5-1�������Ӳ�ѯ
			//���бȽϲ�������= >= < <= <>
				//��ѯ������'SCOTT'һ����Ա��
						/*select*
						from emp
						where sal = (select sal from emp
						where ename = 'SCOTT')*/
				// = �ǵ��бȽϲ����������Ժ���ֻ���ǵ����Ӳ�ѯ

		//����5-2 �������Ӳ�ѯ
			//any/all ��ǰ����߼��Ƚ����������
			//���бȽϲ�������in�� any�� all
			// in
				//��ѯ��������ΪSALES��ACCOUNTING��Ա����Ϣ
						/*select*	
						from emp
						where DEPTNO in(select deptno from dept
						where dname = 'ACCOUNTING' or dname = 'SALES')*/
						//ע�ⲻ�� || ������ or ��|| ��c���ԵĻ�
				//��ѯ�������Ʋ���SALES��ACCOUNTING��Ա����Ϣ
						/*select*
						from emp
						where DEPTNO not in(select deptno from dept
						where dname = 'ACCOUNTING' or dname = 'SALES')*/
			//any��all����
				//��ѯнˮ��30�Ų�������Ա���ߵ�Ա����Ϣ����30�Ų������н�ʵĸ߼��ɣ�
					//���в�����д���������Ӳ�ѯ��
						/*select*
						from emp
						where sal > (select min(sal) from emp
						where DEPTNO = 30)*/
					//����д��:any:���Ӳ�ѯ���ص�����һ��ֵ���бȽ�
						/*select*
						from emp
						where sal > any (select sal from emp
						where DEPTNO = 30)*/

				//��ѯнˮ��30�Ų�������Ա���ߵ�Ա����Ϣ����30�Ų������н�ʵĸߣ�
					//���в�����д��������д��Ч��һ��
						/*select*
						from emp
						where sal > (select max(sal) from emp
						where DEPTNO = 30)*/
					//����д����all:���Ӳ�ѯ���ص�����ֵ���бȽ�
						/*select*
						from emp
						where sal > all(select sal from emp
						where DEPTNO = 30)*/
				//any/all ��ǰ����߼��Ƚ����������
				//���������ֻ�ܸ������Ӳ�ѯʹ��
				
	}
	//�Ӳ�ѯ����ǿ��
	if (37 && 38 && 39 && 40 && 41)
	{
		//����ǿ���⣺���Ӳ�ѯ��������������Ҫ���Ƚ���
			
		//1.����6���Ӳ�ѯ���ؿ�ֵ������
			//��ѯ���Ǿ���û�������ģ���Ա����Ϣ
				//����1���鵽�Ǿ����Ա��
						/*select*
						from emp
						where EMPNO in(select mgr from emp)*/
				//����2���鵽���Ǿ����Ա����Ϣ
						/*select*
						from emp
						where EMPNO not in(select mgr from em)*/
				//����3��2�����ˣ���ΪKING���ϼ�Ϊnull��Ҫ�����˿�������ע���˿շ�ʽ
						/*select*
						from emp
						where EMPNO not in(select mgr from emp
						where mgr is not null)*/

		//2.�ҵ�Ա�����й�����ߵ�ǰ�������õ�����֪ʶ�㣺rownum��ע����⣩
				//һ���Ȱ���������
						/*select EMPNO, ENAME, SAL
						from emp
						order by sal desc*/
				//����rownum ʹ��һ��rownum��oracle�ṩ��һ����Ź��ܣ��Ȳ�������һ�£����ְ���˳������
					/*	select rownum, EMPNO, ENAME, SAL
						from emp*/
				//������������ʹ��rownum�����Ƿ���rownum���û�а�������˳��
						/*select rownum, EMPNO, ENAME, SAL
						from emp
						order by sal desc*/
				//�ģ�����rownum��ԭ������ƣ����Ӳ�ѯʹ�䰴������˳����
							/*select rownum, EMPNO, ENAME, SAL
							from(select EMPNO, ENAME, SAL from emp order by sal desc)*/
				//�壺��ɰ�:��ȡ������ǰ��������rownum��Ž�ȡ�� rownum <= 3
							/*select rownum, EMPNO, ENAME, SAL
							from(select EMPNO, ENAME, SAL from emp order by sal desc)
							where  rownum <= 3*/
			//rownumԭ�����ڷ��������ɽ����ʱ�Ͱ�������˳�����ˣ����Ƿ��������ؽ������ʱ���Ѿ������
						//�������������򣬱�����ҵģ����������ǵ����������
						//���ң�rownum ֻ��ʹ�� <=�� ����ʹ�� >= ��Ϊ���ɵ�˳����1��1�е����ɵģ������3��ʼ�Ļ�����12 �����ɲ��� 3�Ժ��Ҳ���ɲ��ˣ���û�н����
						//����Ҫʹ���Ӳ�ѯ��������һ�����rownum����һ�����ź����Ľ��������ʱ�ϱ�ţ��ͳ���˳��
			//rownum�����ԣ�1.rownum���ڷ��������ؽ�����Ĺ������ԣ��ڷ��������ɽ����ʱ�Ͱ�������˳���ţ����������Ӱ��
						// 2.rownum ֻ��ʹ�� <=�� ����ʹ�� >= ����Ϊ����˳��ԭ�򣬵��µ�1�����ɲ��ˣ������Ҳ�޷�����
					
			//Top-N��rownumǣ����������Top-N���⣺��ҳ����
			//��Ϊrownum������ >= ��Ϊ��Ӱ�����ɽ���� ���������Ҫ��ҳ�أ����ǲ����ǰ�����������4~8��
				//˼·�������ѯ�����ڲ����򣬸��м��rownum���
				// �м����������������ɸѡʹ�ã������Ͳ��õ���rownum�����������ˣ���Ϊʹ�õ����Ѿ����ɵ��м������
						/*select r, EMPNO, ENAME, SAL			//�����
						from(select rownum r, EMPNO, ENAME, SAL	//�м��
							from(select EMPNO, ENAME, SAL		//���ڲ�
								from emp
								order by sal desc)
						where  rownum <= 8
							)
						where r >= 4*/
			//�����ҳ��˼·ԭ��
				//1.�ֳ� ��㡢�м�㡢�ڲ�
				//2.�ڲ������м��������������ʹ�ñ���ɸѡ��ҳ

		//3.�ҵ�Ա�����У��������ڲ���ƽ��н�ʵ�Ա����Ϣ
			//����һ������ѯ
					//����������õĸ����ŵ�ƽ��н�ʵ�����2���������ӣ�Ȼ����Ա����ȥ���
				//����1����������ŵ�ƽ�����ʣ����顢�麯��
						/*select DEPTNO, avg(sal) avgsal
						from emp
						group by DEPTNO*/
				//����2����ɰ棺����ѯ����ƽ�����ʵ�����2�������������Ա������е�ֵ����
							/*select e.EMPNO, e.ENAME, e.DEPTNO, e.SAL, d.avgsal
							from emp e, (select DEPTNO, avg(sal) avgsal
							from emp
							group by DEPTNO)	d	//��������������������2
							where e.DEPTNO = d.DEPTNO and e.sal > d.avgsal*/
			//������������Ӳ�ѯ��������ѯ�Ĳ������ݸ��Ӳ�ѯ
				//����1���Ȱ������߼�д����
						/*select EMPNO, ENAME, DEPTNO, SAL, (Ա�����ڲ��ŵ�ƽ������)avgsal
						from emp
						where sal > (Ա�����ڲ��ŵ�ƽ������)*/
				//����2����(Ա�����ڲ��ŵ�ƽ������)д����
						/*select avg(sal) avgsal from emp where DEPTNO = 10*/
				//����3����ɰ棺������Ӳ�ѯ�Ľṹ���1 2
						/*select e.EMPNO, e.ENAME, e.DEPTNO, e.SAL, (select avg(sal) from emp where DEPTNO = e.DEPTNO) avgsal
						from emp e
						where e.sal > (select avg(sal) from emp where DEPTNO = e.DEPTNO)*/
				//�ܽ᣺ͨ��������������ѯ��ֵ���ݸ��Ӳ�ѯ
	}
	if (42)
	{
		//�Ӳ�ѯ�����ѵ㣬�������������

		//�Ӳ�ѯ֪ʶ�ܹ�
		//1.�������д���
		//2.�Ӳ�ѯ�ģ�����Ҫ����
		//3.�Ӳ�ѯ������ѯ���Բ���ͬһ�ű�ֻҪ�Ӳ�ѯ���صĽ��������ѯ���þ���
		//4.����������ѯ��ʲô�ط���һ���Ӳ�ѯ
			/*select .....������ŵ����Ӳ�ѯ��
			from .....���Է��Ӳ�ѯ
			where.....���Է��Ӳ�ѯ
			group by.....����
			order by .....����
			having.....���Է��Ӳ�ѯ*/
		//5.�Ӳ�ѯ�ķ���
			/*--�����Ӳ�ѯֻ���õ��бȽϲ�����(= < >)
			--�����Ӳ�ѯֻ���ö��бȽϲ�����(in any all)
			�����Ӳ�ѯ������ѯ��ִ��˳������
				һ���Ӳ�ѯ ���Ӳ�ѯ�ѽ�����ظ�����ѯ...һ��
				����Ӳ�ѯ������ѯ��select���еĲ������ݸ��Ӳ�ѯ*/
		//6.�Ӳ�ѯ���ؿ�ֵ������
		//7.�Ӳ�ѯһ�㲻��order������Top-N������Ӳ�ѯ������order by
			//eg�����ʵ�ǰ��������ҳ����4~8���������ֶΣ�
		//8.�Ӳ�ѯ�����һ�㲻����Top-N������⣺��Ϊ�Ӳ�ѯ����ûʵ�����ð���


	}
	if (43)
	{
		//�ǻع��ܽ����Ƶ
			//��ʦ���������������ǵûعˣ�������ϰ���ܼ���ӳ��

		//���䣺����ѯ���Ӳ�ѯ
			//����ѯ�Ľṹ��������⣬��Ч��Ӧ�ø���һЩ
			//sql�Ľ���˳�򣺴�������
				//select ......
				//from tab1, tab2
				//where con1 > 111 and con2 < 222 and col3 = 'aaaa'....  //��һ�еĽ���˳���Ǵ�������ִ�н�����

		//�Ҽǲ�̫�壬�����־�����Ҫ�ģ�order by����ʱ������null��������nulls last //�Ὣnull�ŵ��������

	}
	//��������
	if (44)
	{
		//�������������������֪ʶ��

		
		//��ѯ������10 �� 20 ��Ա����Ϣ
			//����1��
				/*select* from emp where deptno in(10, 20);*/
			//����2������ or�ĳ� and ���ǽ���
				/*select* from emp where deptno = 10 or deptno = 20;*/
			//����3��union �����ķ���
				/*select* from emp where deptno = 10
				union
				select* from emp where deptno = 20;*/

		//ʹ�÷�ʽ�������unionһ��
			//union�����ز������
			//union all:�������в�������������ظ�����
			//intersect������
			//minus���

	}
	//���ݴ��� insert
	if (45)
	{
		//sql���Ե����ͣ�

		//DML���ԣ����ݿ�Ĳ������ԣ���ɾ�Ĳ�͹����ı������ݣ�
			//insert update delete select
		//DDL���ԣ����ݿⶨ������ �������ɶ��˼���Ժ�ὲ���İɣ�
		//DCL���ԣ��������ԣ���ʱ�������
			//roolback ����

		//oracle��˾����֤ OCA\OCP ����һ�𿼣��μ�oracle��ѵ��2W���ң������OCM�����ݿ����Ա��֤��ʦ����ʦ˵�������ȼ�˼�Ƶ�������֤��

		//insert �﷨��
			//insert into table () values ()

		//1.����в�������
		//2.����в��벿����
		//3.��ʽ�����ֵ��û��д�����У�Ĭ��Ϊ��ֵnull
		//4.��ʽ�����ֵ
		//5.sql�������Եĵ�ַ�� &�� &ȡ��ַ�������ֵ���൱��һ������
			//��ש--rollbackһ�λ��˶��
		//6.&ȡ��ַ�������κ�sql������ʹ�ã���select������Ҳ�ܹ�ʹ��
		//7.������������
		//8.insert�����Ҳ��ʹ���Ӳ�ѯ��DML�����Ҳ����select���


		//1 and 4��1.����в������� and 4.��ʽ�����ֵ
						/*insert into emp
						values(2258, 'Yy',3359, 'loser', sysdate, 0,null, 10)*/
				//���������У�����д����������ֵҪд����������ȱ
				
		//2 and 3��2.����в��벿���� 3.��ʽ�����ֵ��û��д�����У�Ĭ��Ϊ��ֵnull
						/*insert into emp(EMPNO, ENAME, JOB, HIREDATE, SAL)
						values(1211, 'yy', 'clearer', sysdate, 12)*/
		//5.sql�������Եĵ�ַ�� &�� &ȡ��ַ�������ֵ���൱��һ������
						/*insert into emp(EMPNO, ENAME, JOB, HIREDATE, SAL)
						values(&EMPNO, &ENAME, 'emm', sysdate, 10)*/
				//ע����������ʱ���ַ���Ҫ�ӵ����� ����
				//&��������������ԣ�������c���Ե�scanf
		//6.&ȡ��ַ�������κ�sql������ʹ�ã���select������Ҳ�ܹ�ʹ��
						/*select*
						from emp
						where sal > & sal*/
				//����˼���������ԣ���������sql�����ж���ʹ��
		//7.������������
				//1.�����±�
					//���������ݣ�ֻ�Ǹ��Ʊ�ͷ�����ܴ������� 1�ǲ�����2�ģ��������޷����������ˣ�ֻ�ܸ��Ʊ�ͷ
						/*create table emp10
						as select* from emp where 1 = 2*/
				//2.����и������� ������Ϊ10��Ա��
						/*insert into emp10
						select* from emp where deptno = 10*/


	}
	if (46)
	{
		//update �� delete �� truncate
		//�������ݣ�update 
		//ɾ������delete��truncate��ֻ��ɾ�����ݣ������ڣ�
		//ɾ����drop��ֱ�Ӵݻٱ�Ĵ��ڣ�

		//1.�����±�	���ձ�
						/*create table emp10
						as select* from emp where 1 = 2*/
		//�ձ��и��ƽ�����
			//����
					/*insert into emp10
					select* from emp where deptno = 10*/

		//update:�������ݣ�һ�οɸ��¶�����ݣ������ı������ݣ�
			//����	//update ���� set ���������� ɸѡ����
					/*update emp10 set sal = 800, deptno = 90 where ename = 'MILLER'*/
		//delete��ɾ������
			//����	ɾ����emp10��deptno = 90��Ա����Ϣ
					/*delete from emp10 where deptno = 90;*/
			//����	��ձ�ɾ����emp10���������ݣ����Ǳ����ڣ�ֻ��ɾ�����ݶ���
					/*delete from emp10*/
		//truncate����ձ�ɾ�����ݣ����ڣ�
			//����	//������ɾ��ָ�����ݣ�����ע�������Ǹ�table
					/*truncate table emp10*/
		
		//delete��truncate������
			//1.truncate����ձ���deleteҲ���ԣ�ע��truncate���table��delete���from
			//2.delete������ɾ�����ݣ�truncate�Ǵݻٱ�����ؽ������ؽ����ܣ�
			//3.delete��DML���ԣ�DML�������أ�����������ˣ��������س�������
			//truncate��DDL���ԣ�����������
			//4.delete����ɾ���������Ƭ��truncate���������Ƭ
			//���ƶ����ܣ�Ҫ�������ع��ܣ����뿪�����ƶ�����
			//5.delete�����ͷſռ䣬truncate��
			//6.delete���Իع���truncate������
			//7.oracle deleteЧ�ʸ��ߣ���mysql��truncateЧ�ʸ��ߣ�oracle��˾��delete���й��Ż���

		//����7��
			//����ɾ��һ��ͬ������5000�����ı�����һ��ɾ����ʱ��
				//�ļ��е�������
				//set timing off; ���رռ�ʱ���ܣ���Ȼ�����ļ�ʱÿ�����ͻ���ʾһ�䣬�ܳ���
				//set feedback off;�����Ǽ�������������һ����ʾ����ѡ��14�У����Ǹ���ʾ�رգ�
				//@C:\Users\��\Desktop\���ݿ������ҵĿμ�\��2��\sql.sql   (�����ļ�)
				//delete from testdelete �� truncate table testdelete
				//set timing on �����ɾ�����ݱ��ʱ�򣬴򿪼�¼ʱ�䣩
				//select count(*) from testdelete;���鿴���ɵ����ݱ��ж��������ݣ�
				//drop table testdelete purge ���ݻٱ������ɾ����Ĵ��ڣ�
				 
			//���ԣ�
					/*SQL > delete from TESTDELETE;
					����ʱ��:  00 : 00 : 00.02*/
			//���ԣ�����֪��Ϊʲô��Ȼ����ʦ�Ĳ�һ���������޸��ˣ�
					/*SQL > truncate table testdelete;
					����ʱ��:  00 : 00 : 00.01*/	
	}
	if (47 && 48)
	{
		//���ݵ���ɾ�Ĳ�ѧ���ˣ�����������
			//ע�⣺ǰһ��������������ֵı��Ҳ���ɾ�����л�����취���������ˣ���//�����͹����������վ�Ŀγ�������ǻ���վ�����⣩
			
		//1.������������mysql infonix db2 sqserver �ж�����Ĵ���ʽ�ǲ�һ���ģ���������Ļ�����������ͨ�ģ�
			//���һ������DML���ļ��ϣ�����֮ǰ����ש�������˳��ִ�е�insert���޸ģ�ͨ�����ˣ�4����������
				//��Ϊ���������������һ�����Ȼ�����������ש���Ͱ�������˵���
			//�ص㣺Ҫô���ɹ�Ҫô��ʧ�ܣ����Ƕ�����Ĳ�������Щ��䲻��ֵֻ�ɹ�1�����ǰ�����Ϊ��λ�ĳɹ���ʧ��
			//���ԣ�ԭ���ԡ�һ���ԡ������ԡ��־���
			//����ĸ����ԣ�����ͻ���ͬʱ�������ݿ�ʱ��Ҫ�������ǵĲ����������⣺������ö����������ظ������ٶȣ���ʦ������
				//ʹ�ò�ͬ�ĸ��ü������
		//2.oracle�е�����
			//�������ʼ��־��DML���ԣ�oracle����Ĭ�ϴ򿪵ģ�mysql������Ĭ�ϲ��򿪣�mysqlдһ��insert ���ύһ��
			//����Ľ�����־
					//�ύ������ʽ�ύ����ʽ�ύ
						//��ʾ�ύ��commit��
						//��ʽ�ύ����1��ִ��DDL���ԣ���create������
								//create table��һ����ʽ���ύ���ܣ����ύ֮ǰû���ύ��DML���ԣ����պܸߣ���Ϊ��һ�ύ���Լ���֪����Ȼ��ͻ����BUG��������Ҫ�ر�ע�⣩
							//��2�������˳�������ʽ�ύ
					//�ع�����ʽ��rollback���ύ���ʹ����ʧЧ
						// ��ʽ�����硢�������˳����������ʽ�ع����������ϻ���֮ǰд�������ڵ�����ʧЧ�ˣ��Զ��ع�
		//3.�������
			//����㣺savepoint   �趨һ������㣬�൱�ڰ������ҳ��Ȼ�������rollback to savepoint �����˵������
		//4.oracle���ݵĸ��뼶�𣨽�֧��2 �� 4�������Լ��趨�ļ����½ڿ��У�
			//1.��δ�ύ����
			//2.�����ύ����
			//3.���ظ�������֤�ظ������ƻ����ݣ�
			//4.���л�

			
		//����2.
			//ʵ���ն˸�����ʽ�ύ�� �������ն˿��ƽ���
					//1.��һ���ն��ȴ���һ����Ȼ��ڶ����ն˲������ݣ��ٲ������ݣ�Ȼ���õ�һ���ն�select��������
							//�ն�1��������  create table T1(tib number, tname varchar2(20));
							//�ն�2��insert into t1 values(1, '1111');
							//�ն�2��insert into t1 values(2, '2222');
							//�ն�1��select * from t1;
						//�����ն�1����������������ݣ�ԭ��������û���ύ
					//2.�ն�2��ʽ�ύ���commit; Ȼ��������ն�1�в鿴���²����������
			//ʵ����ʽ�ύ��
					//�ն�2�²������ݸ���1���ٲ���һ����Ȼ���ն�2����һ����
					//�ն�1�о��ܼ������²�����������µı��ˣ��������ʽ�ύ��ǧ����⣬�������оͺ��Ͽ���Ҫ��

		//3.������ƣ���������
			//����������-����-����-�趨�����a-����-����-�����b-���˵�a�����ǻ���û���ύ��ֻ��commit����ʽ�ύ���У���ʽ�ύ��Ҫ�ã�
			/*SQL > insert into t1 values(5, '5555');	//����
			SQL > insert into t1 values(6, '6666')
			SQL > savepoint a;							//�趨�����a
			SQL > insert into t1 values(7, '7777');
			SQL > insert into t1 values(8, '8888');
			SQL > savepoint b;							//�趨�����b
			SQL > select* from t1
			SQL > rollback to savepoint a;				//���˵�a
			SQL > select* from t1;						//����a��b�Ĳ����ʧЧ�ˣ�����ʱ����û���ύ���a֮ǰ����仹��������
			SQL > commit;*/								//commit �ύ ��Ҫ����ʽ�ύ
	}	
	if (49)
	{
		//4.oracle���ݵĸ��뼶�𣨽�֧��2 �� 4�������Լ��趨�ļ����½ڿ��У�
			//1.��δ�ύ����	����Ӣ�ĵģ��Լ��Ѱɣ�
			//2.�����ύ����
			//3.���ظ�������֤�ظ������ƻ����ݣ�
			//4.���л�
		//oracle�����Լ��趨��һ��ר���ļ��𣬽���2 4֮��ļ����Լ����˿���
		//oracle����Ĭ��Ϊ 2
		//mysql֧��1234�ļ���Ĭ��Ϊ2�ļ���
			
		//����ȡ���뼶����ֵ����⣺���ٶȣ���ʦ������˵�����ò��ϣ�
			//���
			//�����ظ������ظ������¶��������ݳ���
			//�ö�
	}
	//�����͹����
	if (50)
	{
		//�����͹�����������ɾ�Ĳ�

		//���������ݶ��󣺱���ͼ�����С�������ͬ���
		//������������������ĸ��ͷ

		//1.������/ɾ����/�޸ı�	
			//����һ���û�ʱ��Ҫ�����û���û��create tableȨ�� �� ��Ĵ洢�ռ䣨��ռ䣩
		//2.���û�֮������ҪȨ��
		//3.oracle����������
			//rowid :�е�ַ��α�� ֮ǰѧ��rownum���
			//rowid�൱��һ��ָ�룬��¼��ռ��������еĵ�ַ�������õľ��ǵ�ַ��������
		//4.�������ͬʱ��copy����
		//5.���е���ɾ�Ĳ飺�����Ҫ���䣬����Ҳ�ǲ�ס��ô�������ʦ���ṩ�����ȫ���ɲ鷭��


		//������hiredate date default sysdate ��ϵͳʱ���Զ���䣬����Ҫ��������������ʱ���ʱ��
						/*create table t3
						(tid number,
						tname varchar2(20),
						hiredate date default sysdate)*/
						//��������
						/*SQL > insert into t3(tid, tname) values(1, '11111');*/	
						//�鿴t3 ����������ӵ�ʱ��
						/*select* from t3;*/
		//rowid :�е�ַ ��һ�ж�Ӧ�ĵ�ַ
						/*SQL > select rowid, tid, tname from t3;*/

		//�������ͬʱ��copy����
						/*create table emp20
						as 
						select* from emp where deptno = 20;*/

		//5.���е���ɾ�Ĳ飺�����Ҫ���䣨��ʦ���ṩ�����ȫ���ɲ鷭��
			//����һ��
						/*alter table t3 add tname2 varchar2(40)*/
			//�޸Ķ�Ӧ�еĳ���
						/*alter table t3 modify tname2 varchar2(20)*/
			//������������
						/*alter table t3 rename column tname2 to mytname2*/
			//ɾ����
						/*alter table t3 drop column  mytname2*/
	}	
	if (51)
	{
		//�����͹����������վ

		//����ɾ��һ�ű��������ŵ�����վ���ͺ�windows����
			//��������Ա�û�û�л���վ��ֻ����ͨ�û���
		//�鿴����վ show recyclebin
		//��ջ���վ purge recyclebin(֮ǰɾ��ʱ�ӵĹؼ���)
		//����ɾ��һ�ű�����������վɾ��һ����
			//dopr table ..... purge
		//��ԭ��:���ص�����
		//�鿴����վ�еı�
			//select *from "...."; ע��Ҫ�û���վ�еı������ RECYCLEBIN NAME�����е�����

		//�鿴����վ
					/*show recyclebin;*/
		//��ջ���վ
					/*purge recyclebin;*/
		//����ɾ��һ�ű�����������վɾ��һ����
					/*SQL > drop table T3 purge;*/
		//�鿴����վ�еı�֮ǰtab������������������ֵı���ǻ���վ�ı������Ѿ�ɾ���ˣ���ջ���վ���ɣ�
					/*SQL > select* from "BIN$fHYHzzhoTgWzDxEX0jQ4dw==$0";*/

	}
	//�������̨�Ļ���ʹ�ú��û�Ȩ�ޣ�ͼ�ν��棩
	if(52)
	{
		//Enterprise Manager Console ��10g��ͼ�ν��������

		//10g��ҵ���������̨��ʹ��
			//��¼
					//127.0.0.1 orcl ���ص�¼
			//����
					//��ṹ
					//������
					//��������
			//�洢
					//��ռ�
			//��ȫ��
					//�û���ɫ

		//oracle�����û��Ľ������������������ʾ
			//����
			//ɾ��
		
		//oracle�û�������Ԥ����õĽ�ɫ������ʹ��
			//��ͨ�û�һ��ӵ��connect �� resource��ɫ��ֻ��ӵ��connect��ɫ���ܵ�½���ݿ⣩
			//��resource�����һ���û����Ͳ����ٸ�������ռ���
		//��Ҫ��windows�ļ���ɾ���κα�����ݻ��ļ��������д����ľ���������ɾ������������޷��������ݿ�


				//�û�		//��ɫ		//Ȩ��

		//Ȩ�ޣ�������һ����Դ����ĸ��¡��޸ġ���������Դ�����������ݿ�Ķ���

		//��ɫ����Ȩ�޵ĳ��󼯺�

		//��ɫ������û�user������Ȩ��ͨ����ɫ�����û�


		//����Ա����ɫ�У��������޸ı��Ȩ��
		//�����ľ����ɫ�У�ɾ�����Ȩ��

		//����Ϊ������Ա�����ϼ��������ɫҲ�ܵ���Ա����ɫ��Ȩ�ޣ�����̳���Ա����ɫ��Ȩ��
		//�ٰѽ�ɫ������û�user
		
		//�����oracle�������úõĵط���Ҳ����oracle�����Ĺ�������

		
		//��ʦ�ľ��飺��˾������������Ϊ�����������������Ҫ�ӱ���Ĺ���������
	}
	if (53)
	{
		//ͼ�λ����棬��ʾ����ʦ���İ���
		//�Լ��о�����ôʵ�ֵ�

		//��ʦ˵�Ժ�Ҫ�õ��ͱ��������������

		//�����а�װ·��Ҫ��

		//�����ʾ��ɾ��������ע�ⲻҪ��������rm .... �����޷��������ݿ�
		//��ͼ�λ�����ɾ��

	}
	if (54)
	{
		//��ʦ������ҵ
		//���ǰ������İ�������һ����ɾ��
		//Ȼ����һЩ��ϰ����һ��
		//���İ�����û�ҵ��μ�����ʱ��͸�����Ƶ����һ�������İɣ��϶��˷�һ������ʱ�䣩
	}
	if (55)
	{
		//���ÿ���ǿ��ѵ��

		//�����в��ŵ�ƽ������ע���˿���������Ϊ�����в��ţ�
					/*select deptno, avg(nvl(comm, 0)) ƽ������ 
					from emp*/

		//������ŵ�ƽ������
						/*select deptno, avg(sal) ƽ������
						from emp
						group by deptno*/

		//������Ź��ֵ�ƽ������
					/*	select deptno, job, avg(sal) ƽ������
						from emp
						group by deptno, job*/
		//�������ÿ������ƽ�����ʴ���2000��Ա��
						/*select deptno, job, avg(sal)
						from emp
						group by deptno, job
						having avg(sal) > 2000*/
		//��10�Ų��ŵ�ƽ��н�ʣ�2��д��
						/*select deptno, avg(sal)
						from emp
						where deptno = 10
						group by deptno*/

						/*select deptno, avg(sal)
						from emp
						group by deptno
						having deptno = 10*/
		//����һ��ѧ����
						/*create table student
						(
						tid number,
						sname varchar2(20),
						id number,
						age number
						)*/
		//���в�������
					/*insert into student values(1, 'Yy', 2258, 25)*/

		//��ʽ����4���˵Ĳ���
						/*select deptno
						from emp
						group by deptno
						having count(deptno) >= 4*/

		//��ʽԱ���š���������н����н�������롢��������
						/*select e.EMPNO, e.ENAME, e.SAL, e.SAL * 12 year, (e.SAL * 12 + nvl(e.comm, 0)) good, d.dname
						from emp e, dept d
						where e.deptno = d.deptno*/
		//����һ����������ı�ͬʱװ���±���
						/*create table aaa
						as(
						select e.EMPNO, e.ENAME, e.SAL, e.SAL * 12 year, (e.SAL * 12 + nvl(e.comm, 0)) good, d.dname
						from emp e, dept d
						where e.deptno = d.deptno)*/
					
	}
	if (56)
	{
		//֪ʶ��عˣ�����һ�ε���ϰ��+֮ǰ��4�������ϰ����Ϥ�˾�ѧ�ò����
		//��4�����ǣ���ѯ�Ǿ����Ա����Ϣ���Ӳ�ѯ��
					//����Ӳ�ѯ�����ұ����ڲ���ƽ��н�ʸߵ�Ա����Ϣ
					//top-N���⣺rownum�Ļ�����ԭ��Ȼ��˫��ʹ�䰴˳����
					//��ҳ���⣬����һ��������ѭ�����ڲ������в���������ɸѡ
	}  
	//���ݿ����
	if (57 && 58)
	{
		//57 58��ͬһ����Ƶ��Ӧ�����ϴ�ʱ����ˣ�Լ���Ļ�������û��������ʱ����Լ����˿���
		//���ݿ����_Լ������

		//дԼ�������պ�«��ư������д�ͺ���
		//��������˼���������Ա�����ݵõ�һ����Χ��������������ݲ���Խ��Լ������
			
		/*Լ����Ա���ԣ�
			1.not null �ǿ�Լ��   ���˵����� ����Ϊ��
			2.Unique		Ψһ��Լ��   �� �绰���� �����ַ
			3.Primary Key	����Լ��(����  �ǿ���Ψһ  ����˼) ʵ��������ֱ�ӽ�����һ������
			4.Foreign Key	���Լ���� �ӱ�x�������������x��(������) ��ô�ӱ�x��������x�����, ע��!!:�ӱ��ӱ�����Լ�����������������
			5.check ���*/

		//�ô����������ӣ�constraint������Լ��		teacher_tid_PK��Լ����ʾ��Υ����Լ�������ʾ��	primary key��Լ������
						/*create table teacher
						(
						tid number constraint teacher_tid_PK primary key,
						sname varchar2(20) constraint teacher_sname_nonull not null,
						email varchar2(64) constraint  teacher_email_nonull not null,
						sex number constraint teacher_sex_check check(sex in(0, 1)),
						age number constraint teacher_age_check check(age > 20)
						)*/
		//����һ�����ݲ�����Լ���ģ�������ʾΥ��Լ�������һ���ʾ Լ����ʾ�����������Զ���д��Լ����ʾ��
						/*SQL > insert into teacher values(2258, 'Yy', 'host.com', 1, 18);
						insert into teacher values(2258, 'Yy', 'host.com', 1, 18)
						*
						�� 1 �г��ִ���:
						ORA - 02290 : Υ�����Լ������(SCOTT.TEACHER_AGE_CHECK)*/
		//��������Լ������������
						/*SQL > insert into teacher values(2258, 'Yy', 'host.com', 1, 26);*/
	}
	if (59)
	{
		//���ݿ���󡪡�����������һ���е�д�����������
						/*create table teacher2
						(
						sid number constraint teacher2_sid_pk primary key,
						sname varchar2(20) constraint teacher2_sname_notnull not null,
						email varchar2(64) constraint teacher2_email_notnull not null,

						sex number constraint teacher2_sex_min_check check(sex in(0, 1)),
						age number constraint teacher2_age check(age > 20),
						deptno number constraint teacher2_pk references dept(deptno) ON DELETE CASCADE
						)*/

			//references dept(deptno)���������������dept��deptno�뱾���deptno��������
			//����ɾ����ON DELETE CASCADE��������ɾ��ʱ�������ı���Ĵ���Ҳɾ��
			//�������գ�ON DELETE SET NULL������ɾ��ʱ�����и���

			//������ҵ��һ�㲻�ü���ɾ�����߼�������
	}
	if (60)
	{
		//���ݿ���󡪡���ͼ

		//��ͼ���򻯲�ѯ  ���þ��Ǽ򻯼���
			//���Ǵ洢������select���

		//������ͨ����ͼ���޸ı����Ĺ�����Ҫ�Ǽ򻯲�ѯ��
		//with check option:�������ݵ��޶���
		//with read only:����ͨ����ͼ�޸ı���
		//�޸���ͼ��or replace
		//��ͼ�У����ܳ����麯����delete��group by,rownum��Щ
				

			//��������Ҫ��ʽԱ���š���������н����н�������롢��������
					/*select e.EMPNO, e.ENAME, e.SAL, e.SAL * 12 year, (e.SAL * 12 + nvl(e.comm, 0)) good, d.dname
					from emp e, dept d
					where e.deptno = d.deptno*/
			//��ÿ�β�ѯ��Ҫ��һ��������룬�ͺ��鷳
			//��ʱ��ͼ�����þ����ˣ����Ƿ���û��Ȩ��
					/*create view myview1
					as
					(
					select e.EMPNO, e.ENAME, e.SAL, e.SAL * 12 year, (e.SAL * 12 + nvl(e.comm, 0)) good, d.dname
					from emp e, dept d
					where e.deptno = d.deptno
					)*/
			//Ȩ����Ҫ��¼�����û�
					/*C:\Users\�� > sqlplus / nolog
					SQL > connect / as sysdba*/
			//Ȼ����Ȩ��scott�û������������ϼ�Ҫ��һЩ�������ϲ���͸¶�����
					/*SQL > grant create view to scott;*/

			//scott��ִ�д�����ͼ���Ϳ�����
					/*create view myview1
					as ( select e.EMPNO, e.ENAME, e.SAL, e.SAL * 12 year, (e.SAL * 12 + nvl(e.comm, 0)) good, d.dname
					from emp e, dept d
					where e.deptno = d.deptno)*/
			//�����Ժ�����Ҫ��ѯԱ���š���������н����н�������롢�������֣�ֱ������
					/*SQL > select* from myview1;*/
			//����ļ��˴�����������ÿ�ζ�дһ���
			//Ҳ��������ͼ�Ĺ��ܣ��򻯲�ѯ


			//with check option:�������ݵ��޶������£���Ϊselect����where deptno = 10��������ͼֻ�ܲ���deptno = 10��Ա��
				/*create view myview1
				as(select EMPNO, ENAME, SAL, SAL * 12 year, (SAL * 12 + nvl(comm, 0)) good
				from emp
				where deptno = 10)*/

			//�޸���ͼ��or replace
				/*create or replace view myview1
				as(select EMPNO, ENAME, SAL, SAL * 12 year, (SAL * 12 + nvl(comm, 0)) good
				from emp
				where deptno = 10)*/
	}
	if (61)
	{
		//���У�����ʦ��һ�̽��ĺܿ�ǳ�ԣ�˵��֪����ô�þͺ��ˣ����������ȷ���ǵ������ѣ��Ҽǵû���һЩ�ؼ���ûд���ʼǣ���ʦһ��������
		
		//�Զ��ṩΨһ����ֵ
		//�������
		//����Ҫ�����ṩ����ֵ
		//������ֵװ���ڴ����߷���Ч��

		//����Ҫ�����ṩ����ֵ ������
		//����һ������
					//create sequence myseq
				//��1�� 2�� 3�� 4�� ....20��Ĭ��һ��ʼΪ20������ÿ������20��������̬����
				//����1�����Ը�һ�����ṩ����ֵ��Ȼ������2����һ�����ṩ����ֵ
				//��oracle��֤��Щ������ֵ�����ظ�����Ψһ��

		//1.��������
					//create sequence myseq
		//2.���л�����������ڴ����߷���Ч��
					//��1�� 2�� 3�� 4�� ....20��Ĭ��һ��ʼΪ20������ÿ������20��������̬����

		//3.���е��������ԣ����е�Ӧ�ã�����֪����ô�þͺ��ˣ�
				// -������������ nextval ��һ��ֵ,currval ��ǰֵ
			//1. nextval ��ָ����һ������ֵ���ʼĬ�ϴ�������ǰ�˿�ʼ����û���κ�����ֵ�ģ�
			//2. currval �����ص�ǰ��������ֵ��λ�ã���ΪĬ���ʼû��ָ���κ�����ֵ������Ҫ�Ƚ���nextval�����ʹ��currval
				//����һ�������У�������ʹ��nextval  �� ���г�ʼ��  �ſ��� �鿴 ����

		//4.���е�ɾ��
					//dorp sequence myseq;
		//5.������Ҫע������⣺
				//�������һ�����У�������в�����
				//�ع�����������в�����
				//ϵͳ�쳣���ڴ����ж�ʧ��������в�����


			//������
					/*	create table tableA
						(
						tid number,
						tname varchar2(40)
						)*/
			//��������ȡ����ֵ���б������ֵ����nextvalȡ
					/*SQL > insert into tableA values(myseq.nextval, 'aa');*/

		//�´���һ�����У�Ȼ����currval��ȡ��ǰָ�������ֵ
			//SQL> create sequence myseq1;
			//SQL > select myseq1.currval from dual;
			//�����޷���ѯ����Ϊ���潲���ˣ��ʼ��ָ��������ǰ�棬�Ǹ�λ��û���κ�����ֵ
			//Ҫ��nextval ������1������ֵ��������currval
			//SQL > select myseq1.nextval from dual;
	}
	if (62)
	{
		//����

		//�������൱�����Ŀ¼��������ݼ����ٶȡ����Ч�ʣ���ͼ���������Ч�ʣ�
			//һ�ֶ����ڱ��ģʽ����, ���Դ洢�����ͬ�Ĵ��̻��ռ���
			//������ɾ������, ����Ա����Ӱ��, ��Ӱ���ֻ�ǲ�ѯ���ٶ�
			//����һ������, Oracle ����ϵͳ���������Զ�ά��, ������ Oracle ����ϵͳ������ʱʹ������.�û������ڲ�ѯ�����ָ��ʹ���ĸ�����

		//�����ͱ��ǵ�����ŵ�
		//������dba������Ա��ʹ��������͸���ģ�ֻҪ��������

		//ʲôʱ��ʹ��������
			//�������ݺܶ�ܶ࣬����Ҫ����ĳһ�кܶ��ʱ�����ü���
			//��������ʱ�����Բ��ã���ʦ˵����100������ݣ�����7��㶨�����ü����Ļ�70��

		//1.�����Ļ���ԭ��
					//���¼						������
					//10						10
					//20						10
					//30						10
					//10						20
					//10						20
					//30						30
					//20						30
				//����˵������ÿһ����Ա�������������Ƿֺ���ŵ�һ��ģ�
				//�����Ǹ���ָ�������ҵ���Ա�ģ�rowid�ܲ鿴���г�Ա�ĵ�ַ���õ�ַҲ������ٶ�
				//select rowid, e.* from emp e	���ܲ鿴ÿһ�еĵ�ַ��

		//2.����������ɾ������
			//��1�д������� 
				//SQL > create index myindex on emp(deptno);
			//��2�д�������
				//SQL > create index myindex1 on emp(deptno, job);
			//ɾ������
					/*SQL > drop index myindex;
					SQL > drop index myindex1;*/
		//3.����˵��
			//�Զ�����������������ֵҲ��������ΨһԼ��Ҳ������
			//����ֵ��ΨһԼ����ϵͳ�Զ�����������
	}
	if (63)
	{
		//ͬ��� �����Ǳ���
		//��ʦ�ֽ������Ľű���������Ӧ��ҲҪȥ��һ�ݰ�����ѧϰ

		//ͬ��ʵĴ�����
			//create synonym syn11 for emp;
			//����ûȨ�ޣ��ó����û���Ȩ��
			//grant create synonym to scott;
			//����Ƿ���ͨ��ͬ��ʽ��в�ѯ
			//select *from syn11;


		//����ͬ��ʵ��ŵ�	
			/*�����ڱ��û��� ���� ����û����еı�,
			�������ɱ��û��Լ��ı�, �����ѯ����
			�ô��ǼȲ�Ӱ������ݵĲ�����ͬʱ���ܱ�֤���ݵİ�ȫ��*/
	}
	//procǶ��ʽsql���
	if (64)
	{
		//�����ǻ����γ̽���
			//�����˽�������ѧʲô

		//proc�������Ƕ��ʽsql��䣬���ǽ�sql���д��C/C++��
		//�󲿷����ݿ���oracle��֧��
		//����mysql��֧��
	}
	//�������������
	if (65)
	{
		//CRT��¼�������Ƶ�½����
		//1.CRT���������޸�linux�������������ļ�����root�û���¼��cat /etc/sysconfig/il8n	û�����·���Ļ���cat /etc/locale.conf һ���� 
					//echo $LANG	//zh_CH.UTF-8 ��˼��UTF8�洢�����ǰ���zh�����ģ���ʾ������CRTû��ʾ����˵����CRT�����⣬����CRT���뷽ʽ����UTF8����
					//source /etc/profile    �������У�
		/*
		*	2.�����ر�oracle���ݿ⣺
		*		su - oracle		//��¼orcle�û�
		*		sqlplus /nolog	//��ʼ��¼oracle
		*		SQL> startup	//�������ݿ�
		*		SQL> connect /as sysdba	//��½�����û�
		*		SQL> shutdown immediate	//�ر����ݿ�		ֻ���ڳ����û����ܹر�
		* 
		*	3.�����͹رռ�������
		*	��¡�Ự��Ȼ���������Ҫ��SQL����п���������������SQL����
		*		su - oracle		//��¼orcle�û�
		*		lsnrctl start	//��������
		*		lsnrctl status	//�鿴����
		*		lsnrctl stop	//�رռ���
		*/
	}
	if (66)
	{
		/*
		*	��ЩͼƬ�ұ��浽oracle������μ�����
		* 
		*	4.linux�µ�sqlplus��ôʹ��edit�༭����
		*		1 ��sqlplus�� ���� ed
		*		2 ����һ���Ự�У���afiedt.buf�ļ����޸� ���� �˳�
		*		3 �ص�sqlplus�����У����� q
		*		4 ��sqlplus���������� /
		*	���¾���ʵ�٣�
		* 
		*	�������Ի����Ͻڿο�¡�ģ���¼��ͨ�û����ݿ�
		*		su - oracle
		*		sqlplus scott/tiger
		*		SQL> select *from emp;
		*		SQL> set linesize 140	//�޸��м��֮��ģ������䶼��
		*		SQL> set pagesize 140
		*		SQL> select *from emp;
		* 
		*		SQL����в�������ed���޸�����д������
		*		�����ǣ��ٿ�¡һ���Ự��  
		*		Ȼ����ǰһ���Ự�У���SQL���������ed����ʱ����orcle�û��ļ���������һ���ļ���afiedt.buf
		*		su - oracle
		*		ls
		*		Desktop  Documents  Downloads  Music  Pictures  Public  Templates  Videos  afiedt.buf  oradiag_oracle
		*		vi afiedt.buf	//���������޸�������SQL��������������
		*		
		*		�޸���ص�SQL������q �س�����:
		*		SQL> ed
		*		Wrote file afiedt.buf 
		*		27 
		*		q
		*		  1* select *from emp 
		*		SQL> /		Ȼ������ ��/�� ����ִ����
		* 
		*	5.��UltraEdit��¼�������oracle��Ȼ����ܿ��ӻ��ҵ�д��.c�ļ������༭����ˣ����൱����windows���һ��
		*		����һ���ļ���day_03 Ȼ�󴴽�һ��.c�ļ�
		*		ͨ��UE��������ӻ���̣��������vim��̵��鷳
		*		ͨ�����ַ�ʽ�������԰�ѧϰ�ʼǴ浽���棬�ܷ��㣬����������������man gcc �õ��Ķ������ܴ浽�ļ��У�����鿴��
		*		mkdir day_03
		*		cd day_03/
		*		touch dm01_hello.c				//Ȼ�����UE��������ļ���д���룬Ȼ�󱣴�
		*		gcc dm01_hello.c -o dm01_hello	//��.c�ļ���ɿ�ִ���ļ�
		*		./dm01_hello					//���п�ִ���ļ�
		*		
		* 
		*		
		*/
	}
	if (67)
	{
		/*
		*	�鿴�û��µĽ���
		*		ps -u oracle
		*	�޸Ŀ�ִ���ļ���ִ�з�ʽ��ֱ�����ִ���ļ����ּ�������
		*		vi .bash_profile
		*			�� ��PATH-$PATH:$HOME/bin:$ORACLE_HOME/lib 
		*			��ӷ��ű�Ϊ��PATH-$PATH:.:$HOME/bin:$ORACLE_HOME/lib 
		*			�����˳�
		*		source .bash_profile	//��������ʹ������Ч��Ȼ����������ִ���ļ����־��������� �����./
		*		
		*	UEʹ�ü��ɣ�
		*		�� �˵�����-�߼�-���ã��������� �У����ҵ����磺  �Զ���ɣ��Զ���ȫ��  Tab���������٣����Զ�������һ����  �ȵ��޸�
		*/
	}
	//proc��������
	if (68)
	{
		/*
		*	proc�ĸ��
		*		��һ����C/C++���������ݿ⣬������C++�����Ƕ��SQL������ʽ
		*		����C++����java�Ľ�jdbc �����������Եĺܶ෽ʽ���������ݿ⣬proc��������һ��
		*		֮ǰѧ��sqlplusҲ�Ƿ������ݿ��һ�ַ�ʽ��pro*x x��ָӦ�õ����� c����c/c++
		* 
		*	�ٷ��ĵ���
		*		��ʦ˵����������oracle���鼮����������ֱ��ٷ��ĵ�������
		*		֮ǰѧ��֪ʶ���ڹ����ĵ����У����Ի�鿴�ٷ��ĵ��Ǻܸ�Ч����
		*		�˴ε�proc�γ�Ҳ�ǰ��չٷ��ĵ���֪ʶ�ܹ���ѧ��
		*		
		*/
	}
	//proc����ʹ��
	if (69)
	{
		/*
		*	proc����Ҫ֪ʶ��
		*		һ�㣬���Ǳ�д.c�ļ���Ȼ��ͨ��gcc��g++���.o�ļ���Ȼ���ٱ��.exe��ִ���ļ�
		*		gcc�ܱ����⵽.c�ļ����﷨����ȣ����ǻ�����proc���﷨��������c++�ķ��룬���޷������
		*		�Ǵ�ʱ��һ��ʼд�õ��﷨��.pc�ļ���������proc���﷨
		*		��proc���������ã�����proc�����þ��ǽ�.pc�ļ�������.c�ļ�������gcc����ʶ�������
		*		.pcͨ��procԤ���������.c�ļ�
		* 
		*		ORACLE_HOME��Щ������������ .bash_profile�ﶨ��ģ�linux��
		*			�����ҵ�procԤ������������Ŀ¼����proc.exe
		*		ͬ��windowsҲ��proc��Ŀ¼���Լ��ң�
		*			cd $ORACLE_HOME
		*			cd bin/
		*			���յ�·��Ϊ��
		*			pwd
		*			/data/oracle/product/11.2.0/db_1/bin
		*		��ȡproc���﷨��ֱ������proc���ɣ�windows������Ҳһ����
		* 
		*	С֪ʶ����ݲ�������
		*		!gcc ��ִ����һ��������﷨
		* 
		*/
	}
	if (70)
	{
		/*
		*	�Ż�UE����.pc����
		*		1.��ԭ����.c�ļ���mv���.pc������UE��.pc
		*		2.UE����ͼ-�����򣨲鿴��ʽ��-ѡ��C++�����ܽ���ɫ��ΪC++�ķ�񣬷���ۿ�
		*	
		*	�޸�linux���ã����proc����.pc���������
		*		1.�鿴gcc�汾 gcc -v
		*		2.��·��/data/oracle/product/11.2.0/db_1/precomp/admin �ҵ�pcscfg.cfg �ļ���·�����·����������֣�
		*		3.��/usr/lib/gcc/x86_64-redhat-linux/4.1.1/include �޸�Ϊ /usr/lib/gcc/x86_64-redhat-linux/4.8.5/include ���޸�Ϊ���ǰ�װ��gcc�汾
		*		4.�ص�day_03��Ŀ¼����proc �Ǹ�.pc�ļ����������������.c�ļ���
		* 
		*		���벿�����£�
		*		proc dm01_hello.pc	//������ִ���
		*		gcc -v				//���gcc�汾Ϊ4.8.5
		*		cd $ORACLE_HOME
		*		cd precomp
		*		cd admin			//�����ļ��У��ҵ�pcscfg.cfg
		*		vi pcscfg.cfg		//�޸�gcc�İ汾Ϊ���ǰ�װ�İ汾
		*		cd /home/oracle/day_03
		*		proc dm01_hello.pc	//�ٴα���ͳɹ���.pc�����.c�ļ���
		*	
		*	�����ɵ�.c�ļ������ֱ�����д��ԭ������˺ܶ���룬�����proc�Ĺ���������ʦ˵�����Ǻܸ��Ӱɣ���
		*/
	}
	//Hello World
	if (71)
	{
		/*
		* �������Ҫ������д�õ�Դ�룬˼���Ͳ�������
		* 
		* ��ӡһ��hello world�����̣���Ƕ��ʽ��䣺
		*	1.��һ�α��룺	Ҫ���ͷ�ļ�#include "sqlca.h"
		*		proc dm01_hello.pc
		*	2.�ڶ��α��룺	Ҫ����ͷ�ļ��붯̬��  
		*		gcc dm01_hello.c -o dm01_hello -I/data/oracle/product/11.2.0/db_1/precomp/public -L/data/oracle/product/11.2.0/db_1/lib -lclntsh
		*	3.���п�ִ���ļ�
		*	
		* 
		* .pc�ļ���Ҫ��ӻ���Ҫд�Ĵ��룺
		*	�����������������		����������Ƕ��ʽ����м�ķ�Χ�ڣ������������
		*		EXEC SQL BEGIN DECLARE SECTION;
		*			char* serversid = "scott/tiger@orcl";
		*		EXEC SQL END DECLARE SECTION;
		* 
		*	C������ʹ����������
		*		printf("serversid: %s \n", serversid);
		*	����oracle ��Ƕ��ʽSQL����� ʹ����������  ע�⣬�� �� �� ��Ҫ����ʹ�����������ķ���
		*		EXEC SQL connect : serversid;
		* 
		*	ʹ��.pc�����.cʱ���Զ����ɵĴ����ж���õı���
		*		int ret = 0;
		*		if(0 != sqlca.sqlcode)
		*		{						��ȡ������ı���,����oracleʧ�ܵĻ����ͻ�������������
		*			ret = sqlca.sqlcode;
		*			printf("connect error: %d \n", ret);
		*			return ret;
		*		}
		*		printf("connect ok\n");	�ɹ��Ļ��ʹ�ӡok
		*/
	}
	if (72)
	{
		/*
		* ֪ʶ�㣺
		*		1.Ҫ֪��proc��������̣���һ������.pc �ڶ��α�������.c ˳������ͷ�ļ�����̬��
		*		2.֪�����ͷ�ļ�sqlca.h
		*		3.���ҵ���̬����ͷ�ļ���·����ע���п�ݷ�����Ҳ֪����̬�����ʽ�����ַ��� .so����	�����е��ʱ��˵ʵ����
		*			lclncsh����֪����Ҳ���Ƕ�̬���Ӣ�ģ� libclntsh(��̬�������)	
		*		4.֪������ͷ�ļ��붯̬��ķ�ʽ�������Ƕ�̬��
		*		5.֪��дһ���ű�
		*		6.֪����β鿴������:oerr ora 1017 (1017�Ǵ�����)
		* 
		* ��ӡһ��hello world�����̣���Ƕ��ʽ��䣺
		*		1.��һ�α��룺	Ҫ���ͷ�ļ�#include "sqlca.h"
		*			proc dm01_hello.pc
		*		2.�ڶ��α��룺	Ҫ����ͷ�ļ��붯̬��  
		*			gcc dm01_hello.c -o dm01_hello -I/data/oracle/product/11.2.0/db_1/precomp/public -L/data/oracle/product/11.2.0/db_1/lib -lclntsh
		*				�����ܳ�������д���ű���Ȼ�����нű����ɣ���touchһ���ļ�������mycc����Ȼ����븴�ƽ�ȥ�����˳���
		*				Ȼ������chmod 775 mycc��ʹmycc��ɿ�ִ���ļ����´�ִ��mycc�ļ����൱���������ϴ�����
		*		3.���п�ִ���ļ�
		*	
		*		ͷ�ļ�sqlca.h��·��Ϊ/data/oracle/product/11.2.0/db_1/precomp/public���Լ�����$ORACLE_HOME
		*		��̬���·��Ϊ/data/oracle/product/11.2.0/db_1/lib�� ��ls libcl* lt�����ܿ�������Ҫ�Ķ�̬����ݷ�ʽ *�������� libcl������Ҫ�ҵ��ļ���ǰ������ĸ
		*			����.so�ļ����Ƕ�̬�⣬.so-> ���ǿ�ݷ�ʽ ���Ӷ�̬��Ĵ��� ��β�������� -l libclntsh.so ��lib��.soɾ�����ǿ��õĴ��루Ϊɶ����֪����
		* 
		*	�鿴�����룺
		*		oerr ora 1017
		*/
	}
	if (73)
	{
		/*
		*	�����ʱ�ǿ�������ѧԱ��ϰ�ղŲ�����
		* 
		*	���䣺
		*		����ͨ��UE����windows���ļ�����linux�У���UE��
		*/
	}
	//����c�ļ�
	if (74)
	{
		/*
		* 
		*	gcc����C���ԣ�g++����C++����
		*	procĬ�ϱ����c���Ե�.c�ļ������������C++���ļ���������Ҫ�õ�proc�ı���ѡ��
		*	
		*	proc����ѡ�����3���Ǳ�����Ҫ�õģ����б�ģ������в鿴������
		*		parse = none(C++�ģ�Ĭ��c���Ե���full) �Ǿ�����ν���.pc�ļ�����C���Ի���C++�﷨����
		*		code  = cpp(C++�ģ�Ĭ��c���Ե���ansi_c)�Ǿ������������C++�Ļ���C���Ե��ļ�
		*		oname = xxxxx (�������ɵ�.c�ļ���)
		*	
		*	���̣�
		*		��ǰ����д�õ�.pc����һ�ݣ�Ȼ��UE���޸ĳ�C++���﷨��<iostream> ��using namespace std; printf�� cout���� ��
		*		��һ�α��룺	//ע�����ѡ���ô�Сд����
		*		proc dm02_hello.pc parse=none code=cpp oname=dm02_hello.cc
		*		�ڶ��α��룺	//ע�⣬�õ���g++ �ļ���.cc�ļ�	������C���Ե�һ��
		*		g++ dm02_hello.cc -o dm02_hello -I/data/oracle/product/11.2.0/db_1/precomp/public -L/data/oracle/product/11.2.0/db_1/lib -lclntsh
		*		
		*/
	}
	//proc �� makefile��д
	if (75)
	{
		/*
		* дmakefile��
		*		touch makefile					//�����ļ�
		*		
		*	UE��д���´��룺
		*		all: dm01_hello dm02_hello		//������Ŀ�궼ִ�У�����ִֻ�е�һ��
		*
		*		dm01_hello:						//Ŀ�꣬�����2�д����ǹ��򣬼�������ִ������Ŀ��
		*			echo '=======proc dm01_hello.pc======='		//��ʾ�ɣ�Ӧ���Ǵ�ӡ��ʾ
		*			proc dm01_hello.pc
		*			gcc dm01_hello.c -o dm01_hello -I${ORACLE_HOME}/precomp/public -L${ORACLE_HOME}/lib -lclntsh
		*
		*		dm02_hello:						//ע�������g++,�����ļ���.cc
		*			echo '=======proc dm02_hello.pc======='
		*			proc dm02_hello.pc parse=none code=cpp oname=dm02_hello.cc
		*			g++ dm02_hello.cc -o dm02_hello -I${ORACLE_HOME}/precomp/public -L${ORACLE_HOME}/lib -lclntsh
		*
		*		clean:							//����Ĵ��룬��SQL��������� make clean ����ִ�����clean
		*			@rm -rf dm01_hello
		*			@rm -rf dm02_hello
		* 
		* 
		*	SQL����еĲ�����
		*		make							//ִ�����makefile�ű�
		*		make clean						//ִ�нű��е�clean
		* 
		*	ע��㣺
		*		ִ���� ��make clean�� ��ls�鿴���ܷ��ֳɹ�ɾ����
		*		��${ORACLE_HOME}�� ������makefile�л�����������д��$ORACLE_HOME����ԭ�������ӣ�����{}��makefileʶ��
		*		ִ�� ��echo $ORACLE_HOME�� �鿴����������·�����ҵ���/data/oracle/product/11.2.0/db_1
		* 
		*	�������ݣ�
		*		��dm02_hello.pc����������β�������Ĵ��룬��д���ˣ�rollback�����ύ(work��commit)���Ͽ�����(release)��
		*			EXEC SQL commit release;	//commit���ύ����˼�����Ĺ������ύȻ���˳���д��ʲô��ִ��ʲô
		*/
	}
	//proc�Ŀ������� proc������ɾ���ġ���
	if (76)
	{
		/*
		*	//�������룩insert
		*	
		*	�Դ�ǰ�ļ��з���Ķ���day03�´��� 01helloװ֮ǰ���ļ����ٴ���һ��02dbopװ���ݿ�γ̵��ļ��У�����02dbop
		*		cp ../01hello/dm01_hello.pc .
		*		cp ../01hello/makefile .		//��01hello�������ļ����ƹ���
		*										//dm01_hello.pc ����Ϊ dm01_baseop.pc
		*										//makefile �ĳ�dm01_baseop�� ɾ��dm02_hello ������
		* 
		*	select *from dept; SQL����в鿴dept�ı�  ֪����������10~40�ĳ�Ա
		*	desc dept;		   �鿴���� �ֱ�ΪDEPTNO��DNAME, LOC
		*	����в������ݣ�procд����������һ�У�dept�ı�,��Ҫ���ļ���ôд�ģ������ֻ��˵������Щ���ӵĸĶ�
		*		1.�������������
		*				int my_deptno;				//��Ҫ��ӵ��������
		*				char my_dname[20];
		*				char my_loc[20];
		*		2.����������ֵ������Ҫ��������ݣ�
		*				my_deptno = 50;
		*				strcpy(my_dname, "50_dname");
		*				strcpy(my_loc, "50_loc");
		*		3.proc�����д����
		*				EXEC SQL insert into dept(deptno, dname, loc) values(:my_deptno, :my_dname, :my_loc);	
		*				�ɼ���֮ǰд�Ĵ�������ʾ
		*		4.�ύ
		*				EXEC SQL commit work release;
		*/
	}
	if (77)
	{
		/*
		*	update(����) �� delete��ɾ����
		* 
		*	֪ʶ�㲹�䣺
		*		SQL��������У�CRT����shift+del ��ɾ���Ѿ���������ݣ�������ɾ����������
		*		SQL��������У����� / �����ִ����һ��ִ�е����
		* 
		*	�ʼ�ֻ�ܼ�ס���ļ������ӵ��޸ģ�������������뿴Դ�ļ�
		*	
		*	//update����
		*		printf("any key continue, update\n");
		*		printf("\n please enter you loc:");
		*		scanf("%s", my_loc);					//�����޸ĺ��loc
		*	//proc��дupdate����,���ύ					//�ύ����Ҫ��������޷�ִ��
		*		EXEC SQL update dept set loc = :my_loc where deptno = my_deptno;
		*		EXEC SQL commit;
		*		getchar();								//��סһ�£������κξͼ�����
		*
		*	//delete ɾ��
		*		printf("any key continue, delete\n");
		*		getchar();
		*	//proc��дdelete����,���ύ
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
		*	�� select
		*	
		*	֪ʶ���䣺
		*		�����Ǵ������ʧ���ˣ���Ҫ��SQL�������ɾ������ʱ��һ��Ҫ�ǵ���SQL���ɾ���ύ
		*		�� commit;  �ֺŲ�Ҫ����ɾ����߸����Ҫ�ύһ�Σ���������д��makefile�޷��������У������bug������
		* 
		*	���̣�
		*		����һ��dm01_baseop Ϊ dm02_baseop��ɾ��update��delete����
		*		�޸�makefile��ʹ��ͬʱִ��dm02_baseop�������ڴ�ǰhello_worldͬʱ��������ִ���ļ����Ǹ�
		*		��dm02_baseop���������д�޸ģ�ʹ��ִ���ļ��ܴ�ӡ���ǲ��루��������Ҫ��ģ���һ�е�����
		*		������ᷢ��������������������[20]�ڴ�ӡ��ʱ�򣬲���20�ֽڵ��ÿո����ˣ������������ݼ����
		*			ԭ������Ϊoracle���������͵��µģ��ͻ��˷�����ͨ��ʵ�������ݿ⣬
		*			ʵ�������ݿ������ݣ���ʱ�����Ѿ��浽�����ˣ���������Ϊ���飩���ͻ����ٴ�ʵ����ȡ���ݣ��������ͻ������飩���ʹ��˿ո�
		*			��������ש���������˽������γ�Ҫ���� ������������������
		*	
		*	dm02_baseop�����д���֣�
		*	
		*		//select	��ѯ
		*			EXEC SQL select deptno, dname, loc into :my_deptno, :my_dname, :my_loc from dept where deptno = :my_deptno;	//ע��ð�ŵ�ʹ�ã����˾ͻᱨ��
		*			if(0 != sqlca.sqlcode)
		*			{	//������,������ʾ
		*				ret = sqlca.sqlcode;
		*				printf("select error: %d \n", ret);
		*				return ret;
		*			}
		*			EXEC SQL commit;			//�ύ������
		*			printf("select ok\n");
		*			printf("%d, %s, %s\n", my_deptno, my_dname, my_loc);
		*			printf("any key continue\n");
		*			getchar();
		*		
		*/
	}
	//proc�����ļ�������
	if (79)
	{
		/*
		*	���⣺		��ǰ��Ҫ�޸�pcscfg.cfg �ļ�������� /usr/lib/gcc/x86_64-redhat-linux/4.1.1/include
		*	���������	��4.1.1 �޸�Ϊ��ǰ���ǰ�װ��gcc�汾��ʹ��ʹ������gcc�汾ͷ�ļ�
		* 
		*	ԭ��
		*				proc�������������ļ� �� ����ϵͳgcc�汾��ͷ�ļ���һ��
		*			
		*				.pc ͨ��proc��������.c �Ĺ��̣����ǽ�proc����� ��EXEC SQL��Щ�����C���Ե��﷨
		*				��ô����Ĺ�������Ҫ�õ�stddef.h��ͷ�ļ���proc�������Ͱ���pcscfg.cfg�ļ����õ�·��ȥ��
		*				����û���ҵ�����Ϊ���·����proc�Լ���¼��·���������ͷ�ļ���gcc��ͷ�ļ���gcc�汾��ͬ�����ͷ�ļ���·��Ҳ��һ��
		*				��������Ҫ�޸�·��������˵�汾�� Ϊ��ǰ��װ��gcc�汾��ʹ��·����˳���ҵ�ͷ�ļ�
		*				Ҳ�����޸�Ϊ��ǰ��װ��gcc�汾���֧�ֵİ汾
		*	
		*	���䣺
		*				���Ϻܶ�����������⣬��һֱ�Ҳ�����ϸ˵����ԭ��������
		*				��ʦ˵proc�����Ѿ�����Щԭ����Ҫ��������ʵ
		*		
		*/
	}
	//80 SQL�﷨֪ʶ�Ļع� 81procǰ���εĻع�
	if (80 && 81)
	{
		/*
		*	80:
		*			���У��麯�������顢������ˣ� ��Ҫ
		*			�Ӳ�ѯ��top-N����ҳ��			��Ҫ
		*			��������		�����			��Ҫ
		*			��ͼ�����С�����				��Ҫ
		*			�����ַ�� & ���÷�����
		*			
		*			������Ŀ��					�൱��Ҫ
		*			.....						����һЩ����úø�ϰ
		*	81��
		*			oerr ora 1	(�鿴������ľ�����Ϣ���˴�1Ϊ������)
		*			���� deleteɾ��һ��֮�� ����Ҫcommit�ύ�� ����������
		*			.....						����һЩ�������࣬���μ��ͺ�
		*		
		* 
		*/
	}
	//proc����������������
	if (82)
	{
		/*
		*	�˴�Դ�����·��Ϊ��
		*			/home/oracle/day_04/01_demo
		* 
		*	�������ͣ�
		*			char my_dname[20];		���������е� int char ��Щ��������������proc����C���Ե��﷨
		*			varchar my2_dname[20];	varchar ��proc�Ķ����������ͣ����ǽ���C���Ե�
		*									proc������ ���ڱ���ʱ���������������루ת������C�����ܹ�ʶ����﷨
		*									varchar��proc�������typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
		*									��һ���ṹ�壬�����ɵ�.c�ļ������ҵ�
		*	����Ķ���
		*		��day_03��dm02_baseop.pc ��������ϵĸĶ���
		*		1.�����int my2_deptno;	varchar my2_dname[20];	varchar my2_loc[20]; ��������������
		*		2.����˲�ѯ�����������������䣺
		*				EXEC SQL select deptno, dname, loc into :my2_deptno, :my2_dname, :my2_loc from dept where deptno = :my_deptno;
		*				printf("%d, %s, %s\n", my2_deptno, my2_dname.arr, my2_loc.arr);
		*	�۲�����
		*		1.ֻ������˲�ѯ����Ȼ�鵽�ˣ����ܸ����Ϊ���Ѳ鵽�����ݸ�ֵ������е�������������Ϊ��֮ǰ���Ѿ��������
		*		2.��ѯ�����������һ���ǽ���C���Ե��������͵Ĳ�ѯ�����һ����varchar�������͵Ľ����
		*				60, 60_dname           , 60_loc             
		*				60, 60_dname, 60_loc
		*			���Թ۲쵽������varchar�ģ��Զ����հײ��ֲ���ʾ�����õ��򽫿յĿռ䲹�ո��ӡ
		*		3.printf varchar�ı���ʱ����Ϊproc���������˽ṹ��Ĺ�ϵ�����Ǵ�ӡ��Ӧ���ǽṹ���Ա.arr
		*/
	}
	//proc ��������֪ʶ��ϵ�������Ա�Ƕȣ�
	if (83)
	{
		/*
		*	�������͵�֪ʶ��ϵ����ܣ���
		*		�������������ͣ�
		*				���������������͡��ⲿ�������͡��ڲ���������
		*		������ͨ�������̣�
		*				1. .pc��Ӧ�ó���ͨ��libclntsh.so����̬�⣩�����.c�ļ� ����������������ת�����ⲿ�������ͣ�
		*				2. .c�ļ�����ͨ�����紫�䵽oracleʵ��
		*				3. ʵ��������д��oracle���ݿ⣬							�����ݿ������ⲿ��������ת�����ڲ��������ͣ�
		*				4. ���ݿⱻ�����������ַ��ص�Ӧ�ó���						���ڲ��������ʹ�ʱ ��ת�� ���ⲿ�������ͣ�
		*		�����Ա��ص����ͣ�
		*				ֻ���������������ǳ���Ա�ܲٿء���ע��
		*				�����������ⲿ��������֮���ת���ܹ�������
		*					�����������ⲿ�������ͣ�������ת����ʽ��1.�Զ�ת������������֮ǰд�Ĵ��붼���Զ�ת����2.�ֹ�ת������Ҫ�ض�������
		*					�ͱ���varchar�Զ�ת���ɽṹ�壬���ѡ���ֶ�ת��������ת�����ض���
		*		��������֮���ת�����������ص㣺
		*				1.�ⲿ�������ͣ��Ҽ�������ɣ�д�뵽���ݿ���ʱ������ ת��� ����
		*				2.���Ǽ���ʱ�� ���������ݿ����������ת���� ���� ���������ù���
		*					��Ϊ������һ���ǹ̶�����ʽ����java�����ͣ�C++�����͵�
		*					���Բ�ת�������� �������� ת���� .c��ʶ��Ļ�����������
		*				3.�������ڴ�������л���ֵ��������ͣ�������ȻҲ�Ͱ����������������� ���������� ���غϵĵط������������������б��
		*				4.���� ��ÿ�����Ͷ��б�� ����Ҳͬ���б�ţ�
		*					�����������ˣ������������Ĺ����У�����ͬ�����������͵���Ų�ͬ
		*					����������������Ҫָ��ת�����������ͣ�����ķ�ʽ�ɣ���ûѧ��
		*				5.�����������ⲿ�������ͣ�������ת����ʽ��1.�Զ�ת������������֮ǰд�Ĵ��붼���Զ�ת����2.�ֹ�ת������Ҫ�ض�������
		*
		*/
	}
	//proc �������͵�ת��
	if (84)
	{
		/*
		*	֪ʶ�㲹�䣺
		*		ָ��Ҳ��һ���������ͣ�����ָ�ڴ�ռ�� ��������
		*		string��char��ת���ɵ��ⲿ�������͵�һ��
		*		����������������ת����Ҫ�ⲿ��������֧������ת�����У�����char��ת��string��varchar...�ȣ�������ת��int
		*		���Բ鿴��ʦ��ͼ��֪����Щ��ת����Щ
		* 
		*	��day_04�µ� dm01_baseop.pc �޸�
		* 
		*	�������ģ��Ķ�λ���뿴Դ���룺
		*		1.�������� �������ͣ�	�̶���С�ڴ��ı���������Ҫת����˭�͸�˭�������
		*		2.����Ա�ֹ���Ԥ����д���룩�������������͵�ת����ֻ���� ������������ ===> �ⲿ�������� ��
		*		�������£�
		*			typedef char DnameType[20];				//1.�������� �������� ����
		*			typedef char LocType[20];
		*		
		*			EXEC SQL TYPE DnameType is string(20);	//2.����Ա�ֹ���Ԥ����д���룩�������������͵�ת�� ת����string
		*			EXEC SQL TYPE LocType is string(20);
		* 
		*			int my3_deptno;	
		*			DnameType 	my3_dname;					//3.proc������������������ͽ���ת��
		*			LocType		my3_loc;
		* 
		*													//������ӡ�����string��varcharһ�����ǲ����ո�ȫ��
		*			EXEC SQL select deptno, dname, loc into :my3_deptno, :my3_dname, :my3_loc from dept where deptno = :my_deptno;
		*			printf("%d, %s, %s\n", my3_deptno, my3_dname, my3_loc);
		* 
		*/
	}
	//���������� ָʾ����������
	if (85)
	{
		/*
		*	�˿ε�Դ���룺
		*		��day04�µ�dm01_baseop.pc ����һ��Ϊdm02_ind.pc
		*		ɾ������select����һ�����ɣ���������������ͬ����һ�鼴�ɣ�������ָʾ�����ã�
		* 
		*	�������������ʣ�
		*		1.���������ֱ������� �� Ƕ��ʽSQL����Ⱥ �� C����Ⱥ
		*		2.�����������൱��һ���������� ����Ⱥ֮��Ļ�����
		*	�������������ã�
		*		1.ͨ��SQL����Ⱥ����EXEC SQLд�����ݿ⣨���룩
		*		2.ͨ��SQL����Ⱥ����EXEC SQL�������ݿ⣨�����
		*	
		*	ָʾ������֪ʶ��
		*		1.ָʾ������һ����ʶ������ֵΪ-1 ʱ ��ʶ�𵽣�������� ��ֵ NULL
		*		2.�����ʶ��Ҫ�����ò��У����øñ�ʶ�ı���������ֵΪ���٣�ֻҪ��ʶΪ-1 ��ô���۶�д������ʶ��� ��ֵ NULL
		*		3.�������ݿ��д�������Կ�ֵ������ܳ���������ָʾ��������Ҫ
		*		4.ָʾ��������ʱ���涨ֻ����short����
		*	ָʾ������ʹ�ã�
		*		1.д��ʱ��
		* 
		*	�������ģ�
		*		short loc_ind;		//ָʾ����������
		*		loc_ind = -1;		//��ʼ��
		*	
		*		//proc��д�������	//д��ָʾ����Ӧ��
		*		EXEC SQL insert into dept(deptno, dname, loc) values(:my_deptno, :my_dname:loc_ind, :my_loc);
		*		//����				//����ָʾ����Ӧ��
		*		EXEC SQL select deptno, dname, loc into :my3_deptno, :my3_dname:loc_ind, :my3_loc from dept where deptno = :my_deptno;
		*		//���������ָʾ�����ж�
		*		if(-1 == loc_ind)		
		*			strcpy(my3_dname, "null");
		* 
		*	���������
		*		1.ָʾ���������÷�ʽ��   :loc_ind
		*		2.д��ʱ������ָʾ��������		:my_dname:loc_ind	  ����my_dname��ʲô����������ֵ�ˣ���Ϊ��ʶloc_indΪ-1
		*		3.����ʱ��select����		:my3_dname:loc_ind	  ��ʱԭ���������ǿ�ֵ������Ϊָʾ�����ж���䣬��my3_dname��ʼ����"null"��
		*	��ӡ�����
		*		����60, null, 60_loc
		*		д��60                60_loc			��ͨ��select dept�ı��֪�ɹ����룬dname��Ϊָʾ����Ϊ-1����Ϊ ��ֵ��
		*/
	}
	//oracle�洢��������������
	if (86 && 87)
	{
		/*
		*	�����洢�������ܣ�����������ܳ���2�����棬2����˼·��
		*		1.����ʹ�� UE��Ӧ�ó��� ���浽 �������� ������ ���ӵ� ���ݿ�
		*		2.������������ ������ ������---���ݿ�  ʱ���������⣬�����ݿⱾ��洢���õ���
		*		3.Ҳ�п�����UE��Ӧ�ó��� д��ʱ �ͳ��������⣬���´����������ȥ
		*	�ж�����һ�����⣺
		*		1. ֱ����SQL����� ��дsql����������ģ���ֱ�Ӵ������ݿ⣬Ȼ��鿴����֪���Ƿ������ݿ�洢������
		*		2. ��.pc�ļ������У�������������ֵ���ģ�Ȼ��.pc�ļ���֪���Ƿ������ǵ�UE��Ӧ�ó��򣩵�������
		*	
		* 
		*	(1)sqlplus(���ݿ�洢������)��
		*		SQL���ֱ�Ӳ�������ĵ��С���ѯ�����û��ʾ������˵��sqlplusû���������ģ�
		*			insert into dept(deptno, dname, loc) values(60, '60_�ҵ�dname', '60_�ҵ�loc');
		*			commit;
		* 
		*		sqlplus ͨ�� .bash_profile �е�NLS_LANG ��������������ʾ�����ԣ�
		*			vi .bash_profile		//������������´��룬��ԭ����NLS_LANGע�͵� ��#
		*				export NLS_LANG="SIMPLIFIED CHINESE_CHINA.AHS16GBK"
		*			�����˳���sourceִ�У������˳���root �ٵ�¼oracle��������������Ļ�������ʾ
		* 
		*	��2��CRT��Ӧ�ó������������
		*		1.���� dm02_ind.pc Ϊ dm04_langue.pc,Ȼ�����������������Ǹ�ֵΪ���ģ����л����ж���
		*		2.������CRT�򿪣�ע�ⲻ��UE��dm04_langue.pc �ᷢ��ע�ͻ������ǵ����Ķ��������ˣ�˵��UE���浽������ʱ��������������
		*			UE�˵���--�ļ�--ת��--ASCII ת UTF_8  �����Ķ��ͺ��� 
		*			CRT�Ǳ��˳���root���ؽ�����
		*	��3��Ҳ�п�����linux���ַ��������⣬�� 65 ���н������
		*		
		* 
		*	���δ���Ķ�dm04_langue.pc��
		*		��ָʾ����ע�͵�����������Ҳȥ��
		*		makefile���dm04_langue�Ĵ���
		*		���֣�connect error: -12705 ���⣬��NLS_LANG���ó���
		*		delete dept where deptno>=60;	��ɾ�����
		* 
		*	93���ֳ������⣬�����������룬������ʾ����Ϣ������
		*		��֪�������ĸ����ð���
		*		����LANG=zh_CN.UTF-8 or LANG=zh_CN.GBK�Ƚ��. linux��source .bash_profile������Ч.
		*		 NLS_LANG=
		*						"SIMPLIFIED CHINESE_CHINA".ZHS16GBK	
		*						"SIMPLIFIED CHINESE_CHINA".AL32UTF8
		*						"AMERICAN_AMERICA.AL32UTF8"				//�������ǰ��
		*						"SIMPLIFIED CHINESE_CHINA.UTF8"
		*						"AMERICAN_AMERICA.ZHS16GBK"	
		*			����������LANG=zh_CN.UTF-8 ���� CHINA.AL32UTF8�Ľ����,����ʾҲ�������ĵ���
		*			
		*		linux�鿴nls_lang
		*			echo $NLS_LANG
		* 
		*		�����½�����û��ˣ�ֻ�ܵ�½sysdba 
		*			�Ȳ鿴�������Ѽ�����lsnrctl start
		*			Ȼ����sysdba������ shutdown immediate; �ر����ݿ�
		*			��startup�������ݿ�		
		* 
		*		oracle�����û���¼���鿴�ڲ��ַ�������������
		*			SELECT * FROM v$nls_parameters;
		*			select userenv('language') from dual;
		* 
		*	��. locale��������
		*		1. �鿴�������Ի�����locale
		*		2. ���п������Ի�����locale -a���������鿴�Ƿ�װĳ���ַ��������û�У��Ͱ�װ
		* 
		*	CRT��ʱ�޷���ʾ�������⣺
		*		CRT�޷���ʾ���ĵ�ԭ���ҵ��ˣ��١��ٲ٣�����ΪCRT��������ԭ����һЩ���岻֧��������ʾ���ҵ�Linux�������ĵ�
		*			vi /etc/locale.conf     д����Ϣ��
		*				LANG="zh_CN.UTF-8"					//��һ������Ҫ������������ʾ����İɣ���������
		*				SYSFONT="latarcyrheb-sun16"
		*				SUPPORTED="zh_CN.UTF-8:zh_CN:zh"
		*/
	}
	//oracle ͨѶ������������
	if (88 && 89)
	{
		/*
		*	��д����ʦ�Ĵ�������Ƶ�dm05���棬�����ҾͲ�д��
		*	�ǵ�дmakefile
		* 
		*	��UE�Ĳ��� ctr+f ��ѡ���д��ļ� ���ܷ��������
		*	linux��Ҳ������������룬��Ҫ��ȫ����Ȩ��
		*	��ද̬���API��֪��ɶ��˼���ñ���֪ʶ��ȥ��
		* 
		*	ͨѶ����
		* 
		* 
		*	��������ƣ�
		*		����Ҫ����֪�������ģ���鿴���ɣ�
		*		1..pc�����.cʱ�����˺ܶ���룬��SQL������ʱ����Ѵ���ŵ� sqlca.h �Ľṹ����
		*		2.���Ǵ�windows�µ�oracle�ļ������sqlca.h���ҵ�sqlca��������һ���ṹ�壬������Ա��sqlca.sqlcode��������֮ǰ������ȡ�������
		*			��������Ա������ã��й�Ч�ģ��������ǲ���ֱ��ʹ�ã�Ҫ������
		*			���磺sqlerrnl�Ǵ��󳤶� sqlerrmc�Ǵ�����Ϣ
		*		3.дһ������������	EXEC SQL WHENEVER SQLERROR DO sqlerr();
		*								EXEC SQL connect : serversid;
		*			SQLERROR������ DO sqlerr();�Ƕ���
		*			���ǣ�EXEC SQL connect : serversid; ����ʱ  ���Զ�ִ��sqlerr();����
		*		4.sqlerr()������
		*			EXEC SQL WHENEVER SQLERROR CONTINUE;
		*			printf("err reason:%.*s\n", sqlca.sqlerrm.sqlerrml, sqlca.sqlerrm.sqlerrmc);
		*			EXEC SQL ROLLBACK WORK RELEASE;
		*			exit(1);
		*		5.sqlerr()������ ��printf("err reason:%.*s\n", sqlca.sqlerrm.sqlerrml, sqlca.sqlerrm.sqlerrmc);
		*			����%.*s ��ʵ��%%ds == %70s   ����c�����﷨��֧�֣����Ծ͸�������д�� ��������%s�ĳ��ȣ������  ����70��sqlerrnl��
		*		6.sqlerr()�����У�CONTINUE����ѭ���е�continue���������˼�ǣ�����EXEC SQL֮��Ĵ�������ˣ�Ҳ���ܣ�����ִ�У���ִ����exit
		*			���û��CONTINUE����ô�������sqlerr()---EXEC SQL ROLLBACK WORK RELEASE;---sqlerr()
		*			���γ��˵ݹ飬����һ����ѭ���ݹ飬����CONTINUE��֤����ݹ�
		*		6.dm05�У����ǹ����connect ����½����Ȼ��make���ᷢ�ִ�ӡ�˴�����Ϣ������û��ִ�д�ǰһֱ�õĴ������ӡ������ÿ�����룬��ѯ�¶�дһ����������ʾ��
		*			ԭ����һ����������sqlerr();ִ�У�Ȼ��exit��1���˳���
		*		7.EXEC SQL WHENEVER SQLERROR DO sqlerr(); Ҳ������sqlerr02()��
		*			������ӡ��ϸ��Ϣ�������������䣬����sqlgls(stm, &stmlen, &sqlfc);���ǽ������SQL��䡢���ȷŽ�ȥ�����ڴ�����
		* 
		*		8.�ص㣺sqlerr(); �� sqlerr02()�� ����������д����ͷ�ļ��Ѿ�����õģ�����ʹ�þͿ�����
		*			����EXEC SQL WHENEVER SQLERROR DO sqlerr();���Ͳ���ÿ�����������롢ɾ������¼�¶���ȡ��������
		*			ֱ�Ӿ��ܴ�ӡ����
		*		
		*	������ԣ�
		*		���ǹ���ѵ�¼���û�����д��,make�����ִ�п���
		*		���αʼ��е�࣬���ң���Ҫ��ס�ľ���Ҫ��鿴Դ��ͷ�ļ���������鿴�ĵ���֪�����ṩ�Ĵ��������
		*		
		*
		*/
	}
	//�����������
	if (90 && 91)
	{
		/*
		*	����Ķ���
		*		��dm05_err.pc����dm06_array.pc
		*		ɾ���������ӡ�����롢����������ת�ⲿ������������ʼ���� ʹ���뾡�����
		*		sqlca.sqlerrd[2]
		* 
		*		��������
		*			int ret = 0, i = 0;
		*		�����������������ɾ����ǰ�ģ���
		*			int 		count;
		*			int 		my2_deptno[100];			
		*			varchar 	my2_dname[100][20];		
		*			varchar		my2_loc[100][20];
		*			short 		loc_ind[100];
		*		�����ӱ��л�ȡ���ݣ�
		*			EXEC SQL select deptno, dname, loc into :my2_deptno, :my2_dname, :my2_loc:loc_ind from dept;
		*		������ӡ���飺��
		*			count = sqlca.sqlerrd[2];		//sqlca.sqlerrd[2];�����Ч������ĸ���
		*			printf("count: %d\n", count);
		*			for(int i = 0; i < count; i++)
		*			{
		*				printf("%d\t%s\t%s\t\n", my2_deptno[i], my2_dname[i].arr, my2_loc[i].arr);
		*			}
		*	
		*	ע�⣺
		*		����varchar ���Դ�ӡҪ��ӡ.arr�ĳ�Ա
		*		loc_ind[100]; �����������ܵ���������������Ԫ�ظ��� ÿ������������Ҫ��һ��ָʾ������Ӧ
		*		sqlca.sqlerrd[2] ��ȡ��Ч����Ԫ�ظ���
		*/
	}
	if (92)
	{
		/*
		*  ps -u oracle �鿴oracle����
		* 
		*	����
		*		1.SQL������룬dept����һ������ֵ����
		*				insert into dept(deptno, dname) values(70, '70');
		*		2.Ȼ��������ȡ���ݲ�����ָʾ����
		*				EXEC SQL select deptno, dname, loc into :my2_deptno, :my2_dname, :my2_loc from dept;
		*		3.Ȼ�󱣴棬make����ִ�У����ֳ����ˣ���Ϊ���������ָʾ�����Ļ������޷������ֵ�������
		* 
		*	�����±�,SQL��������룺
		*		create table dept2 as select *from dept where 1=2;
		* 
		*	��������ȡ�����ݵ��뵽�±��У�
		*		EXEC SQL For:count insert into dept(deptno, dname, loc) values(:my2_deptno, :my2_dname, my2_loc:loc_ind);
		* 
		*	���������⣺
		*		��֪������ʲôʱ�����һ��ֻ�� deptno == 0 ���� ����������Ϊ��ֵ
		*			���ҵĿ�ֵ�ж�ֻ�ж���loc ����һֱ���� ����ҷ����Ժ󣬻�ȡ�������Ҷ��ĳ��� :my2_dname:loc_ind ��û������
		*			�ҵ�����my2_dname����һ��ָʾ�������ĳ�:my2_dname:dname_ind
		*			�����о��棺PCC-W-02344 ˵�������������Եȣ�ԭ����int my2_deptno[100]; ��д��20�ˣ���������100�����飬���ֻ��20���Ļ�100����
		*/
	}
	//�α�
	if (93 && 94)
	{
		/*
		* 
		*	�α���ڵ����壺
		*		�������������10���У�������ͨ���������ȫ������
		*		��ʱ���õ����α꣬�ҵ��ض�����һ�л�ȡ����
		*		�α���Ϊ��ĳһ�β�ѯ�����ģ�������select�йأ������α�ʱ�͹������ˣ�
		* 
		*	�α�Ĳ�����
		*		1.�����α�	������Ӧ��select��䣨��ѯ��
		*		2.���α�	�򿪲�ʹ��
		*		3.��ȡ����	���鵽����into������������  
		*		4.�ر��α�
		*	
		*	EXEC SQL ��׼��
		*		ANSI������Ƕ��ʽ��׼���������̿�ʼʵ�� db2�� informix�� oracle �ȳ���½��ʵ�� 
		*		��׼�涨 100 ��ʾû�����ˣ�����Oracle�Լ������� 11403 ��ʾͬ��Ч��
		* 
		*	�α���벿�֣�
		*		Դ�ļ�·����/home/oracle/day_04/02_demo  ���ϴοε�dm06 ��makefile ���Ƶ��������dm01
		* 
		*		1.�����α�
		*					EXEC SQL DECLARE c CURSOR FOR select deptno, dname, loc from dept; 
		*		2.���α�
		*					EXEC SQL OPEN c;
		*		3.��ȡ����	ÿ��ȡһ�����ݣ��α��Զ�������һ��
		*					��sqlca.sqlcodeΪ100 �� 11403 ʱ���ʹ���������ݻ�ȡ����
		*					��ӡ�α굱ǰ��ȡ������һ��
		*					while(1)
		*					{
		*						EXEC SQL FECTH c INTO :my2_deptno, :my2_dname:dname_ind, :my2_loc:loc_ind;
		*						if(100 == sqlca.sqlcode || 11403 == sqlca.sqlcode)
		*						{
		*							break;
		*						}
		*						printf("%d\t%s\t%s\t\n", my2_deptno, my2_dname.arr, my2_loc.arr);
		*					}
		*		4.�ر��α�
		*					EXEC SQL CLOSE c;
		* 
		*	ע��㣺
		*		����û���ö�ά���飬�����������õ���varchar�����Դ�ӡʱҪ��.arr
		*					
		*/
	}
	if (95)
	{
		/*
		*	UEʹ��ע�⣺
		*			�����浽����ʱ�����Զ��������ϵ��ļ��������Ƿ������ϵ��ļ�����ʱҪ����ע��
		*			���������ϻ��Ƿ������ϵ��ļ����뿴UE����ק��������ʾ���ļ���·�����ɴ�����
		*			�����ע��Ļ���һֱ�ڱ༭����棬���������ϵ��ļ�û�仯���ͻ�ܷ�ʱ���������
		* 
		*	�����ڿδ����������©��
		*			1.���ִ�ӡ�Ľ����������ݲ�����varchar�����ԣ�
		*					�Աȷ��� �� 30 ����dname �� loc ���� RCHNG  ��  K 
		* 
		*			2.ԭ���������Ϊvarchar ���¸�ֵ�󲻻�ɾ����ǰ��¼�����ݣ����ǽ��µ����ݸ��Ǿ����ݣ��Ҽ�¼����Ч�ֽ���û�б仯
		*			
		*			3.���������
		*					1.��memset(),ÿ�λ�ȡ�����ݴ�ӡ�󣬶������������������
		*					2.��string�������������ͣ��ֹ�ת�� ��������ת���ⲿ�������ͣ�
		*							string���ⲿ�������Ͳ�����ֱ��������ݵ����������ʹ��
		*			�����ӡ������£�
		*					0
		*					10      ACCOUNTING      NEW YORK
		*					20      RESEARCHNG      DALLASRK
		*					30      SALESRCHNG      CHICAGOK
		*					40      OPERATIONS      BOSTONOK
		*					90      60_�ҵ�dname    60_�ҵ�loc
		*			ʵ�ʱ����������£�
		*					 0
		*					10		ACCOUNTING      NEW YORK
		*					20		RESEARCH        DALLAS
		*					30		SALES           CHICAGO
		*					40		OPERATIONS      BOSTON
		*					90		60_�ҵ�dname    60_�ҵ�loc
		*	
		*	��Դ��������޸Ĳ��֣�
		* 
		*			1.memset�����������varchar�ĳ�Ա��������ڴ�ӡ����
		*					memset(my2_dname.arr, 0, 20);
		*					memset(my2_loc.arr	, 0, 20);
		*		
		*			2.���������ֹ�ת����string���ⲿ��������
		*					ȫ������ӣ�
		*							typedef char dnametype[20];
		*							typedef char loctype[20];
		*					������������ӣ�
		*							//�ֹ�ת������������ ת�� �ⲿ�������͵� string���������varchar�ľ����������ɾ�����
		*							EXEC SQL TYPE dnametype	is string(20);
		*							EXEC SQL TYPE loctype	is string(20);
		*
		*							int 		my3_deptno;								
		*							dnametype 	my3_dname;						
		*							loctype		my3_loc;
		*							short 		loc_ind3;
		*							short 		dname_ind3;
		*					ʣ�½�my2_dname.arr �� �滻�� my3_dname�� ����
		*					memsetע�͵�
		*/
	}
	//���ݿ�γ��ܽᣬ���Ե��ص��ע
	if (108 && 109)
	{
		/*
		*	������ʦ��Żع���һ��֮ǰ�Ŀγ̣�����˵����Щ����Ҫ�ص����յģ����ԡ������õöࣩ
		*		����proc�Ͳ����ص����յģ��������Ķ�̬sql����Ҫ�󣨵�����д�ɰ�������ʽ��
		*		��װoracleҲ���Ǳ����ģ���˾������ר�Ű�װ�����ϰ�Ҫ��Ļ����ǵû�
		*/
	}
	//windows������proc
	if (110 && 111 && 112 && 113)
	{
		/*
		*	windows������proc��Ҫ���˵����⣺
		*			1.��proc���������ɵ� vc6.0 ���� vs2019 ��
		*					1���ҵ�proc.exe
		*					2���ñ��������ҵ�procͷ�ļ�
		*					3���ñ��������ҵ��ļ���̬��
		*			2.��Ҫ��proc���������ҵ�vc6.0��includeͷ�ļ���������VS������Ҳ��Ҫvc6.0��includeͷ�ļ���VS����Ĳ����ԣ�
		*					1��procҪ����1.pcҪʹ��gccͷ�ļ� vsͷ�ļ�
		* 
		*	����������裺
		*			1.���鿴112��VS������proc���뻷����
		*			2.ע��㣺
		*					1��������һ�������У���Ҫ���Ӧ��Ȼ��Żᵯ����صĲ����򣬲��ܼ�������
		*	
		*	ע��㣺
		*			Ҫ�õ���ʱ���ٿ���Ƶ�ɣ�������ʱ�ò���
		* 
		*/
	}


	//Mysql�Ŀγ� ��ʽ����					����ѧϰ�ļ��ɣ��࿴ԭʼ���ϣ���һ��Ь
	//����������P122 �� �����ɡ�������Ľű���
	//�汾���ذ�װ��γ��ص�
	if (114)
	{
		/*
		*	�γ��ص㣺
		*			1.��Ҫ����oracle��һ���ĵ㣬�ظ��ľͲ�����
		*			2.�����������ѵ�
		* 
		*	�汾��װ��
		*			0.�ҵİ�װ�ǰ���������ӵ���װ�ģ�https://developer.aliyun.com/article/47237#slide-11 û������ʦ�ķ���
		*			1.�鿴��ǰ�汾��linux����ж�ؾɰ汾
		*						rpm -qa | grep -i mysql	��ѯ��������������װ�İ汾 ���������
		*						which mysql				�������������Ŀ¼
		*						rpm -e ( mysql����)			
		*								��rpm -e (mysql����) --nodeps --allmatches		//�����������ϵ��ɾ����һ���ҳ�������ͬ��mysql
		*						rm -rf /var/lib/mysql  ��Ŀ¼���ڶ����ҵ���Ŀ¼��
		*						�ɰ汾��Ҫɾ��һЩ�ļ��У�
		*								rm -r /etc/my.cnf
		*								rm -rf /var/lib/mysql
		*								rm -rf /var/share/mysql
		*								rm -rf /usr/bin/mysql*
		*							��
		*								find / -name mysql
		*								ɾ����ѯ���������ж���
		*						ɾ��mysql�Զ����ɵ��û���
		*								sudo userdel -r mysql	//ɾ���û�������Ŀ¼����ʱ����ֽ����ڼ����޷�ɾ����service mysql stop �ر����ݿ������������
		*						
		*			2.�ϴ���װ����װ
		*						��ʦ��������װ���ϴ����з��������ͻ��ˡ�devel ���Ҳ�֪���ҵİ�װ����û��
		*			3.��װ���Ժ�
		*						mysql��װ���趨��Ĭ�����룬��Ҫ�޸ģ�Ĭ���������/root/.mysql_secret�ļ��У����޸�	���ҵİ汾û��������⣬�ñ�ķ�ʽ�޸ĵģ���һ�αʼ��У�
		*	mysql�İ汾��
		*			1.mysql����ʱ�ǿ�Դ�ġ���ѵģ��ÿ�Դ����ȡ�������������Ա��ά��������������������˰�
		*			2.����oracle��˾�չ�mysql�Ժ󣬸��˸���ҵ�棨�շѣ�
		*			3.oracle���й�������mysql���������ƣ���ʦ˵����Ϊ��ѣ�Ȼ���½�Ĺ�˾��������˲����ĵĲ�����oracle�ͷ������й�����ip
		*						������Ҫ�ڹ�����oracle������ע������
		* 
		*/
	}
	//mysql���������˳�
	if (115)
	{
		/*
		*	���νӴ�mysql��
		*			1.mysql��һ��������������root�û��������͹ر�
		*			2.��װ�������һ��mysql�û�����������û�������su - mysql��¼ �û����ֽ�mysql
		*			3.����һ���û�Ϊ Mymysql (ɶ��������) ����Ϊ����mysql���û� ��linux�Ƕ��û��Ĳ���ϵͳ��
		*			4.��Ҫ�޸�mysql��root�����룬���޸��޷���¼���޸ķ�ʽ������������ıʼ������ᵽ
		*			5.��������¼mysql �� root�û���ֱ������mysql���� ��root�û��������бʼ�
		*			6.��oracle�Ĳ�ѯʱ�������ᷢ��mysql��֧�֣�˵��mysql��sqlplus�в�һ���ĵط��������
		*					oracle��ѯʱ�䣺
		*							select sysdate from dual;		//����ӡʱ��
		*					mysql��ѯʱ�䣺
		*							select now() from dual;			//����ӡʱ��
		*							select now() ;					//�򻯰汾
		*	
		*	centos�������û���ɾ����
		*			1.�����û�
		*					sudo adduser mysql01					//����һ������Ϊ"mysql01"�����û�
		*					sudo passwd mysql01						//�޸�����
		*					sudo usermod -aG wheel mysql01			//����sudoȨ��
		*			2.ɾ���û���
		*					sudo userdel mysql01					//ɾ���û����������Ŀ¼
		*					sudo userdel -r mysql01					//ɾ���û�������Ŀ¼
		*	
		*	��root�û�������ر����ݿ⣺
		*			1.�鿴����
		*					ps -u mysql 
		*			2.����
		*					////service mysql start	��ʦ�İ汾Ӧ�úܾ��ˣ��ɷ���
		*					systemctl start mysqld		5.6�汾����
		*			3.�ر�
		*					////service mysql stop
		*					systemctl stop mysqld		5.6�汾����
		*			4.��ֹMySQL���̣� 
		*					killall  mysqld
		*			
		*	��mysql01�û�����¼���ݿ⣺		
		*			1.��¼mysql01�û���
		*					su - mysql01
		*			2.��¼mysql	(-u �ǳ����û� -p ������)
		*					////mysql -uroot -proot		//�ɷ���
		*					mysql -uroot -p    �ҵİ汾�ķ����� 5.6�Ժ������ַ�ʽ�ˣ�����س�Ȼ������root������
		*		
		*			3.�������޷���¼�����⣺ERROR 1045 (28000): Access denied for user 'root'@'localhost' (using password: YES)
		*					�Ұ����������ˣ�https://blog.csdn.net/Roy_70/article/details/78798815	�����˳�mysql���÷�����״̬��¼�޸����룬������
		*					��ͬ�汾�Ľ����ʽ��һ����5.7�汾Ϊ��
		*					���ҵ�Ҫ�õ���·��Ϊ��/usr/bin/mysqld_safe
		*/
	}
	//root�û��޷�����mysql killɱ����
	if (116)
	{
		/*
		*	��������������
		*			1.root�޷�����mysql�������޷������ر�mysql
		*			2.�����Ǻ�̨���̻������е����⣬�� ps -u mysql �鿴���̣���¼PID��
		*			3.��������ɱ�����̣�2�ַ�ʽ����
		*						1.kill -9 PID��		�Ѷ�Ӧ��mysql����ɱ��
		*						2.killall  mysqld	ɱ������mysql����
		*			4.��������mysql
		*						systemctl start mysqld
		*/						
	}
	//���ݿ��	��ɾ�Ĳ� 
	if (117)
	{
		/*
		*	֪ʶ�㣺
		*		1.oracle �� mysql �����ݿⷽ��Ĳ��죨��Ŀǰ�ҵ�֪ʶ����˵��
		*					1.oracle�ǻ����û��Ĺ���ϵͳ����һ����Ϣϵͳ�ʹ���һ���û������û�֮�´�����ռ䣬��ͬ�û���Ȩ�޲�ͬ������sysdba��scott��
		*								�������ݿ�������ַ����ڰ�װoracleʱ�����Ѿ����ú��ˣ����б���һ���ַ���������utf8
		*								oracle��Ҫ�ύ
		* 
		*					2.mysql��һ���������ݿ�Ĺ���ģ�ͣ���һ����Ϣϵͳ�ʹ���һ�����ݿ⣬�����ݿ�֮�´�����ռ䣨N������������Ҳ������
		*								ÿ������һ���������ݿ⣬��ôÿ�����ݿ���в�ͬ���ַ���������ˣ�ʵ��Ҳ�������ģ������ض�ָ���Ļ���һ��Ĭ������
		*								mysql����Ҫ�ύ
		*	
		*					3.һ�������û���һ���������ݿ⣬��ômysql�����ݿ����ɾ�Ĳ����oracle�Ĳ�һ����
		*								mysql����������ݿ�����ӡ�ɾ�����޸ģ�oracle�����û�����ɾ�Ĳ�
		* 
		*		2.mysql����������ݿ�����ӡ�ɾ�����޸ģ�oracle�����û�����ɾ�Ĳ�
		*		
		* 
		*	�����﷨��
		*		1.��ʾmysql��ǰ�е����ݿ⣺
		*					show databases;
		*		2.��ʾ���ݿⴴ�����̵���䣨��ʵ������ʾ����Щָ����Ϣ�������ַ�����У�Թ���ɶ�ģ�
		*					show create database db_name;
		*		3.�޸����ݿ⣺�����޸��ַ���ɶ��
		*					alter database db_name character set utf8;		character���ÿ���ǣ���ʾ�����̾ͻ���������ʾ�ַ���
		*		4.���ݿ�ɾ�����
		*					drop database [if exists] db_name;				[if exists]��֪��ɶ����Ҫ��
		* 
		* 
		*	��ϰ������Ϥ��
		*	����
		*		1.����һ����Ϊmydb1�����ݿ�
		*					create database mydb1;
		*		2.����һ��ʹ��utf-8�ַ�����mydb2�����ݿ�
		*					create database mydb2 character set utf8;
		*		3.����һ��ʹ��utf-8�ַ���������У�Թ�������ݿ�mydb3
		*					create database mydb3 character set utf8 collate utf8_general_ci;
		*	�飺
		*		4.��ʾ�������ݿ�
		*					show databases;
		*		
		*		5.��ʾ���ݿ�������Ϣ
		*					show create database mydb2;
		*	�ģ�
		*		6.�޸�mydb1���ַ���Ϊgbk��utf8��
		*					alter database mydb1 character set utf8;
		*	ɾ��
		*		7.ɾ�����ݿ�mydb2
		*					drop database mydb2;
		* 
		*	���ݿ�������Ϣ����mydb2Ϊ������
		*		CREATE DATABASE `mydb2` /*!40100 DEFAULT CHARACTER SET utf8 
		*					���� `mydb2` �������ǵ����ţ����� ~ ����esc�����Ǹ�������˼��������ʴ�Сд���У����ݿ����
		* 
		*	�ַ�����
		*		��ָ���Ļ�����mydb1���ַ���Ĭ��Ϊlatin1����������
		*					mydb1    | CREATE DATABASE `mydb1` /*!40100 DEFAULT CHARACTER SET latin1
		*							
		*/
	}
	//�����ݣ�	��ɾ�Ĳ�
	if (118 && 119 && 120)
	{
		/*
		*	118 119 ���ظ��� 120�ǽ����� group by ��mysql�����⣨����������ӣ�
		*	
		*	������䣺
		*		1.�����Ӧ���ݿ�ķ�ʽ���������ݿ�֮�����ת
		*				USE name_db;
		*		1.1��ʾ��ǰ���ݿ��µ����б�
		*				show tables;
		*		2.ָ���鿴����������� as�ɲ��ӡ�  ����Ҳ���Բ��ӣ��������пո�oracleҲ��һ���ģ��� ����������
		*				select id, name as "����", salary*12 ��н from employee where id >= 2;
		*		2.�ڶ�Ӧ���ݿ��д�����
		*				
		*		3.���в����µ���
		*				ALTER TABLE table	ADD (column);
		*		4.�����޸���
		*				ALTER TABLE table MODIFY (column);
		*		5.����ɾ����
		*				ALTER TABLE table DROP (column);
		*		6.�鿴��ǰ���ݿ��еı�����
		*				show tables;
		*		7.���飺
		*				group by������Ϊ�ؼ��ּ���select����ϵģ�
		*	
		*	ע��㣺
		*		mysql�еķ��飨group by�����鲻�ϸ����·��İ�����˵��
		*
		*
		*	����һ��Ա����Employee,�����һЩ��¼��
		*				����mysql�Ի�������Ŀո���ò��ã�Ҫ���и��ƵĻ�������ʱ���ܴ��ո�oracle����֧�ֿո�ģ������Ա����������ܸ�������*/
	
//����һ��Ա����Employee,�����һЩ��¼��
/*
========>�����Ӧ�����ݿ�
use mydb1;

========>�ڶ�Ӧ���ݿ��д�����
create table employee(
id int,
name varchar(20),
sex bit,
birthday date,
salary double,
entry_date date,
resume text
);

========>��ѯ�ñ������̵����
show create table employee;

========>���в�������
insert into employee(id, name, sex, birthday, salary, entry_date, resume) values(1, '����', 1, '1983-09-21', 15000, '2021-06-24', 'һ����������');
insert into employee(id, name, sex, birthday, salary, entry_date, resume) values(2, '����', 1, '1984-09-22', 10000, '2021-07-24', 'һ����������');
insert into employee(id, name, sex, birthday, salary, entry_date, resume) values(3, '����', 0, '1989-09-23', 7000, '2021-05-24', 'һ����������');
��ʾ����ERROR 1366 (HY000): 
ԭ�����ݿ�ı������⣬�޸�Ϊutf8����
�����alter database mydb1 character set utf8;

�ٴβ�����ʾ����ERROR 1366 (HY000):
ԭ��name���ַ������ʽ������
�����
	SHOW FULL COLUMNS FROM employee; �鿴������Ϣ������varchar(20) | latin1_swedish_ci ����utf8
	�޸������ַ���Ϊutf8_unicode_ci
	alter table employee change name name varchar(20) character set utf8 collate utf8_unicode_ci not null default ''; 

�ٴβ�����ʾ����ERROR 1366 (HY000):
ԭ����һ����resume�����ǲ���ֱ���޸��޸�text���б���ERROR 1101 (42000):
�����
�������ݿ��ʱ����������character set utf8 collate utf8_general_ci;
�������ʱ��ĩβ�������������Ҳ�ɣ������ݿ������У�Թ��򣩣�ENGINE=InnoDB DEFAULT CHARSET=utf8;	
������ͽ���ʱ��ʹ����ͬ�ı����ʽ

ɾ���ñ�drop table employee; ���޸����ݿ�Ϊ character set utf8 collate utf8_general_ci;
�������ݿ����½��������ݣ����鿴
	select *from employee;

========>ָ���鿴�������
select id, name as "����", salary*12 ��н
from employee
where id >= 2;
	

*/

		/*
		*	�ۺϰ���������ѧϰ��
		*		����һ��ѧ����
		*				create table student(id int, name varchar(20), chinese int, english int, math int);
		*		��������
insert into student(id,name,chinese,english,math) values(1, '����',80,85,90);
insert into student(id,name,chinese,english,math) values(2,'�޿�',90,95,95);
insert into student(id,name,chinese,english,math) values(3,'������',80,96,96);
insert into student(id,name,chinese,english,math) values(4,'����',81,97,85);
insert into student(id,name,chinese,english,math) values(5,'�꾧��',85,84,90);
insert into student(id,name,chinese,english,math) values(6,'������',92,85,87);
insert into student(id,name,chinese,english,math) values(7,'���ϻ�',75,81,80);
insert into student(id,name,chinese,english,math) values(8,'�����',77,80,79);
insert into student(id,name,chinese,english,math) values(9,'������',95,85,85);
insert into student(id,name,chinese,english,math) values(10,'ʷ̩��',94,85,84);
		* 
		* 
		*	��ϰ��������Ϥ��
		*		1.��ѯ��������ѧ������Ϣ
		*				select *from student;
		*		2.��ѯ��������ѧ���������Ͷ�Ӧ��Ӣ��ɼ�
		*				select name, english from student;
		*		3.��ѯ���г��ֵ�Ӣ��ɼ���ȥ���ظ������ˣ��ؼ���distinct��
		*					select english from student grup by english;
		*				select distinct english from student;	
		*		4.������ѧ��Ӣ������ϼ�10���س���
		*				select name, english+10 from student;
		*		5.ͳ��ÿ��ѧ�����ܷ֣�Ҫ�ñ�����
		*				select name, chinese+english+math �ܷ� from student;
		*		6.��ѯ����Ϊ�޿���ѧ���ɼ�
		*				select *from student where name = '�޿�';	//"�޿�" ˫����Ҳ��
		*		7.��ѯӢ��ɼ�����90�ֵ�ͬѧ
		*				select *from student where english > 90;
		*		8.��ѯӢ������� 85��95֮���ͬѧ
		*				select *from student where english between 85 and 95;
		*				select *from student where english>=85 and english<=95;
		*		9.��ѯ��ѧ����Ϊ84,90,91��ͬѧ
		*				select *from student where math=84 or math=90 or math=91;
		*				select *from student where math in(84,90,91);
		*		10.��ѯ��ѧ��>85�����ķ�>90��ͬѧ
		*				select *from student where math>85 and chinese>90;
		*		11.����ѧ�ɼ���������
		*				select *from student order by math;
		*		12.���ܷ�����������Ȼ���ٰ��Ӹߵ��͵�˳�����
		*				select *, chinese+english+math �ܷ� from student order by chinese+english+math desc;
		*		13.�����ε�ѧ���ܳɼ��������
		*				select *, chinese+english+math �ܷ� from student where name like "��%" order by chinese+english+math desc;
		*		14.ͳ���ִܷ���250�������ж��٣�
		*				select count(*) ���� from student where chinese+english+math > 250;
		*		15.��ȫ������ܳɼ�
		*				select sum(math) ��ѧ�ܳɼ�, sum(chinese) �����ܳɼ�, sum(english) Ӣ���ܳɼ� from student;
		*		16.��ȫ���ܳɼ�
		*				select sum(math)+sum(chinese)+sum(english) �ܳɼ� from student;
		*				select sum(math+chinese+english) �ܳɼ� from student;
		*		17.��ȫ��Ӣ��ƽ����
		*				select avg(english) Ӣ��ƽ���� from student;
		*		18.����߷ֺ���ͷ�
		*				select max(math+chinese+english) ��߷�, min(math+chinese+english) ��ͷ� from student;
		*		19.��ѧ��������һ�У�class_id���༶�� int����
		*				
		*		20.��ѧ��idΪ1-5���޸�Ϊ1�࣬��ѧ��idΪ6-10���޸�Ϊ2��
		*				
		*		
		*	�ۺ���ѧϰ��Ϊѧ��������һ���༶�У�Ȼ�����з����ѯ����������༶���ܷ֣���߷֣�
		*		1.�������һ���ֶ�,(��Ӻ�δ��ֵ��Ĭ��ΪNULL)
		*				alter table student add column classid int;
		*		2.�����1~5��ͬѧ���䵽 1�ࣨ1 == classid�������6~10��ͬѧ���䵽 2��
		*				update student set classid = 1 where id between 1 and 5;
		*				update student set classid = 2 where id>=6 and id<=10;
		*		3.��ѯ1��2����ܷ֣���߷�
		*				select classid, sum(math+chinese+english) �ܳɼ� from student group by classid;
		*				
		*				select classid, max(math+chinese+english) ��߷� from student group by classid;
		*		4.����д������mysql�Ƿ��ܴ�ӡ��Oracle���ܴ�ӡ�ģ����������Ҫ
		*				1.select name, classid, avg(math+chinese+english) ƽ���� from student group by classid;
		*				2.�����ܴ�ӡ����ӡ������ĵ�һ����Ա������oracle�ǲ�����ģ� group by������ʲô�����ܴ�ӡʲô��û�еĲ��ܴ�ӡ������ʽ���⣩
		*						Ҳ����˵����mysql���Ͻ������⣬����֧�ֵĲ���
		*				3.���Ҫ�ر�ע�⣬���粻С��д�ɴ�ӡ a,b ����ʵ����Ҫ��b��Ҳд��group by b �������ʾ�ĵ�һ����a���ͻ������
		*						��oracle�Ĺ����У�group by ���еı�����������select�д�ӡ
		*		
		*/
	}
	//ʱ�������� �ַ������
	if (121)
	{
		/*
		*	mysql ʱ����غ���:
		*			1.��ǰʱ�䡢���ڡ�ʱ���(ʱ�������������ʱ����Ϣ)
		*						����:CURRENT_DATE()	
		*						ʱ��:CURRENT_TIME()
		*						ʱ���:CURRENT_TIMESTAMP()
		*						���ӣ�
		*									select CURRENT_DATE() ����, CURRENT_TIME() ʱ��, CURRENT_TIMESTAMP() ʱ��� from dual;
		*			2.��ǰʱ�䣺
		*						now()
		*			3.����datetime�����ڲ���
		*						DATE(datetime)
		*			4.����������ӡ����
		*						��ӣ�ADDTIME(date2, time_interval)
		*						���: DATEDIFF(date1, date2)
		*						���ӣ�
		*									select ADDTIME('02:30:30', '01:01:01');
		*									select ADDTIME(time, '1 1-1 10:09:09') from student;	//���û����
		*			5.��date2�м���һ��ʱ�����ڡ���ȥһ��ʱ������
		*						�ӣ�DATE_ADD(date2, INTERVAL d_value_d_type)
		*						����DATE_SUB(date2, INTERVAL d_value_d_type)
		*						���ӣ���ӡ���죬���죬���죺
		*									����д����select now()-1 ����, now() ����, now()+1 ���� from dual;  oracle��д������mysql��֧��
		*									��ȷд����select DATE_ADD(now(), INTERVAL -1 day) ����, now() ����, DATE_ADD(now(), INTERVAL +1 day) ���� from dual;
		*			6.������						
		*						YEAR|MONTH|DAY|DATE (datetime)
		*						����:
		*									select now() ��ǰʱ��, year(now()) ��, month(now()) ��, day(now()) �� from dual;
		* 
		*	�ַ�����غ�����
		*			1.�����ִ�
		*						CONCAT(string2,[...])
		*						����:
		*									select concat('hello', ' world', ' my name', ' is Yy!') from dual;	//�ɹ���ӡ���Ӻõ��ַ���
		*									oracle֧�ֵ�mysql��֧�ֵģ�select 'hello' || ' world' from dual;		//��ӡΪ0
		*									|| ��mysql�²�֧��
		*/		
	}
	//���Լ��
	if (122)
	{
		/*
		*	Լ�������壺
		*			��������˼���������Ա�����ݵõ�һ����Χ��������������ݲ���Խ��Լ������
		*			mysql��һ�����е�Լ����auto_increment���Զ�������������Լ���ı������Զ����ӣ��ܺ���
		*	
		*	Լ����Ա���ԣ�mysql�ģ�
		*			1.not null			�ǿ�Լ��   ���˵����� ����Ϊ��
		*			2.Unique			Ψһ��Լ��   �� �绰���� �����ַ
		*			3.Primary Key		����Լ��(����  �ǿ���Ψһ  ����˼) ʵ��������ֱ�ӽ�����һ������
		*			4.Foreign Key		���Լ���� �ӱ�x�������������x��(������) ��ô�ӱ�x��������x�����, ע��!!:�ӱ��ӱ�����Լ�����������������
		*			5.auto_increment	���������Զ�����(mysql����)
		*		
		*	�ô����������ӣ�constraint������Լ����mysql�ɲ��ã�		teacher_tid_PK��Լ����ʾ��Υ����Լ�������ʾ��	primary key��Լ������
		*			����һ����t1���������У�����Ϊ��tid��tname������tid�������Զ�����Լ����tname����Ϊ��
		*								create table t1	(tid int primary key auto_increment, tname varchar(40) not null);
		*							=====>������β�����ͬ����
		*								insert into t1(tname) values('aaa'); 
		*							=====>�鿴���۲쵽��tid�Զ����������ˣ�����û�ж�����ֵ����
		*								select *from t1;
		*							=====>�鿴���Ա����������
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
	//�ع� ����
	if (123)
	{
		/*
		*	֪ʶ��عˣ�
		*			1.�Ա����Ҫ�Ƚ����Ӧ���ݿ⣬�� use db_name;
		*			2.�Ա����һ���ֶΣ�����һ�У���alter table table_name add column class_id int;
		*			3.����ת�ַ�������msql�ķ�����		oracle�ģ�to_char ���ڸ�ʽ��yyyy-mm-dd		mysql�ĸ�ʽ��%Y-%c-%d
		*						select date_format(now(), '%Y-%M-%D') from dual;
		*						select date_format(now(), '%Y-%c-%d %h:%i:%s') from dual;
		*			4.�ַ���ת���ڣ���msql�ķ�����		oracle�ģ�to_date
		*						select str_to_date('2015-2-04 05:15:26', '%Y-%c-%d %h:%i:%s') from dual;
		* 
		*	����mysql�Ļ���API�Ѿ���ͨ��
		*/
	}
	//mysql ����ѯ�������ϡ��£�
	if (124 && 125)
	{
		//��װ�˼���oracle�ı�д��һ��.sql�Ľű��У���������Ƶ���Ѵ�����������,���Ƿ�����һЩ��������Ȼ©���ˣ�����ûд��
		{
			/*
-- 	��root�û���½ϵͳ��ִ�нű�

-- 	�������ݿ�
create database mydb61 character set utf8;

-- 	ѡ�����ݿ�
use mydb61;

--	���� dbuser1 �û�
--	�����û� ��dbuser61�� ����Ϊ ��dbuser61�� ӵ�в������ݿ� mydb61������Ȩ��
	GRANT ALL ON mydb61.* TO dbuser61 IDENTIFIED BY "dbuser61";
	flush privileges;
	
--	grant select,insert,update,delete on mydb61.* to dbuser61@localhost identified by "dbuser61";
--	grant select,insert,update,delete on mydb61.* to dbuser61@'%' identified by "dbuser61";

--	������

--	�������ű� ����ֵ
DROP TABLE IF EXISTS `dept`;		
CREATE TABLE dept (
	`deptno` int(2) PRIMARY KEY,	
	`dname` varchar(14) NOT NULL,
	`loc` varchar(13)
)DEFAULT CHARSET=utf8;
--	`` ��esc�����ǿż� ��˼�Ǳ��������ĵ��ʣ���dept �Ѿ��Ǵ�Сд���е���
--	PRIMARY KEY ��Լ�� NOT NULLͬ��
--	DEFAULT CHARSET=utf8; �����ñ���ַ���

INSERT INTO dept VALUES(10, 'ACCOUNTING'	, 'NEW YORK');
INSERT INTO dept VALUES(20, 'RESEARCH'		, 'DALLAS');
INSERT INTO dept VALUES(30, 'SALES'			, 'CHICAGO');
INSERT INTO dept VALUES(40, 'OPERATIONS'	, 'BOSTON');

commit;

--	ע��mysql��sql���� Լ����������֣���Ҫ����д�ڱ����
--	����Ա���� ����ֵ
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

--	��������
--	CREATE INDEX MYSCOTT.IX_CAtbAuditOperInfo_OT ON MYSCOTT.EMP(ENAME) TABLESPACE ts_myscott2;
create index emp_ename_index on emp(ename);

--	ע�� ���ڸ�ʽ��һ��
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

--	�������ʼ���� ����ֵ
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

--���������
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

		//124~125 �����ӡ����⡢��������
		/*
			����ѯ���﷨�����ף�
					1.SQL99��׼��
					2.oracle�Լ��ģ�����ѧ����
			�����м��֣�
					1.������
					2.�������ӡ��������ӣ�����һ����ֵ�Ż���ʾ��
					3.�������ӣ�����һ����ֵ�ͻ���ʾ��
					4.�������ӣ����ǵѿ�������

��������ϰ�⣬������Ϥ��
		1.��ѯ��Ա����Ϣ��Ա���ţ���������н����������
					������ ������������dept�ı��У�����Ա����Ϣ��emp����

					======>���ԣ��� ���� ��������  ��=�� ����mysql�ܷ�֧��
select e.empno, e.ename, e.sal, d.dname
from emp e, dept d
where e.deptno = d.deptno;
					======>���ۣ�mysql֧�� ��=�� ��������

					======>SQL99 �﷨��������
select e.*, d.*
from emp e inner join dept d
on e.deptno = d.deptno;
					======>���ۣ��Ա�oracle �����ǰ� , ����inner join	    ��where ����on



		2.��ʾ���в�����Ϣ����ʾ����������
					������ ���顢���

					======>���ԣ���oracle���﷨(����������)��ӡ40�Ų�����Ϣ
select d.deptno, d.dname, count(e.deptno)
from emp e, dept d
where e.deptno = d.deptno (+)
group by d.deptno, d.dname;
					======>���ۣ��޷�ʹ�� (+) 

					======>SQL99 �﷨������������
					======>��������
select d.deptno, d.dname, count(e.deptno)
from dept d
left outer join emp e
on e.deptno = d.deptno
group by d.deptno, d.dname;

					======>��������
select d.deptno, d.dname, count(e.deptno)
from emp e
right outer join dept d
on e.deptno = d.deptno
group by d.deptno, d.dname;
					======>	ע���������ӣ����Ǵ�ӡ������е����ݣ������������ӵ�dept d 



		3.�����ӣ�-- ��ѯԱ����Ϣ ���ϰ���Ϣ����ʾ*** ���ϰ��� ***
					������emp ��Ա����empno �Ҷ�ӦԱ������˾Ա����mgr����ô��Ӧ�ð�emp����������Ա���ű���˾�ű�

				
					======>1.oracle���﷨����concat�ַ���ƴ��
select concat(emp1.ename, ' ���ϰ��ǣ� ', boss.ename)
from emp emp1, emp boss
where emp1.mgr = boss.empno;

					======>2.SQL99�﷨������KINGû��ӡ����SQL99����������,������Ա������ӡ
select concat(emp1.ename, ' ���ϰ��ǣ� ', boss.ename)
from emp emp1
left outer join emp boss
on emp1.mgr = boss.empno;

					======>3.����KINGΪNULL�����˿�������	oracle���˿�������nvl(b.ename , '���Լ�')
					======>  mysql�޷�ʹ��nvl��oracle���﷨��
select concat(emp1.ename, ' ���ϰ��ǣ� ', nvl(boss.ename , '���Լ�'))
from emp emp1
left outer join emp boss
on emp1.mgr = boss.empno;
					

					======>4.mysql���˿����� ifnull
select concat(emp1.ename, ' ���ϰ��ǣ� ', ifnull(boss.ename , '���Լ�'))
from emp emp1
left outer join emp boss
on emp1.mgr = boss.empno;

		*/
	}
	//mysql �ַ������⣨�����ַ�������������ԭ��
	if (126 && 127 && 128)
	{
		//Mysql ��6��ʹ�����ַ���
		/*
			
			Mysql ��6��ʹ�����ַ���
					1.client		�ͻ���	���ͻ�����ʾ���ַ���
					2.connection	���Ӵ�	���ͻ��˼�������������ݿ⣩������Ϣ ����ȥ����������ɶ�ַ���
											  �������ݿ���ַ�����δָ���Ͱ��շ�����Ĭ���ַ���
					3.database		���ݿ�	�����ݿ��������ĳ��������ʹ�õ��ַ����趨���������ʱδָ������ʹ�÷�������װʱָ�����ַ���
					4.results		����ֵ	�����ݿⷵ�����ݸ��ͻ���ʱʹ�õ��ַ����趨��δָ���Ļ�ʹ�÷�����Ĭ��
					5.server		������	����������װʱָ����Ĭ���ַ���
					6.system		ϵͳ		�����ݿ�ϵͳʹ�õ��ַ����趨

			����Ա��Ҫ��ע�ģ�����Ա�ܲ�����ֻ������ͻ����йصģ�������Ҫ��������ͻ����й�
					1.client		�ͻ���	������Ա�ڿͻ��˵���ʾ
					2.connection	���Ӵ�	��������ʲô���͵��ַ���������
					3.results		����ֵ	��������ʲô�����յ����ݿⷵ�ص���Ϣ

			�鿴�ַ������������
					show variables like 'character%';	 �鿴����Ӧ�õ��ַ�������ͬ�����ݿ��лῴ����һ���Ľ���������� mydb61 �ģ�
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
		//�����������������
		/*
			mysql�����������������
					��1��ԭ��.mysql�������ƣ�6���ַ�����
					��2��ԭ��.����ϵͳ�����Լ�������
					��3��ԭ��.�ļ��洢��ʽ������936����

��1��ԭ��mysql�������ƣ�6���ַ�����
			����ʵ�飺
					1.�����޸ĵ�¼mysqlʱ���ַ���Ϊgbk���ٲ鿴�ַ�����
								mysql -uroot -p --default_character_set=gbk
								show variables like 'character%';
						=======>Ӱ��������㣨3�������ַ��������ֿͻ��ˡ����ӡ�����ֵ������Ϊ��gbk����Ϊ���������Ա�Ĳ�����ʾ���й�

					2.����mydb1���ݿ⣬�鿴��ǰutf8ʱ�ڴ洢�����ĵı�
								use mydb1;
								select *from student;
						=======>�������������ˣ�ԭ��:utf8ʱ�ڰ���utf8��ʽ�洢��Ȼ����gbk��¼�鿴��utf8��ʽ�����ݿⷵ�أ�û�н��и�ʽת������Ȼ��utf8
						=======>�����ǿͻ�����gbk�����߸�ʽ��ͬ���͵�����ʾ���룬Ϊ�β�ת�����뿴�·��Ľ��͡�
			
			Ϊ��resultsΪgbk�������ݿ�utf8�ķ���ֵ�����и�ʽת����gbk��ʾ��
						==>���ݿⷵ�ص���Ϣ������ת����������ʽ�����ǰ������ݿ���ĸ�ʽ�����أ�������Ϊ��
						==>��Ϊ���ݿ�ֻ���ṩһ�����ݵĴ洢�����Ļ��ƣ�������ʲô���ݣ��������ı�����ʽ������ȡ����
						==>���ҿͻ��˲�һ�������ĵģ����������ġ����ġ����ģ����ݿⷵ�ص���Ϣת����ʽûʲô���壬����ʲô����ȡ��ʲô�����������ݵ�������

					3.����gbk��ʽ��¼mysql������£��ӵ�2���������ǲ�����������ݵ�����
								insert into student values(11, '��ͷ', 99, 12, 55, 2);
						==>��Ȼ����ɹ�����ʱ������ '��ͷ' ��gbk�ģ����ǲ嵽utf8�ı����ˣ���ϸ�ڵ�2��ԭ��ʱ���н�
								insert into student(id, name, chinese, english, math, classid) values(11, '������', 99, 12, 55, 2);
						==>����д��û�в���ɹ�������ʾname��ʽ����

��2��ԭ�򣺲���ϵͳ�����Լ�������
			1.linux��һ�����û��Ĳ���ϵͳ��
			2.linux����ϵͳ�����Ի��� �� �û����õ����Ի���LANG�໥Ӱ�죨�����������˵����

			����ʵ�飺
					1.�鿴root�û�����������
								echo $LANG	���� cat /etc/locale.conf
						==> zh_CN.UTF-8  ��zh_CN��ʾ����UTF-8��ʽ�洢
					2.��¼mysql01 �鿴��������
								su - mysql01
								echo $LANG
						==> zh_CN.UTF-8
					3.�ı�mysql01�û�����������
								vi .bash_profile
								��ӣ�export LANG=C
								source .bash_profile	//ִ�����ã������˳��û��ٵ�½���Զ�ִ��
								ls						//�鿴�������ĵ��ļ��У�����������
						==>����mysql01�û� ��LANG���ó�C��Ȼ�����ļ����������룬ԭ����utf8ʱ�����ģ��������û�ΪC��ʽ����Ȼ�޷��鿴utf8��ʽ������

					4.mysql01�û��������������ã���¼mysql���鿴�ַ���
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
						==>�ֲܿ��ķ��֣�linux���û��ı���Ĭ���ַ��������û���¼��mysql���ַ���Ҳ�����˾���仯���鿴��Ҳ�϶�����������
						==>��¼mysql�� �û���LANG��Ӱ��mysql���ַ������ã��ر�ע��Ŷ��
					5.���ϣ�����һ�Բ����
								use mydb1
								insert into student(id, name, chinese, english, math, classid) values(11, '������', 99, 12, 55, 2);
						==>�ٴοֲ��ķ��֣���Ȼ����ɹ��ˣ����޷���ʾ����
						==>��������һ���˸Ķ���LANG����Ȼ���¼mysql�������ǵı���������ݣ���ô���������У������д�������ֲܿ�����Ϊ�鲻����������
						==>���������еȴ�˾���ϸ�Ҫ��һ���û���������һ�����򣬲�׼�ñ�ĳ���Ӵ�����û�������
						==>��Ŀ��ǧ��Ҫ����������ͬһ���û��²��𻷾���Ҫ�ֿ�������һ���䶯����һ���ͳ������

��3��ԭ��.�ļ��洢��ʽ������936����
			֪ʶ���⣺
					1.����������UE �༭�������ϵ��ļ�����ʱ�༭ʱ��Ĭ�ϰ���windows�ĸ�ʽ���洢��windowsĬ��Ϊ936
						==>��ô�浽�������Ͼ���936��ʽ�ˣ����������������õ�Ϊutf8��������������ļ��ͻ��������
					2.��������Ҫ��UE���ã��浽��������ʱ��ת����UTF-8�ĸ�ʽ�������ļ��洢���������Ͼ���UTF-8����
						==>��ô���������ļ�������������ʾ������
			����ԭ��
					=======>���Ƿ����������ݿ���һ�����õ��ַ���
					=======>�������Ǵ洢��ȥ���ļ�������������õ��ַ�����ʽ���ͳ���������

		*/
	}
	//Ѹ����Ӧ�������� ��������
	if (129)
	{
		/*
			������Ӧ��һ��������
					1.CTR����ģ��һ���նˣ���¼����������
					2.��˾�л������ӣ�һ���ն�Ҫ���������նˣ���������ת���ݻ�����������ʽ�����ķ������ϣ���IP�ܶ࣬������
							===>�������������ʵϰʱ��RRU��HUB���Ȼ�����IP�ܶ�������ȥ������Ϥ�Ļ��Ͳ�֪�����һ����������IP�����¸���һ��
					3.������Ӧ������Ҫѵ��һ��
		*/
	}
	//mysql_helloworldӦ�ó�����д
	if (130)
	{
		/*
		
			����Ҫ�㣺
					1.ѧϰ�Ѷȣ���proc������׵ö�
					2.ѧϰ�������࿴ԭʼ���ϣ���һ��Ь
					3.mysql�Ĺٷ��ĵ������ĵģ��ܷ��㣬���ε���mysql c API��һ��
					4.API ����Ƕ��ʽ��䣬��C���� PHP C++ java��

			���ĵ���֪��
					1.libmysqlclient, mysql�ṩ�˶�̬�⣬���������ӵ���������
							===>��������Ҫ�ҵ��������Ȼ��֪����ôʹ�õ��������̬��
							===> find / -name "libmysqlclient.*"	�� / ��Ŀ¼���ҽ�libmysqlclient.*���ļ�
					2.����

			����ʵ�飺
					1.�ҵ�libmysqlclient��̬�⣬��¼mysql01�����������ļ�����dm01_hello.c�ļ�
							find / -name "libmysqlclient.*"
							===>/usr/lib64/mysql/libmysqlclient.a
							su - mysql01
							mkdir day_05
							cd day_05
							touch dm01_hello.c
							���ԣ�(Ӧ�������ڸ���һ�ݣ�����vi��ʶ�������)
							===>nm libmysqlclient.a >2log
							===>vi 2log 

					2.UE��dm01_hello.c��дһ���򵥵Ĵ�ӡ����,Ȼ��gcc����ɿ�ִ���ļ������г���
							printf("hello Yy, good moning!");
							gcc dm01_hello.c -o dm01_hello
							./dm01_hello

					3.��ͷ�ļ����Ѿ��ҵ���̬���ˣ�.c�ļ����ͷ�ļ�
							find / -name "mysql.h"
							===>û�ҵ��Ļ���������һ������û�а�װ����װһ�£�����ǰ�װͷ�ļ��ģ�����libmysqlclient.a
							===>sudo yum install mysql-community-devel.x86_64
							===>/usr/include/mysql/mysql.h

					4.��.c�ļ��б�дǶ��ʽ��䣺
							1.��ʼ�����õ�һ�����
										msql_init��������ʼ�����������Ϊһ��MYSQL�ռ䣬��Ὣ�ÿռ��ַ���أ��������ΪNULL����Ὺ��һ���ռ䲢���أ��ܺ��ã�
										MYSQL mysql;
										MYSQL *connect;
										connect = mysql_init(&mysql);
										if(connect == NULL)	{
											ret = mysql_errno(&mysql);					//mysql_errno������ȡ������
											printf("func mysql_init() err:%d\n", ret);
											return ret;		}
										printf("connect ok\n");
							2.�������ӣ����ӵ�������		
							3.ִ��һ����ѯ���
							4.��ý��
					4.��gcc��ͷ�ļ��붯̬�⼯��
							gcc dm01_hello.c -o dm01_hello -I/usr/include/mysql/ -L/usr/lib64/mysql/ -lmysqlclient
							===>����һ������⣬�������������ԭ����64λϵͳ�£������Ҫ�Ļ����Ҳ��������Ծͱ�����
							===>��32λ�¿��ܲ������ͨ����



		*/
	}
	//mysql_helloworldӦ�ó�����������Ų�
	if (131)
	{
		/*
		
			���Ͻڿ����ݽ��⣬��������
					1.��gcc��ͷ�ļ��붯̬�⼯��
							gcc dm01_conn.c -o dm01_conn -I/usr/include/mysql/ -L/usr/lib64/mysql/ -lmysqlclient
							===>����һ������⣬�������������ԭ����64λϵͳ�£������Ҫ�Ļ����Ҳ��������Ծͱ�����
							===>��32λ�¿��ܲ������ͨ����
							===> һ����������������ѣ�  -lstdc++   ����APIȥ���ض�̬�� ��  -ldl  ����߳̿⺯�� ��-lpthread  �����ѧ���� -lm ����ʱ -lrt
							gcc dm01_conn.c -o dm01_conn -I/usr/include/mysql/ -L/usr/lib64/mysql/ -lmysqlclient -lstdc++ -ldl -lpthread -lm -lrt
					2.��Ҫ����֪����ô�Ĵ�����֪����ô���Ҵ�����ô���ٷ�������

		*/
	}
	//mysql_api�Ľ����ȡ_������ڴ�ģ�ͷ������ϡ��£�
	if (132 && 133)
	{
		/*
			������
					����ʱ������Ƕ��ʽ�������Ǵ�mysql�Ĺٷ��ֲ��ҵ��ģ�ע��ʹ�÷����Լ����������𡢻��д����жϵ�����
					�鿴MYSQL_ROW��������������һ������ָ��
					��Ϊmysql����װ���˺����������������ܷ���

			���̣�
					����mysql_query һ��ѯ��mysql�����̨���ͱ��ģ���������Ͼͷ�������
					mysql_store_result�Ͱѽ����ȫ�����գ��������ǵ���mysql_fetch_row �������α꣩һ��һ�еļ�����ӡ����mysql_store_result�м�����
								��Ϊmysql_store_result�Ѿ��洢�˷��ص�ȫ�������

					��ʱmysql_fetch_row�ĵײ�ģ�͵��������£����Դ˰�����emp��
								char** mysql_fetch_row()
								{
								======>������ռ�
									char **tmp = (char **)malloc(sizeof(char *) * 9);	��������һ��ָ�����飬��Ϊemp��9�У�����*9
									for(int i=0, i < 9; i++)
									{
										tmp[i] = (char *)malloc(100);
									}
								======>��copy���ݵ��ռ���
									strcpy(tmp[0], "7369");
									strcpy(tmp[1], "SMITH");
									strcpy(tmp[0], "CLERK");
									strcpy(tmp[0], "7902");
									...........

									return tmp;
								}

		
			2.���ӣ�
					����ԭ�ͣ�
								mysql_real_connect(MYSQL *mysql,				�������ʼ���õ��ľ��
													const char *host,			
													const char *user,			�û���
													const char *passwd,			����
													const char *db,				Ҫ���������ݿ������
													unsigned int port,			�˿ںţ�TCPʹ�ã����õĻ���0��Ĭ�ϣ�
													const char *unix_socket,		socket�׽��ֻ������ܵ���TCPʹ�ã�������NULL
													unsigned long client_flag)	�ͻ�����أ�Ĭ��Ϊ0��������һЩ�ָ꣬���ض�����
					����ֵ������һ�����Ӿ�������������Ӿ�������ʼ������ͬһ����������ʱ�ľ����û�����ӹ��ܣ�

			��ȡ�������
					MYSQL_RES * mysql_store_result(MYSQL *mysql)

			3.ִ��һ����ѯ���
					�ú�����	int mysql_query(MYSQL *mysql, const char* stnt_str)	�ζ�������һ���������  Mysql������Ҳ������������ض�����֧�ֶ�̬sql��������oracle�����鷳
					ע�⣺�˺�����2ֻ֧�� ��0��β���ַ��� �������0 ����mysql_real_queryȡ��
								char* stnt_str = "select *from emp;";
								ret = mysql_query(connect, stnt_str);
								if(0 != ret)
								{
									printf("func mysql_query() err:%d\n", ret);
									return ret;
								}
								printf("mysql_query ok\n");


			4.��ý�� ��ȡ����� ���ַ�ʽ1.ȫ����ȡ��2.һ��һ�л�ȡ
								MYSQL_RES * result = mysql_store_result(connect);	ִ�����ѯ����õĽ���ŵ���connect��
								if(NULL == result)
								{
									ret = mysql_errno(connect);
									printf("func mysql_store_result() err:%d\n", ret);
									return ret;
								}
					�������������ʱ������Ѿ��ŵ��������ˣ�Ӧ�ó���ģ���Ϊ�����ݿⷵ�ص�ֵ��
					һ���еĻ�ȡ��mysql_fetch_row����
								printf("\n");
								MYSQL_ROW row = NULL;
								while(row = mysql_fetch_row(result))				����ֵ�ú������ص��ڴ�ģ�ͣ��ռ䣩��MYSQL_ROW row��һ��char** �ı����������ܽ�ס��������ֵ
								{
									printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n", row[0], row[1], row[2], row[3], row[4], row[5], row[6], row[7]);
								}
								printf("\n");
					�ͷŽ����
								mysql_free_result(result);
		*/
	}
	//��1�� ��ҵ
	if (134)
	{
		/*
			��ҵ��
					��һ���У�connect��ȡ���˽����������Ӧ���ܻ�ȡ�����������ܻ�ȡ��ͷ������ҵΪ
						
					1.�鿴MySQL�ĵ���API��������ȡ����
					2.��ȡ��ͷ
		*/
	}
	//��1�� �ع�
	if (135)
	{
		/*
			1.�������ݿ�ʱָ���ַ���������Ҫ��
			2.������
			3.��ѯ��䡢���顢�����
			4.���ں��������졢���졢����
			5.ʱ������ �� �ַ�����ת��
			6.Լ��
			7.����ѯ SQL99 ���﷨ ���������ӵ� left outer join dept d on .... mysql֧�ֵȺ�����
					xxx ���ϰ��� xxx
			8.�����������⣺�������أ����Կ��ܻ��ʣ�6���ַ��� 3�������Ա�й�

			9.Ƕ��ʽ����ЩAPI����

		*/
	}
	//mysql����api����_����	(���ǵ�һ�����ҵ)
	if (136)
	{
		/*
			��һ����ҵ��
					����mysql�ĵ������Ҷ�ӦAPI������ɣ�1.��ӡ���ж�����	2.��ӡ��ͷ

					����.c�ļ��Ĵ��룺
								gcc dm01_conn.c -o dm01_conn -I/usr/include/mysql/ -L/usr/lib64/mysql/ -lmysqlclient -lstdc++ -ldl -lpthread -lm -lrt

			���
					
					1.����mysql�ĵ����õ���
							======>��ȡ������
								1) unsigned int mysql_field_count(MYSQL*mysql)			
								2) unsigned int mysql_num_fields(MYSQL RES *result)		���ؽṹ��������׵�ַ
										��ͬ�㣺ʵ�ֵĹ��ܶ���һ����
										��ͬ�㣺1 �ǴӾ����ȡ�� ��2�Ǵӽ������ȡ����
										���ӣ�	��ʦ�Ƽ�ʹ��1����Ϊ��ʱ�򹤳��ִ��sql��䣬�����û�н���������
							======>��ȡ��ͷ
								1��MYSQL_FIELD *mysql_fetch_dield(MYSQL RES *result)
								2��MYSQL_FIELD *mysql_fetch_dields(MYSQL RES *result)
										��ͬ�㣺���ǻ�ȡ��ͷ
										��ͬ�㣺1 ��һ�λ�ȡ1�У�2�ǻ�ȡ����
										���ӣ�	����2���ã�1�Ļ���Ҫѭ����ӡ��2�Ļ�һ�д��뼴��
										����ʹ�ã�Ҫ��ϻ�ȡ�����ĺ���ʹ��

					2.UE�༭ /home/mysql01/day_05/dm01_hello.c д�����
							======>��ӡ�����ı��ж����У�λ����ִ�����ѯ�����·���

								int num = mysql_field_count(connect);
								printf("�˱������Ϊ��%d\n", num);
									
									ע�⣺��ʱ�·��� ���������������ʹ�ô˲����ȡ��������������ȡ���ݣ��ô��������Ը�ǿ����ǰ���˹�ȷ���ж������ٻ�ȡ��ӡ��
										
								int i;						�ҵ�gcc��������ʾ������C99��i�������ŵ�for�У�ֻ��д������
								for(i = 0; i < num; i++)
								{
									printf("%s\t\n", row[i]);
								}
								printf("\n");

									//���߼��������������Բ�ǿ
	 										//printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t\n", row[0], row[1], row[2], row[3], row[4], row[5], row[6], row[7]);

							======>��ӡ��ͷ������λ���ڻ�ȡ��������·�
									����ʹ�ã�fields��һ���ṹ�壬.name��������Ҫ�õı�ͷ��������

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
	//mysqlӦ�ó���makefile��д
	if (137)
	{
		/*
			���γ��ֵľ��棺
					dm01_conn.c:81:2: ���棺������������ֵ�ĸ�ֵ���ǰ��������� [-Wparentheses] while(row = mysql_fetch_row(result))
			������ټ�һ�����ż��ɣ������������⣬�����: while((row = mysql_fetch_row(result)))

			��ʦ������
					1.��дmakefile�Ǻܼ򵥵����飬������úܸ���
					2.������������Ϊ��makefile���̫��ǲ�ס��ֻҪ����д�ͼ�ס�ˣ��ܼ�

			Դ���룺
					���ǰ���벻ͬ���˴���������.oȻ���ٸ���.o���ɿ�ִ���ļ�

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

			���뽲�⣺
					1.���¾��ǵ������ı��滻����������C���Եĺ꣬CC �ʹ���gcc

							CC=gcc
							CFLAGS=-Wall -g -I/usr/include/mysql/
							BIN=dm01_conn

					2.makefile���﷨��ϵ��������飺������Ŀ�ꡢ���� ���´�����ʾ��

							dm01_conn:dm01_conn.o
							$(CC) $(CFLAGS) $^ $(LFLAGS) -o $@

							======>������dm01_conn.o
							======>Ŀ�꣺dm01_conn
							======>����$(CC) $(CFLAGS) $^ $(LFLAGS) -o $@

							======>���� ���ݹ��� ������Ŀ���ļ�

					3.���ַ��ŵ����壺
							1.�ı��滻��$(CC) ���ǵ���CC����ʽ�����൱�ڣ���gcc �滻���������Ҫ�� $()
							2.%		ͨ�������ٷֺ��൱�ڡ����С��� %.c ��ָ����.c���ļ�����������linux�� *	
							3.$<	�����˼��λ������ߵ����������������ж����������ž��ǽ�����ߵ������滻����� ����
									dm01_conn:dm01.o dm02.o dm03.o dm04.o
									======>ʹ���� $< �ͻ������ߵ�����dm01.o �滻��$<��λ��

							4.$@	����Ŀ�꣬���� Ŀ�� �滻���˷���λ��
							5.$^	�������������滻����λ�ã����۶������������滻���˴���

							6.@rm -f *.o $(BIN)	��ɾ������.o�ļ� ��$(BIN) BIN�����Ѷ���Ϊ��ִ���ļ� dm01_conn ����������������

					4.���������
							======>����������� 
							dm01_conn:dm01.o dm02.o dm03.o dm04.o
							$(CC) $(CFLAGS) $^ $(LFLAGS) -o $@
							======>�����з��Ŷ����ͺ󣬹���ͱ���ˣ�
							gcc -Wall -g -I/usr/include/mysql/ dm01.o dm02.o dm03.o dm04.o -L/usr/lib64/mysql/ -I/usr/include/mysql/ -lmysqlclient -lstdc++ -ldl -lpthread -lm -lrt -lz
							======>���ݹ�������dm01_conn


					5.��������⣺
							.PHONY:clean all
							clean:
							@rm -f *.o $(BIN)
							======>makefile�ļ���������ִ��clean�� ��Ϊ�����﷨��clean���û��������ֻ��Ŀ�������Ҳ�Ͳ��������clean���ļ�
							======>��������ƽ����Ҫ������������make clean ��˼��ǿ��ִ��clean���﷨��Ҳ��ִ���� @rm -f *.o $(BIN) ɾ�����
							======>�������Ŀ¼����һ����clean���ļ����������ͻᱻ���ƣ�make clean��Ҳ������Ч��

							======>ԭ��: ����makefile �Ļ����﷨�������������ݹ�������Ŀ���ļ���һ������Ŀ���ļ���������������Ŀ���Ŀ�������
							======>���ִ����Ҫ�����䶯����ִ�У�û�������Ļ�����clean����һֱ�����µġ�Ҳ����ζ����Ҳ�޷�ִ��������䣬make clean��Ҳ������Ч

							======>���ϣ�.PHONY:clean all �Ļ������Ǹ��߱���������û��clean���ļ���������ִ��clean
			
			}
					

		*/
	}
	//��ѧ�߰�ftp���ߺ�crt����ʹ������
	if (138)
	{
		/*
			UE��telnet��CRT��ftp�Ĺ��ܶ������ˣ���ǿ��
			��Ҫֱ����windows��ֱ�����������linux��һ��Ҫ��CRT����Զ�����ӹ��ߣ�ģ�¹�������
			ʵ��Ӧ���У����������������Ƿǳ�Զ�����Ա���Ҫ����Զ�����ӹ��߲���

		*/
	}
	//makefile������˵��
	if (139)
	{
		/*
			���θĶ���
					1.���һ��dm02_tool.c���ļ�
					2.makfile�����dm02_tool.c �ı����߼�

			makefile�������ٲ��䣺
					Դ�룺
							%.o:%.c
								$(CC) $(CFLAGS) -c $< -o $@
					��˵��
							======>�����书�ܣ���Ŀ¼������.c�ļ��������� ���չ��� ����.o�ļ���Ŀ�꣩	%��ͨ����
							======>�ȷ��������Ǽ���dm02_tool.c ������������ͨ��������䣬������д��Ϊ��

							dm01_conn.o:dm01_conn.c
								$(CC) $(CFLAGS) -c dm01_conn.c -o dm01_conn.o
	
							dm02_tool.o:dm02_tool.c
								$(CC) $(CFLAGS) -c dm02_tool.c -o dm02_tool.o

							======>���Է��֣�������.c�ļ���Ҫд������䣬�����N���ļ�Ҳ��ҪдN�����
							======>���˴�ͨ��������䣬��ֻҪдһ���͹��ˣ���Ŀ¼������.c ���չ������� .o�ļ�
		*/
	}
	//�Լ�����дһ��mysql��С����tool������֮ǰoracle�ķ�sqlplus ����̬sql��
	if (140)
	{
		/*
			����Ҫ�㣺
					����ֱ�Ӵ�Դ�ļ��ȽϺ����

			����Ķ���
					1.ɾ������ע�ͣ����һ��char���飬�洢���Ǽ��������
					2.�Ķ�ԭ���ĵ�������ִ�в�ѯ������2��Ϊ���ǵ�char����
					3.��ѯ����ǰ���һ��while(1)
					4.while(1)��������´��룺
							memset(sqlbuf, 0, sizeof(sqlbuf));
							printf("\n����������sql��䣺");
							gets(sqlbuf);
							strcmp(sqlbuf, "SELECT", )
					5.�ӡ���ѯ�� ��ʼ���� ���ͷŽ������ �Ĵ��룬�ƶ���ѭ������
					6.ִ������£����һ���ԱȺ���������ȷ��Ϊʲô��� if(strncmp(sqlbuf, "select", 6) == 0)			else�Ļ���break����
					7.������ӡ���������� ���ͷŽ������ �Ĵ��룬�ƶ��� select���ж������
					8.�� return ��Ϊ goto END ����Ҫ��END���߼�д��
					9.���ô�ӡ�ַ�������������ִ�������Ϸ�

			ע��㣺
					1.���޸Ĵ����е����ӵĺ�����ѡ����һ�����ݿ��²���
					2.scanf��������ո�����gets
					3.mysql_queryҲ������ִ�����ô�ӡ�ַ�������������ӡ�������룩���磺
							mysql_query(connect, "set names utf8");

		*/
	}
	//mysql���ߵĻ������⡢���¼����⡣��ɾ�����޷�ɾ��������sqlplusһ�������޷����ϡ��·�������ܿ���������ǰ���������
	if (141 && 142)
	{
		//��������
		/*
			׼����
					1.��dm02����һ��dm03
					2.dm03��ӽ�makefile��
			
			���⣺
					1.�����н�����back�޷�ɾ���������� ^H^H^H ���ַ��ţ�ֻ��shift + del ɾ��
					2.����ǻ�������

			���������ʦ˵�����ֽ����������
					1.��shell������������򵥵ķ�������������back��ɾ����ͬʱ��shift + del ����ɾ����
								======>������º���
								void setstty()
								{
									system("stty erase ^H");//ִ��shell���Ҳ���ԣ��������ö�ȡ�û����������ʱ���˸��������
								}
								======>�޸�main��������
								int main(int arg, char* args[])
								======>main������������´��룬������֮ǰ��
								if(arg < 4)
								{
									printf("please enter: %s localhost user passwod dbname\n", args[0]);
									return -1;
								}
								setstty();

								======>������ʾ��ִ��./dm03_backspace ʱ��������϶˿ڡ��û������롢��Ӧ���ݿ⣬Ȼ������û��˼���
								./dm03_backspace localhost root root mydb1
						
					2.�ñ�̣�tty��API���������������������������һ��֪ʶ��ֻܶ࣬���Ժ����õ��ˣ�����ѧϰ��Ŀǰ֪������������Ϳ���
								�����˼·�����ǽ�������������ݴ洢���������˸�����£�����shift + del �ͻ���˵���ǰ������

								======>��ӵĺ����뿴Դ���룬�е��
								======>ʹ�÷�����shell��һ����setstty2() �Ǳ�̽���ĺ�����
								int main(int arg, char* args[])
								======>main������������´��룬������֮ǰ��
								if(arg < 4)
								{
									printf("please enter: %s localhost user passwod dbname\n", args[0]);
									return -1;
								}
								setstty2();

								======>�������ʱ��Ҫ�ָ�ϵͳ��termios����
								returnstty();

								======>ִ��./dm03_backspace ʱ��������϶˿ڡ��û������롢��Ӧ���ݿ⣬Ȼ������û��˼���
								./dm03_backspace localhost root root mydb1

								
		*/

		//���¼�����
		/*
			���·�ҳ���ܣ�
					���ϡ��·�������ܿ����л�����ǰ���������

			ʵ�ֵ�˼·��
					1.��ִ�д˳��� 1 ��ʱ������һ������ 2 ��ʱ����ţ���¼����������������
					2.�������ϡ��¼�������2 �ͻᰴ��һ������Ѽ�¼������ݵ��˳����� 
					3.��һ����Դ�����rlwrap,��Ҫ�ֶ���װ����װ���Ժ�����rlwrap sqlplus /as sysdba ����ʹ����
					4.���������Ŀ�����󣬲���ʹ������������ǾͰѸ����Դ������������ŵ����ǵĳ����м���
			ѧϰ���ص㣺
					1.��Ҫ��ѧϰ���ֽ��˼·����1����������N������˼��ܰ�
					2.����ң����������У�ң�������ܿ��ƻ������ж��ͬ�Ĺ���
					3.����һЩ�����������1����������4�����򣬵���4�����˵�ʱ�򣬳���1�ְ�����������ʵ��24Сʱ���������
		
		*/
	}
	//Ԥ����AIP�������ϣ�
	if (143)
	{
		/*
			ѧϰ������
					1.Ԥ����AIP����һ��ѣ�ͨ��������ѧϰ����Ч
					2.API������ֵ�û��ܶ�ʱ����ѧϰ��Ҫ��������
					3.��������İ������ķ������Ա���Ϊ����
								1.����֪���˴����4�����������Ԥ�������
								2.��ô���ĸ�������ؼ�����4����ִ�У�123����Ϊ��4����׼�����ʵ�4����ؼ�
								3.֪�����ĸ���ؼ������������ѵ�4����أ����ܵõ�һ��ѵ����Ϲ����ǲο�
					4.������API���������֣��Ͳ�Ҫͨ��һ�����ô���ȥѧϰ����֪���õ�ʲôʱ��
								���������֣���һ��Ҳ��֪�������÷���������API����˷�װ�õ�
								���Ը���Ҫ���ǿ����������˼·����
					5.����Ҫ����ѧϰ˼·
			׼��������
					1.copy dm03 Ϊ dm04 ɾ���󲿷֣�������ʼ�������ӣ�����ȫɾ�������������ܣ�
					2.dm04��ӵ�makefile��
					3.ȥ�ٷ��ĵ���������4����API��������õ�ʹ�ð�������ʹ�ð���ȫ���Ƶ�dm04�У������ٿ�����Щ��Ҫ����Ҫ
					4.���δ��������뿴Դ�ļ��ıʼǣ���Ϊ��һЩ�����ĺ���������ȣ��޷���˵
					
			Ԥ��������̣�
					1.��ʼ��Ԥ���������
								mysql_stmt_init()
					2.��Ԥ���������sql���ԣ��������� �ʼ������ã�����ռλ��
								mysql_stmt_prepare()
					3.��Ԥ����������ӣ��Ĳ���ֵ
								mysql_stmt_bind_param()
					4.ִ��Ԥ�����sql����
								mysql_stmt_execute()
					======>����һ������ͼһ����4ִ���꣬��ص�3������Ӳ���ֵ����Ϊ��һ����ӣ�ֻ�ǹ�����ܲ���ʼ�����ڶ��β��ǲ�������

			Ԥ����ĺô���
					���ݿ��У����㲻��Ļ������ �Ż�����
					Ԥ��������Ϊ��������ɣ���һ���Ƚ������ռλ���������
					�ڶ�������������������ֵ����������������
					����������Ч��

			����Ķ���
					1.��鿴Դ�ļ�
					2.�Ķ������̨����һ��
		
		*/
	}
	//Ԥ����AIP�������£�
	if (144)
	{
		/*
			�����ص㣺
					1.����bind�ĵײ�ԭ���Լ�Ϊ��Ҫ���ж��β���
					2.�ص���ѧϰ�����������ײ�ԭ��˼��

			Ҫ�㣺
					1.bind������������Ԫ�أ�ÿ��Ԫ����һ���ṹ��,����0��1��2���ƺ�����
					2.�����д����ı���3�У�0�����һ�У�1����ڶ��У�2���������
					3.0��1��2 ���ǵĳ�Ա�ǲ�һ���ģ���Ϊ��ͬ�е��������Ͳ�һ�������֡��ַ������ڣ�
					4.���Բ��ҵ�bind�ĺ�����������Դ���롣����ͷ�ļ�mysql.h��,vi�� Ȼ��ð������ ��MYSQL_BIND ���ҵ���
					5.��ͬԪ�ؽṹ�� �ܿص��У���һ�β���ʱ���ǹ����ṹ����ʼ�����Ҳ���sql���
					6.ִ���� �ٴβ��룬��ʱ���ǲ�������������
					5.desc table �ܲ鿴�˱������������Ϣ
		*/
	}
	//����γ̻ع�
	if (145)
	{
		/*
			��Ҫ����ʹ��UE�ĺô���
						1.��ͬʱ���û���¼������鿴windowsһ����linux��Ŀ¼�������ļ��ܷ���
						2.����root�û��Ϳ��Զ��һ���¼��������һ���û���ɲ��ң��༭���۲죬���Զ��û�ͬʱ�򿪣�ͬʱ�༭����ļ�
		*/
	}
	//mysql��ʱ����
	if(146)
	{
		/*
			
		*/
	}

	//���ݿ������Ҫ�õ�linux��oracle�������ذ�װ�˺þ�ûŪ�ã���ʱ��Ū�ˣ���ѧQt

	//Qt��1�죨��1��ѧ���ˣ���������ɺࣩܶ
	if (1)
	{
		//Qt���ܣ�Qt��һ����ƽ̨��C++ͼ���û�����Ӧ�ó����ܡ�����ƽ̨��Ӧ�ó����ܡ�ͼ�ν��棩
			//��ƽ̨����windows�ϵ�Qt������ֱ����linux�����У�javaҲ��ˣ�����ǿ�ƽ̨
			//Ӧ�ó����ܣ�����Qt�ṩ�ܶ��װ�õ��࣬����ֱ�ӵ��ü���
			//ͼ�ν��棺�ǹ���ͼ�ν���ģ�GUI�����û������QQ��steam���������
		//Qt�İ�װ·������Ŀ�Ĵ��·������Ҫ������

		//linux��ͼ�ν���kde����Qtд�ģ����г���ƻ���Ľ���

		/*Qt���ŵ�
			��ƽ̨������֧�����е�ƽ̨
			�ӿڼ򵥣��������֣�ѧϰQT��ܶ�ѧϰ��������вο����塣
			һ���̶��ϼ����ڴ���ջ���
			����Ч�ʸߣ��ܹ����ٵĹ���Ӧ�ó���
			�кܺõ�������Χ���г��ݶ��ڻ���������
			���Խ���Ƕ��ʽ������*/

		/*1��ѧϰGUI��̣��г����κ�һ���Ʒ��������ͼ�ν��棬�г��Ϻܻ��Android��IOS����޷�Ҳ��GUI app��̣�GUI��̶��ǲ�࣬ѧϰQt����ѧϰAndroid��IOS������ So easy�����㲻ѧϰAndroid��IOS������Qt��ƽ̨���ԣ�ͨ��Qtд�ĳ��������Android��IOSƽ̨�����С�

			2���������������GUI��̱Ⱥ�̨��̸��ܶ����ˣ���Ϊ����˺������ݴ����⣬����ҪЭ�����棬ͬʱ����ǰ�˺ͺ�̨��̣����ܸ��õ�д�ó���

			3��Ϊ�˸��õ�ʹ��C++��ѧϰQt�Ŀ�ܣ�Qt��C++ʵ�ֵ�Ӧ�ó����ܣ����ܶ���Ϸ����̨��������ܶ���ʹ��C++ʵ�֡�

			wps  virtual box

		���ѧϰQt��Qt�����ĵ�
		�⺯���ĵ���
		strcpy();
		1)����
		2)����
		3)����ֵ*/
	}
	if (2)
	{
		//QtӦ�ó�����
		//���鿴Qtд�ĵĳ���ʼ�

		//���������ࣨ���ࣩ��Qt�ṩ�����ǵ�
		//��1����PC���ݲ������
		//��2����ͼ�ν���Ļ��ࣨӦ�����кܶ����ͼ�ι��ܰɣ�
		//��3���ǰ���֮��Ĺ���

		//���� == ����
		//���� == ������


		/*1�������ļ���F1 ������ں������ֻ������ϣ��� F1 ������ת����Ӧ�����ĵ����鿴����ϸ�÷���

			2��.h �ļ��Ͷ�Ӧ.cpp �ļ��л���F4

			3�����벢���У�Ctrl + R

			4�����������Ͷ���(�������úͶ���)�л���F2

			5������ע��ȡ��ע�ͣ�Ctrl + / ��ѡ�д����ٰ���ݼ���

			6���������С��Ctrl + ��������������

			7���ƶ����룺ѡ����Ҫ�ƶ��Ĵ���->��ס ctrl + shift->���̷����

			8�������滻�ؼ��֣�ctrl + f

			9�����ٴ򿪴�������Ŀ¼���༭ģʽ��->ѡ����Ŀ�ļ�->�һ�->ѡ����ʾ������Ŀ¼����������ʾ��Ŀ����Ŀ¼���˷���ͬ�����Դ򿪴����ļ�����Ŀ¼��*/


	}

}

int main(void)
{



	system("pause>0");
	return 0;
}